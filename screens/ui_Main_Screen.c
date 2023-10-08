// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.2
// LVGL version: 8.3.6
// Project name: PageOasis

#include "../ui.h"

void ui_Main_Screen_screen_init(void)
{
ui_Main_Screen = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Main_Screen, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Main_Screen, lv_color_hex(0x4B4B4B), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Main_Screen, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_grad_color(ui_Main_Screen, lv_color_hex(0x111111), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_grad_dir(ui_Main_Screen, LV_GRAD_DIR_VER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_radius(ui_Main_Screen, 0, LV_PART_MAIN| LV_STATE_CHECKED);
lv_obj_set_style_radius(ui_Main_Screen, 0, LV_PART_MAIN| LV_STATE_PRESSED);

ui_Expand = lv_btn_create(ui_Main_Screen);
lv_obj_set_width( ui_Expand, 25);
lv_obj_set_height( ui_Expand, 25);
lv_obj_set_x( ui_Expand, 5 );
lv_obj_set_y( ui_Expand, 5 );
lv_obj_add_flag( ui_Expand, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Expand, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_Expand, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_Expand, lv_color_hex(0x4B4B4B), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Expand, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_img_src( ui_Expand, &ui_img_467871261, LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_img_recolor(ui_Expand, lv_color_hex(0xE6E6E6), LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_img_recolor_opa(ui_Expand, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_outline_color(ui_Expand, lv_color_hex(0x4B4B4B), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_outline_opa(ui_Expand, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_outline_width(ui_Expand, 3, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_outline_pad(ui_Expand, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Lists_Bar = lv_obj_create(ui_Main_Screen);
lv_obj_set_width( ui_Lists_Bar, 250);
lv_obj_set_height( ui_Lists_Bar, 1080);
lv_obj_set_align( ui_Lists_Bar, LV_ALIGN_LEFT_MID );
lv_obj_clear_flag( ui_Lists_Bar, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_Lists_Bar, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_Lists_Bar, lv_color_hex(0x00A8B5), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Lists_Bar, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_Lists_Bar, lv_color_hex(0x494949), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_Lists_Bar, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_color(ui_Lists_Bar, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_shadow_opa(ui_Lists_Bar, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_width(ui_Lists_Bar, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_spread(ui_Lists_Bar, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Button_Bar = lv_obj_create(ui_Lists_Bar);
lv_obj_set_width( ui_Button_Bar, 250);
lv_obj_set_height( ui_Button_Bar, 30);
lv_obj_set_x( ui_Button_Bar, 0 );
lv_obj_set_y( ui_Button_Bar, -20 );
lv_obj_set_align( ui_Button_Bar, LV_ALIGN_TOP_MID );
lv_obj_clear_flag( ui_Button_Bar, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_Button_Bar, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_Button_Bar, lv_color_hex(0x111111), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Button_Bar, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_Button_Bar, lv_color_hex(0x313030), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_Button_Bar, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_color(ui_Button_Bar, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_shadow_opa(ui_Button_Bar, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_width(ui_Button_Bar, 25, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_spread(ui_Button_Bar, 2, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Collapse = lv_btn_create(ui_Button_Bar);
lv_obj_set_width( ui_Collapse, 25);
lv_obj_set_height( ui_Collapse, 25);
lv_obj_set_x( ui_Collapse, 19 );
lv_obj_set_y( ui_Collapse, -1 );
lv_obj_set_align( ui_Collapse, LV_ALIGN_RIGHT_MID );
lv_obj_add_flag( ui_Collapse, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Collapse, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_Collapse, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_Collapse, lv_color_hex(0x111111), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Collapse, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_img_src( ui_Collapse, &ui_img_1931740894, LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_img_recolor(ui_Collapse, lv_color_hex(0xE6E6E6), LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_img_recolor_opa(ui_Collapse, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_outline_color(ui_Collapse, lv_color_hex(0x111111), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_outline_opa(ui_Collapse, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_outline_width(ui_Collapse, 2, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_outline_pad(ui_Collapse, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Settings = lv_btn_create(ui_Button_Bar);
lv_obj_set_width( ui_Settings, 25);
lv_obj_set_height( ui_Settings, 25);
lv_obj_set_x( ui_Settings, -10 );
lv_obj_set_y( ui_Settings, 0 );
lv_obj_set_align( ui_Settings, LV_ALIGN_RIGHT_MID );
lv_obj_add_flag( ui_Settings, LV_OBJ_FLAG_SCROLL_ON_FOCUS );   /// Flags
lv_obj_clear_flag( ui_Settings, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_Settings, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_Settings, lv_color_hex(0x111111), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Settings, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_img_src( ui_Settings, &ui_img_setting_icon_25px_png, LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_img_opa(ui_Settings, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_radius(ui_Settings, 0, LV_PART_MAIN| LV_STATE_CHECKED);
lv_obj_set_style_bg_img_src( ui_Settings, &ui_img_467871261, LV_PART_MAIN | LV_STATE_CHECKED );
lv_obj_set_style_bg_img_src( ui_Settings, &ui_img_setting_icon_25px_png, LV_PART_MAIN | LV_STATE_PRESSED );
lv_obj_set_style_bg_img_opa(ui_Settings, 455, LV_PART_MAIN| LV_STATE_PRESSED);

ui_LightDarkToggle = lv_switch_create(ui_Button_Bar);
lv_obj_set_width( ui_LightDarkToggle, 50);
lv_obj_set_height( ui_LightDarkToggle, 25);
lv_obj_set_x( ui_LightDarkToggle, -20 );
lv_obj_set_y( ui_LightDarkToggle, 0 );
lv_obj_set_align( ui_LightDarkToggle, LV_ALIGN_LEFT_MID );
lv_obj_set_style_radius(ui_LightDarkToggle, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_LightDarkToggle, lv_color_hex(0xCCCCCC), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_LightDarkToggle, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_outline_color(ui_LightDarkToggle, lv_color_hex(0x1F1F1F), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_outline_opa(ui_LightDarkToggle, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_outline_width(ui_LightDarkToggle, 2, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_outline_pad(ui_LightDarkToggle, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_color(ui_LightDarkToggle, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_shadow_opa(ui_LightDarkToggle, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_width(ui_LightDarkToggle, 25, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_spread(ui_LightDarkToggle, 2, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_radius(ui_LightDarkToggle, 0, LV_PART_MAIN| LV_STATE_PRESSED);
lv_obj_set_style_bg_color(ui_LightDarkToggle, lv_color_hex(0x111111), LV_PART_MAIN | LV_STATE_PRESSED );
lv_obj_set_style_bg_opa(ui_LightDarkToggle, 255, LV_PART_MAIN| LV_STATE_PRESSED);

lv_obj_set_style_radius(ui_LightDarkToggle, 0, LV_PART_INDICATOR| LV_STATE_CHECKED);
lv_obj_set_style_bg_color(ui_LightDarkToggle, lv_color_hex(0x4B4B4B), LV_PART_INDICATOR | LV_STATE_CHECKED );
lv_obj_set_style_bg_opa(ui_LightDarkToggle, 255, LV_PART_INDICATOR| LV_STATE_CHECKED);
lv_obj_set_style_outline_color(ui_LightDarkToggle, lv_color_hex(0x1F1F1F), LV_PART_INDICATOR | LV_STATE_CHECKED );
lv_obj_set_style_outline_opa(ui_LightDarkToggle, 255, LV_PART_INDICATOR| LV_STATE_CHECKED);
lv_obj_set_style_outline_width(ui_LightDarkToggle, 2, LV_PART_INDICATOR| LV_STATE_CHECKED);
lv_obj_set_style_outline_pad(ui_LightDarkToggle, 0, LV_PART_INDICATOR| LV_STATE_CHECKED);
lv_obj_set_style_shadow_color(ui_LightDarkToggle, lv_color_hex(0x000000), LV_PART_INDICATOR | LV_STATE_CHECKED );
lv_obj_set_style_shadow_opa(ui_LightDarkToggle, 255, LV_PART_INDICATOR| LV_STATE_CHECKED);
lv_obj_set_style_shadow_width(ui_LightDarkToggle, 10, LV_PART_INDICATOR| LV_STATE_CHECKED);
lv_obj_set_style_shadow_spread(ui_LightDarkToggle, 2, LV_PART_INDICATOR| LV_STATE_CHECKED);
lv_obj_set_style_radius(ui_LightDarkToggle, 0, LV_PART_INDICATOR| LV_STATE_PRESSED);
lv_obj_set_style_bg_color(ui_LightDarkToggle, lv_color_hex(0x00D7E8), LV_PART_INDICATOR | LV_STATE_PRESSED );
lv_obj_set_style_bg_opa(ui_LightDarkToggle, 255, LV_PART_INDICATOR| LV_STATE_PRESSED);

lv_obj_set_style_radius(ui_LightDarkToggle, 0, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_LightDarkToggle, lv_color_hex(0x4B4B4B), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_LightDarkToggle, 255, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_outline_color(ui_LightDarkToggle, lv_color_hex(0x1F1F1F), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_outline_opa(ui_LightDarkToggle, 255, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_outline_width(ui_LightDarkToggle, 2, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_outline_pad(ui_LightDarkToggle, 0, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_radius(ui_LightDarkToggle, 0, LV_PART_KNOB| LV_STATE_CHECKED);
lv_obj_set_style_bg_color(ui_LightDarkToggle, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_CHECKED );
lv_obj_set_style_bg_opa(ui_LightDarkToggle, 255, LV_PART_KNOB| LV_STATE_CHECKED);

ui_GridListToggle = lv_switch_create(ui_Button_Bar);
lv_obj_set_width( ui_GridListToggle, 50);
lv_obj_set_height( ui_GridListToggle, 30);
lv_obj_set_x( ui_GridListToggle, 35 );
lv_obj_set_y( ui_GridListToggle, 0 );
lv_obj_set_align( ui_GridListToggle, LV_ALIGN_LEFT_MID );
lv_obj_set_style_radius(ui_GridListToggle, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_GridListToggle, lv_color_hex(0xCCCCCC), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_GridListToggle, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_outline_color(ui_GridListToggle, lv_color_hex(0x1F1F1F), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_outline_opa(ui_GridListToggle, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_outline_width(ui_GridListToggle, 2, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_outline_pad(ui_GridListToggle, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_color(ui_GridListToggle, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_shadow_opa(ui_GridListToggle, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_width(ui_GridListToggle, 25, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_spread(ui_GridListToggle, 2, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_radius(ui_GridListToggle, 0, LV_PART_MAIN| LV_STATE_PRESSED);
lv_obj_set_style_bg_color(ui_GridListToggle, lv_color_hex(0x111111), LV_PART_MAIN | LV_STATE_PRESSED );
lv_obj_set_style_bg_opa(ui_GridListToggle, 255, LV_PART_MAIN| LV_STATE_PRESSED);

lv_obj_set_style_radius(ui_GridListToggle, 0, LV_PART_INDICATOR| LV_STATE_CHECKED);
lv_obj_set_style_bg_color(ui_GridListToggle, lv_color_hex(0x4B4B4B), LV_PART_INDICATOR | LV_STATE_CHECKED );
lv_obj_set_style_bg_opa(ui_GridListToggle, 255, LV_PART_INDICATOR| LV_STATE_CHECKED);
lv_obj_set_style_outline_color(ui_GridListToggle, lv_color_hex(0x1F1F1F), LV_PART_INDICATOR | LV_STATE_CHECKED );
lv_obj_set_style_outline_opa(ui_GridListToggle, 255, LV_PART_INDICATOR| LV_STATE_CHECKED);
lv_obj_set_style_outline_width(ui_GridListToggle, 2, LV_PART_INDICATOR| LV_STATE_CHECKED);
lv_obj_set_style_outline_pad(ui_GridListToggle, 0, LV_PART_INDICATOR| LV_STATE_CHECKED);
lv_obj_set_style_shadow_color(ui_GridListToggle, lv_color_hex(0x000000), LV_PART_INDICATOR | LV_STATE_CHECKED );
lv_obj_set_style_shadow_opa(ui_GridListToggle, 255, LV_PART_INDICATOR| LV_STATE_CHECKED);
lv_obj_set_style_shadow_width(ui_GridListToggle, 10, LV_PART_INDICATOR| LV_STATE_CHECKED);
lv_obj_set_style_shadow_spread(ui_GridListToggle, 2, LV_PART_INDICATOR| LV_STATE_CHECKED);
lv_obj_set_style_radius(ui_GridListToggle, 0, LV_PART_INDICATOR| LV_STATE_PRESSED);
lv_obj_set_style_bg_color(ui_GridListToggle, lv_color_hex(0x00D7E8), LV_PART_INDICATOR | LV_STATE_PRESSED );
lv_obj_set_style_bg_opa(ui_GridListToggle, 255, LV_PART_INDICATOR| LV_STATE_PRESSED);

lv_obj_set_style_radius(ui_GridListToggle, 0, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_GridListToggle, lv_color_hex(0x585858), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_GridListToggle, 255, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_bg_img_src( ui_GridListToggle, &ui_img_grid_view_25px_png, LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_bg_img_recolor(ui_GridListToggle, lv_color_hex(0x111111), LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_bg_img_recolor_opa(ui_GridListToggle, 255, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_outline_color(ui_GridListToggle, lv_color_hex(0x1F1F1F), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_outline_opa(ui_GridListToggle, 255, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_outline_width(ui_GridListToggle, 2, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_outline_pad(ui_GridListToggle, 0, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_radius(ui_GridListToggle, 0, LV_PART_KNOB| LV_STATE_CHECKED);
lv_obj_set_style_bg_color(ui_GridListToggle, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_CHECKED );
lv_obj_set_style_bg_opa(ui_GridListToggle, 255, LV_PART_KNOB| LV_STATE_CHECKED);
lv_obj_set_style_bg_img_src( ui_GridListToggle, &ui_img_list_view_25px_png, LV_PART_KNOB | LV_STATE_CHECKED );
lv_obj_set_style_bg_img_recolor(ui_GridListToggle, lv_color_hex(0x111111), LV_PART_KNOB| LV_STATE_CHECKED);
lv_obj_set_style_bg_img_recolor_opa(ui_GridListToggle, 255, LV_PART_KNOB| LV_STATE_CHECKED);

ui_SortToggle = lv_switch_create(ui_Button_Bar);
lv_obj_set_width( ui_SortToggle, 50);
lv_obj_set_height( ui_SortToggle, 30);
lv_obj_set_x( ui_SortToggle, 90 );
lv_obj_set_y( ui_SortToggle, 0 );
lv_obj_set_align( ui_SortToggle, LV_ALIGN_LEFT_MID );
lv_obj_set_style_radius(ui_SortToggle, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_SortToggle, lv_color_hex(0xCCCCCC), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_SortToggle, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_outline_color(ui_SortToggle, lv_color_hex(0x1F1F1F), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_outline_opa(ui_SortToggle, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_outline_width(ui_SortToggle, 2, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_outline_pad(ui_SortToggle, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_color(ui_SortToggle, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_shadow_opa(ui_SortToggle, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_width(ui_SortToggle, 25, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_shadow_spread(ui_SortToggle, 2, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_radius(ui_SortToggle, 0, LV_PART_MAIN| LV_STATE_PRESSED);
lv_obj_set_style_bg_color(ui_SortToggle, lv_color_hex(0x111111), LV_PART_MAIN | LV_STATE_PRESSED );
lv_obj_set_style_bg_opa(ui_SortToggle, 255, LV_PART_MAIN| LV_STATE_PRESSED);

lv_obj_set_style_radius(ui_SortToggle, 0, LV_PART_INDICATOR| LV_STATE_CHECKED);
lv_obj_set_style_bg_color(ui_SortToggle, lv_color_hex(0x4B4B4B), LV_PART_INDICATOR | LV_STATE_CHECKED );
lv_obj_set_style_bg_opa(ui_SortToggle, 255, LV_PART_INDICATOR| LV_STATE_CHECKED);
lv_obj_set_style_outline_color(ui_SortToggle, lv_color_hex(0x1F1F1F), LV_PART_INDICATOR | LV_STATE_CHECKED );
lv_obj_set_style_outline_opa(ui_SortToggle, 255, LV_PART_INDICATOR| LV_STATE_CHECKED);
lv_obj_set_style_outline_width(ui_SortToggle, 2, LV_PART_INDICATOR| LV_STATE_CHECKED);
lv_obj_set_style_outline_pad(ui_SortToggle, 0, LV_PART_INDICATOR| LV_STATE_CHECKED);
lv_obj_set_style_shadow_color(ui_SortToggle, lv_color_hex(0x000000), LV_PART_INDICATOR | LV_STATE_CHECKED );
lv_obj_set_style_shadow_opa(ui_SortToggle, 255, LV_PART_INDICATOR| LV_STATE_CHECKED);
lv_obj_set_style_shadow_width(ui_SortToggle, 10, LV_PART_INDICATOR| LV_STATE_CHECKED);
lv_obj_set_style_shadow_spread(ui_SortToggle, 2, LV_PART_INDICATOR| LV_STATE_CHECKED);
lv_obj_set_style_radius(ui_SortToggle, 0, LV_PART_INDICATOR| LV_STATE_PRESSED);
lv_obj_set_style_bg_color(ui_SortToggle, lv_color_hex(0x00D7E8), LV_PART_INDICATOR | LV_STATE_PRESSED );
lv_obj_set_style_bg_opa(ui_SortToggle, 255, LV_PART_INDICATOR| LV_STATE_PRESSED);

lv_obj_set_style_radius(ui_SortToggle, 0, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_SortToggle, lv_color_hex(0x585858), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_SortToggle, 255, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_bg_img_src( ui_SortToggle, &ui_img_1121264212, LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_bg_img_recolor(ui_SortToggle, lv_color_hex(0x111111), LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_bg_img_recolor_opa(ui_SortToggle, 255, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_outline_color(ui_SortToggle, lv_color_hex(0x1F1F1F), LV_PART_KNOB | LV_STATE_DEFAULT );
lv_obj_set_style_outline_opa(ui_SortToggle, 255, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_outline_width(ui_SortToggle, 2, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_outline_pad(ui_SortToggle, 0, LV_PART_KNOB| LV_STATE_DEFAULT);
lv_obj_set_style_radius(ui_SortToggle, 0, LV_PART_KNOB| LV_STATE_CHECKED);
lv_obj_set_style_bg_color(ui_SortToggle, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_CHECKED );
lv_obj_set_style_bg_opa(ui_SortToggle, 255, LV_PART_KNOB| LV_STATE_CHECKED);
lv_obj_set_style_bg_img_src( ui_SortToggle, &ui_img_1508908300, LV_PART_KNOB | LV_STATE_CHECKED );
lv_obj_set_style_bg_img_recolor(ui_SortToggle, lv_color_hex(0x111111), LV_PART_KNOB| LV_STATE_CHECKED);
lv_obj_set_style_bg_img_recolor_opa(ui_SortToggle, 255, LV_PART_KNOB| LV_STATE_CHECKED);

ui_Lists_Title_Bar = lv_obj_create(ui_Lists_Bar);
lv_obj_set_width( ui_Lists_Title_Bar, 250);
lv_obj_set_height( ui_Lists_Title_Bar, 40);
lv_obj_set_x( ui_Lists_Title_Bar, 0 );
lv_obj_set_y( ui_Lists_Title_Bar, 10 );
lv_obj_set_align( ui_Lists_Title_Bar, LV_ALIGN_TOP_MID );
lv_obj_clear_flag( ui_Lists_Title_Bar, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_radius(ui_Lists_Title_Bar, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_Lists_Title_Bar, lv_color_hex(0x007982), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Lists_Title_Bar, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_Lists_Title_Bar, lv_color_hex(0x007982), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_Lists_Title_Bar, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_List_Title = lv_label_create(ui_Lists_Title_Bar);
lv_obj_set_width( ui_List_Title, 60);
lv_obj_set_height( ui_List_Title, LV_SIZE_CONTENT);   /// 1
lv_obj_set_align( ui_List_Title, LV_ALIGN_CENTER );
lv_label_set_text(ui_List_Title,"Lists");
lv_obj_set_style_text_color(ui_List_Title, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_List_Title, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_List_Title, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_decor(ui_List_Title, LV_TEXT_DECOR_NONE, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_List_Title, &lv_font_montserrat_24, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_PageOasisLogo = lv_img_create(ui_Main_Screen);
lv_img_set_src(ui_PageOasisLogo, &ui_img_pageoasislogo_png);
lv_obj_set_width( ui_PageOasisLogo, LV_SIZE_CONTENT);  /// 1
lv_obj_set_height( ui_PageOasisLogo, LV_SIZE_CONTENT);   /// 1
lv_obj_set_x( ui_PageOasisLogo, 104 );
lv_obj_set_y( ui_PageOasisLogo, -476 );
lv_obj_set_align( ui_PageOasisLogo, LV_ALIGN_CENTER );
lv_obj_add_flag( ui_PageOasisLogo, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_PageOasisLogo, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

lv_obj_add_event_cb(ui_Expand, ui_event_Expand, LV_EVENT_ALL, NULL);
lv_obj_add_event_cb(ui_Collapse, ui_event_Collapse, LV_EVENT_ALL, NULL);

}
