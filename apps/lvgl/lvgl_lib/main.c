#include "lvgl/lvgl.h"
#include "lv_drivers/display/fbdev.h"
#include <unistd.h>

int main(void)
{
    /*LVGL init*/
    lv_init();

    /*Linux frame buffer device init*/
    fbdev_init();
    
   /*A small buffer for LittlevGL to draw the screen's content*/
    static lv_color_t buf[DISP_BUF_SIZE];

    /*Initialize a descriptor for the buffer*/
    static lv_disp_draw_buf_t disp_buf;
    lv_disp_draw_buf_init(&disp_buf, buf, NULL, DISP_BUF_SIZE);

    /*Initialize and register a display driver*/
    static lv_disp_drv_t disp_drv;
    lv_disp_drv_init(&disp_drv);
    disp_drv.draw_buf   = &disp_buf;
    disp_drv.flush_cb   = fbdev_flush;
    disp_drv.hor_res    = 240;
    disp_drv.ver_res    = 240;
    lv_disp_drv_register(&disp_drv);

    /*Create a "Hello world!" label*/
    lv_obj_t * label = lv_label_create(lv_scr_act());
    lv_label_set_text(label, "Hello world!");
    lv_obj_align(label, LV_ALIGN_CENTER, 0, 0);

    /*Handle LitlevGL tasks (tickless mode)*/
    demo_creat();
    while(1) {
        lv_tick_inc(5);
        lv_timer_handler();
        usleep(5000);
    }

    return 0;
}