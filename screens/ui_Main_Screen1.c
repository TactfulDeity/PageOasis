// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.2
// LVGL version: 8.3.6
// Project name: PageOasis

#include "../ui.h"

void ui_Main_Screen1_screen_init(void)
{
ui_Main_Screen1 = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Main_Screen1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Main_Screen1, lv_color_hex(0x4B4B4B), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Main_Screen1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_grad_color(ui_Main_Screen1, lv_color_hex(0x111111), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_grad_dir(ui_Main_Screen1, LV_GRAD_DIR_VER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_radius(ui_Main_Screen1, 0, LV_PART_MAIN| LV_STATE_CHECKED);
lv_obj_set_style_radius(ui_Main_Screen1, 0, LV_PART_MAIN| LV_STATE_PRESSED);

ui_Expand1 = lv_btn_create(ui_Main_Screen1);
lv_obj_set_width( ui_Expand1, 25);
lv_obj_set_height( ui_Expand1, 25);
lv_obj_set_x( ui_Expand1, 5 );
lv_obj_set_y( ui_Expand1, 5 );
lv_obj_add_flag( ui_Expand1, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Expand1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_Expand1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_Expand1, lv_color_hex(0x4B4B4B), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Expand1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_img_src( ui_Expand1, &ui_img_467871261, LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_img_recolor(ui_Expand1, lv_color_hex(0xE6E6E6), LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_img_recolor_opa(ui_Expand1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_outline_color(ui_Expand1, lv_color_hex(0x4B4B4B), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_outline_opa(ui_Expand1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_outline_width(ui_Expand1, 3, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_outline_pad(ui_Expand1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Lists_Bar1 = lv_obj_create(ui_Main_Screen1);
lv_obj_set_width( ui_Lists_Bar1, 250);
lv_obj_set_height( ui_Lists_Bar1, 1080);
lv_obj_set_align( ui_Lists_Bar1, LV_ALIGN_LEFT_MID );
lv_obj_clear_flag( ui_Lists_Bar1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_Lists_Bar1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_Lists_Bar1, lv_color_hex(0x00A8B5), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Lists_Bar1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_Lists_Bar1, lv_color_hex(0x494949), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_Lists_Bar1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_color(ui_Lists_Bar1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_shadow_opa(ui_Lists_Bar1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_width(ui_Lists_Bar1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_spread(ui_Lists_Bar1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Button_Bar1 = lv_obj_create(ui_Lists_Bar1);
lv_obj_set_width( ui_Button_Bar1, 250);
lv_obj_set_height( ui_Button_Bar1, 30);
lv_obj_set_x( ui_Button_Bar1, 0 );
lv_obj_set_y( ui_Button_Bar1, -20 );
lv_obj_set_align( ui_Button_Bar1, LV_ALIGN_TOP_MID );
lv_obj_clear_flag( ui_Button_Bar1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_Button_Bar1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_Button_Bar1, lv_color_hex(0x111111), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Button_Bar1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_Button_Bar1, lv_color_hex(0x313030), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_Button_Bar1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_color(ui_Button_Bar1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_shadow_opa(ui_Button_Bar1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_width(ui_Button_Bar1, 25, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_spread(ui_Button_Bar1, 2, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Collapse1 = lv_btn_create(ui_Button_Bar1);
lv_obj_set_width( ui_Collapse1, 25);
lv_obj_set_height( ui_Collapse1, 25);
lv_obj_set_x( ui_Collapse1, 19 );
lv_obj_set_y( ui_Collapse1, -1 );
lv_obj_set_align( ui_Collapse1, LV_ALIGN_RIGHT_MID );
lv_obj_add_flag( ui_Collapse1, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Collapse1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_Collapse1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_Collapse1, lv_color_hex(0x111111), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Collapse1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_img_src( ui_Collapse1, &ui_img_1931740894, LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_img_recolor(ui_Collapse1, lv_color_hex(0xE6E6E6), LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_img_recolor_opa(ui_Collapse1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_outline_color(ui_Collapse1, lv_color_hex(0x111111), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_outline_opa(ui_Collapse1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_outline_width(ui_Collapse1, 2, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_outline_pad(ui_Collapse1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Settings1 = lv_btn_create(ui_Button_Bar1);
lv_obj_set_width( ui_Settings1, 25);
lv_obj_set_height( ui_Settings1, 25);
lv_obj_set_x( ui_Settings1, -10 );
lv_obj_set_y( ui_Settings1, 0 );
lv_obj_set_align( ui_Settings1, LV_ALIGN_RIGHT_MID );
lv_obj_add_flag( ui_Settings1, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Settings1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_Settings1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_Settings1, lv_color_hex(0x111111), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Settings1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_img_src( ui_Settings1, &ui_img_setting_icon_25px_png, LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_img_opa(ui_Settings1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_radius(ui_Settings1, 0, LV_PART_MAIN| LV_STATE_CHECKED);
lv_obj_set_style_bg_img_src( ui_Settings1, &ui_img_467871261, LV_PART_MAIN | LV_STATE_CHECKED );
lv_obj_set_style_bg_img_src( ui_Settings1, &ui_img_setting_icon_25px_png, LV_PART_MAIN | LV_STATE_PRESSED );
lv_obj_set_style_bg_img_opa(ui_Settings1, 455, LV_PART_MAIN| LV_STATE_PRESSED);

ui_LightDarkToggle1 = lv_switch_create(ui_Button_Bar1);
lv_obj_set_width( ui_LightDarkToggle1, 50);
lv_obj_set_height( ui_LightDarkToggle1, 25);
lv_obj_set_x( ui_LightDarkToggle1, -20 );
lv_obj_set_y( ui_LightDarkToggle1, 0 );
lv_obj_set_align( ui_LightDarkToggle1, LV_ALIGN_LEFT_MID );
lv_obj_add_state( ui_LightDarkToggle1, LV_STATE_CHECKED );     /// States
lv_obj_set_style_radius(ui_LightDarkToggle1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_LightDarkToggle1, lv_color_hex(0xCCCCCC), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_LightDarkToggle1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_outline_color(ui_LightDarkToggle1, lv_color_hex(0x1F1F1F), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_outline_opa(ui_LightDarkToggle1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_outline_width(ui_LightDarkToggle1, 2, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_outline_pad(ui_LightDarkToggle1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_color(ui_LightDarkToggle1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_shadow_opa(ui_LightDarkToggle1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_width(ui_LightDarkToggle1, 25, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_spread(ui_LightDarkToggle1, 2, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_radius(ui_LightDarkToggle1, 0, LV_PART_MAIN| LV_STATE_PRESSED);
lv_obj_set_style_bg_color(ui_LightDarkToggle1, lv_color_hex(0x111111), LV_PART_MAIN | LV_STATE_PRESSED );
lv_obj_set_style_bg_opa(ui_LightDarkToggle1, 255, LV_PART_MAIN| LV_STATE_PRESSED);

lv_obj_set_style_radius(ui_LightDarkToggle1, 0, LV_PART_INDICATOR| LV_STATE_CHECKED);
lv_obj_set_style_bg_color(ui_LightDarkToggle1, lv_color_hex(0x4B4B4B), LV_PART_INDICATOR | LV_STATE_CHECKED );
lv_obj_set_style_bg_opa(ui_LightDarkToggle1, 255, LV_PART_INDICATOR| LV_STATE_CHECKED);
lv_obj_set_style_outline_color(ui_LightDarkToggle1, lv_color_hex(0x1F1F1F), LV_PART_INDICATOR | LV_STATE_CHECKED );
lv_obj_set_style_outline_opa(ui_LightDarkToggle1, 255, LV_PART_INDICATOR| LV_STATE_CHECKED);
lv_obj_set_style_outline_width(ui_LightDarkToggle1, 2, LV_PART_INDICATOR| LV_STATE_CHECKED);
lv_obj_set_style_outline_pad(ui_LightDarkToggle1, 0, LV_PART_INDICATOR| LV_STATE_CHECKED);
lv_obj_set_style_shadow_color(ui_LightDarkToggle1, lv_color_hex(0x000000), LV_PART_INDICATOR | LV_STATE_CHECKED );
lv_obj_set_style_shadow_opa(ui_LightDarkToggle1, 255, LV_PART_INDICATOR| LV_STATE_CHECKED);
lv_obj_set_style_shadow_width(ui_LightDarkToggle1, 10, LV_PART_INDICATOR| LV_STATE_CHECKED);
lv_obj_set_style_shadow_spread(ui_LightDarkToggle1, 2, LV_PART_INDICATOR| LV_STATE_CHECKED);
lv_obj_set_style_radius(ui_LightDarkToggle1, 0, LV_PART_INDICATOR| LV_STATE_PRESSED);
lv_obj_set_style_bg_color(ui_LightDarkToggle1, lv_color_hex(0x00D7E8), LV_PART_INDICATOR | LV_STATE_PRESSED );
lv_obj_set_style_bg_opa(ui_LightDarkToggle1, 255, LV_PART_INDICATOR| LV_STATE_PRESSED);

lv_obj_set_style_radius(ui_LightDarkToggle1, 0, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_LightDarkToggle1, lv_color_hex(0x4B4B4B), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_LightDarkToggle1, 255, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_outline_color(ui_LightDarkToggle1, lv_color_hex(0x1F1F1F), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_outline_opa(ui_LightDarkToggle1, 255, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_outline_width(ui_LightDarkToggle1, 2, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_outline_pad(ui_LightDarkToggle1, 0, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_radius(ui_LightDarkToggle1, 0, LV_PART_KNOB| LV_STATE_CHECKED);
lv_obj_set_style_bg_color(ui_LightDarkToggle1, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_CHECKED );
lv_obj_set_style_bg_opa(ui_LightDarkToggle1, 255, LV_PART_KNOB| LV_STATE_CHECKED);

ui_GridListToggle1 = lv_switch_create(ui_Button_Bar1);
lv_obj_set_width( ui_GridListToggle1, 50);
lv_obj_set_height( ui_GridListToggle1, 30);
lv_obj_set_x( ui_GridListToggle1, 35 );
lv_obj_set_y( ui_GridListToggle1, 0 );
lv_obj_set_align( ui_GridListToggle1, LV_ALIGN_LEFT_MID );
lv_obj_set_style_radius(ui_GridListToggle1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_GridListToggle1, lv_color_hex(0xCCCCCC), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_GridListToggle1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_outline_color(ui_GridListToggle1, lv_color_hex(0x1F1F1F), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_outline_opa(ui_GridListToggle1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_outline_width(ui_GridListToggle1, 2, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_outline_pad(ui_GridListToggle1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_color(ui_GridListToggle1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_shadow_opa(ui_GridListToggle1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_width(ui_GridListToggle1, 25, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_spread(ui_GridListToggle1, 2, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_radius(ui_GridListToggle1, 0, LV_PART_MAIN| LV_STATE_PRESSED);
lv_obj_set_style_bg_color(ui_GridListToggle1, lv_color_hex(0x111111), LV_PART_MAIN | LV_STATE_PRESSED );
lv_obj_set_style_bg_opa(ui_GridListToggle1, 255, LV_PART_MAIN| LV_STATE_PRESSED);

lv_obj_set_style_radius(ui_GridListToggle1, 0, LV_PART_INDICATOR| LV_STATE_CHECKED);
lv_obj_set_style_bg_color(ui_GridListToggle1, lv_color_hex(0x4B4B4B), LV_PART_INDICATOR | LV_STATE_CHECKED );
lv_obj_set_style_bg_opa(ui_GridListToggle1, 255, LV_PART_INDICATOR| LV_STATE_CHECKED);
lv_obj_set_style_outline_color(ui_GridListToggle1, lv_color_hex(0x1F1F1F), LV_PART_INDICATOR | LV_STATE_CHECKED );
lv_obj_set_style_outline_opa(ui_GridListToggle1, 255, LV_PART_INDICATOR| LV_STATE_CHECKED);
lv_obj_set_style_outline_width(ui_GridListToggle1, 2, LV_PART_INDICATOR| LV_STATE_CHECKED);
lv_obj_set_style_outline_pad(ui_GridListToggle1, 0, LV_PART_INDICATOR| LV_STATE_CHECKED);
lv_obj_set_style_shadow_color(ui_GridListToggle1, lv_color_hex(0x000000), LV_PART_INDICATOR | LV_STATE_CHECKED );
lv_obj_set_style_shadow_opa(ui_GridListToggle1, 255, LV_PART_INDICATOR| LV_STATE_CHECKED);
lv_obj_set_style_shadow_width(ui_GridListToggle1, 10, LV_PART_INDICATOR| LV_STATE_CHECKED);
lv_obj_set_style_shadow_spread(ui_GridListToggle1, 2, LV_PART_INDICATOR| LV_STATE_CHECKED);
lv_obj_set_style_radius(ui_GridListToggle1, 0, LV_PART_INDICATOR| LV_STATE_PRESSED);
lv_obj_set_style_bg_color(ui_GridListToggle1, lv_color_hex(0x00D7E8), LV_PART_INDICATOR | LV_STATE_PRESSED );
lv_obj_set_style_bg_opa(ui_GridListToggle1, 255, LV_PART_INDICATOR| LV_STATE_PRESSED);

lv_obj_set_style_radius(ui_GridListToggle1, 0, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_GridListToggle1, lv_color_hex(0x585858), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_GridListToggle1, 255, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_bg_img_src( ui_GridListToggle1, &ui_img_grid_view_25px_png, LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_bg_img_recolor(ui_GridListToggle1, lv_color_hex(0x111111), LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_bg_img_recolor_opa(ui_GridListToggle1, 255, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_outline_color(ui_GridListToggle1, lv_color_hex(0x1F1F1F), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_outline_opa(ui_GridListToggle1, 255, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_outline_width(ui_GridListToggle1, 2, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_outline_pad(ui_GridListToggle1, 0, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_radius(ui_GridListToggle1, 0, LV_PART_KNOB| LV_STATE_CHECKED);
lv_obj_set_style_bg_color(ui_GridListToggle1, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_CHECKED );
lv_obj_set_style_bg_opa(ui_GridListToggle1, 255, LV_PART_KNOB| LV_STATE_CHECKED);
lv_obj_set_style_bg_img_src( ui_GridListToggle1, &ui_img_list_view_25px_png, LV_PART_KNOB | LV_STATE_CHECKED );
lv_obj_set_style_bg_img_recolor(ui_GridListToggle1, lv_color_hex(0x111111), LV_PART_KNOB| LV_STATE_CHECKED);
lv_obj_set_style_bg_img_recolor_opa(ui_GridListToggle1, 255, LV_PART_KNOB| LV_STATE_CHECKED);

ui_Lists_Title_Bar1 = lv_obj_create(ui_Lists_Bar1);
lv_obj_set_width( ui_Lists_Title_Bar1, 250);
lv_obj_set_height( ui_Lists_Title_Bar1, 40);
lv_obj_set_x( ui_Lists_Title_Bar1, 0 );
lv_obj_set_y( ui_Lists_Title_Bar1, 10 );
lv_obj_set_align( ui_Lists_Title_Bar1, LV_ALIGN_TOP_MID );
lv_obj_clear_flag( ui_Lists_Title_Bar1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_Lists_Title_Bar1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_Lists_Title_Bar1, lv_color_hex(0x007982), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Lists_Title_Bar1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_Lists_Title_Bar1, lv_color_hex(0x007982), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_Lists_Title_Bar1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_List_Title1 = lv_label_create(ui_Lists_Title_Bar1);
lv_obj_set_width( ui_List_Title1, 60);
lv_obj_set_height( ui_List_Title1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_List_Title1, LV_ALIGN_CENTER );
lv_label_set_text(ui_List_Title1,"Lists");
lv_obj_set_style_text_color(ui_List_Title1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_List_Title1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_List_Title1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_decor(ui_List_Title1, LV_TEXT_DECOR_NONE, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_List_Title1, &lv_font_montserrat_24, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Sort_Lists1 = lv_dropdown_create(ui_Lists_Bar1);
lv_dropdown_set_options( ui_Sort_Lists1, "A-Z\nZ-A\nFavorites\nRecent\nLists" );
lv_obj_set_width( ui_Sort_Lists1, 130);
lv_obj_set_height( ui_Sort_Lists1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_Sort_Lists1, 1 );
lv_obj_set_y( ui_Sort_Lists1, 55 );
lv_obj_set_align( ui_Sort_Lists1, LV_ALIGN_TOP_MID );
lv_obj_add_flag( ui_Sort_Lists1, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_set_style_text_color(ui_Sort_Lists1, lv_color_hex(0xCCCCCC), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_Sort_Lists1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_Sort_Lists1, &lv_font_montserrat_18, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_radius(ui_Sort_Lists1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_Sort_Lists1, lv_color_hex(0x00A8B5), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Sort_Lists1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_Sort_Lists1, lv_color_hex(0x00A8B5), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_Sort_Lists1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

lv_obj_set_style_radius(lv_dropdown_get_list(ui_Sort_Lists1), 0,  LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(lv_dropdown_get_list(ui_Sort_Lists1), lv_color_hex(0x4B4B4B),  LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(lv_dropdown_get_list(ui_Sort_Lists1), 255,  LV_PART_MAIN| LV_STATE_DEFAULT);

ui_PageOasisLogo1 = lv_img_create(ui_Main_Screen1);
lv_img_set_src(ui_PageOasisLogo1, &ui_img_pageoasislogo_png);
lv_obj_set_width( ui_PageOasisLogo1, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_PageOasisLogo1, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_PageOasisLogo1, 104 );
lv_obj_set_y( ui_PageOasisLogo1, -476 );
lv_obj_set_align( ui_PageOasisLogo1, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_PageOasisLogo1, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_PageOasisLogo1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

lv_obj_add_event_cb(ui_Expand1, ui_event_Expand1, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_Collapse1, ui_event_Collapse1, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_LightDarkToggle1, ui_event_LightDarkToggle1, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_GridListToggle1, ui_event_GridListToggle1, LV_EVENT_ALL, NULL);

}
