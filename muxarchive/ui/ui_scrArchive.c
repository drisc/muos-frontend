// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.6
// Project name: muxarchive

#include "ui.h"

void ui_scrArchive_screen_init(void)
{
    ui_scrArchive = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_scrArchive, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_scrArchive, lv_color_hex(0x100808), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_scrArchive, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_scrArchive, &ui_font_NotoSans, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_pnlWall = lv_obj_create(ui_scrArchive);
    lv_obj_set_width(ui_pnlWall, 640);
    lv_obj_set_height(ui_pnlWall, 480);
    lv_obj_set_align(ui_pnlWall, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_pnlWall, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_pnlWall, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_pnlWall, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_pnlWall, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_pnlWall, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_pnlWall, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_pnlWall, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_pnlWall, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_imgWall = lv_img_create(ui_pnlWall);
    lv_img_set_src(ui_imgWall, &ui_img_nothing_png);
    lv_obj_set_width(ui_imgWall, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_imgWall, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_imgWall, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_imgWall, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_imgWall, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_imgWall, LV_SCROLLBAR_MODE_OFF);

    ui_pnlContent = lv_obj_create(ui_scrArchive);
    lv_obj_set_width(ui_pnlContent, 640);
    lv_obj_set_height(ui_pnlContent, 392);
    lv_obj_set_x(ui_pnlContent, 0);
    lv_obj_set_y(ui_pnlContent, 44);
    lv_obj_set_align(ui_pnlContent, LV_ALIGN_TOP_MID);
    lv_obj_set_flex_flow(ui_pnlContent, LV_FLEX_FLOW_ROW_WRAP);
    lv_obj_set_flex_align(ui_pnlContent, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(ui_pnlContent, LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_CHAIN);      /// Flags
    lv_obj_set_scrollbar_mode(ui_pnlContent, LV_SCROLLBAR_MODE_ON);
    lv_obj_set_scroll_dir(ui_pnlContent, LV_DIR_VER);
    lv_obj_set_style_bg_color(ui_pnlContent, lv_color_hex(0x0D0803), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_pnlContent, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_pnlContent, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_pnlContent, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_pnlContent, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_pnlContent, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_pnlContent, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(ui_pnlContent, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_pnlContent, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_pnlContent, lv_color_hex(0x000000), LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_pnlContent, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);

    ui_pnlHeader = lv_obj_create(ui_scrArchive);
    lv_obj_set_width(ui_pnlHeader, 640);
    lv_obj_set_height(ui_pnlHeader, 42);
    lv_obj_set_align(ui_pnlHeader, LV_ALIGN_TOP_MID);
    lv_obj_set_flex_flow(ui_pnlHeader, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_pnlHeader, LV_FLEX_ALIGN_SPACE_BETWEEN, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_pnlHeader, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_pnlHeader, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_pnlHeader, lv_color_hex(0x100808), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_pnlHeader, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_pnlHeader, lv_color_hex(0x0D0803), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_pnlHeader, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_pnlHeader, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_pnlHeader, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_pnlHeader, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_pnlHeader, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_pnlHeader, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblDatetime = lv_label_create(ui_pnlHeader);
    lv_obj_set_height(ui_lblDatetime, 42);
    lv_obj_set_width(ui_lblDatetime, LV_SIZE_CONTENT);   /// 1
    lv_label_set_long_mode(ui_lblDatetime, LV_LABEL_LONG_DOT);
    lv_label_set_text(ui_lblDatetime, "");
    lv_obj_add_flag(ui_lblDatetime, LV_OBJ_FLAG_FLOATING);     /// Flags
    lv_obj_set_style_text_color(ui_lblDatetime, lv_color_hex(0xF7E318), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblDatetime, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_lblDatetime, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_lblDatetime, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_lblDatetime, 9, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_lblDatetime, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblTitle = lv_label_create(ui_pnlHeader);
    lv_obj_set_width(ui_lblTitle, 640);
    lv_obj_set_height(ui_lblTitle, 42);
    lv_obj_set_align(ui_lblTitle, LV_ALIGN_TOP_MID);
    lv_label_set_long_mode(ui_lblTitle, LV_LABEL_LONG_DOT);
    lv_label_set_text(ui_lblTitle, "ARCHIVE MANAGER");
    lv_obj_add_flag(ui_lblTitle, LV_OBJ_FLAG_FLOATING);     /// Flags
    lv_obj_set_style_text_color(ui_lblTitle, lv_color_hex(0xF7E318), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblTitle, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_lblTitle, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_lblTitle, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_lblTitle, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_lblTitle, 9, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_lblTitle, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_conGlyphs = lv_obj_create(ui_pnlHeader);
    lv_obj_remove_style_all(ui_conGlyphs);
    lv_obj_set_width(ui_conGlyphs, 110);
    lv_obj_set_height(ui_conGlyphs, 42);
    lv_obj_set_align(ui_conGlyphs, LV_ALIGN_TOP_RIGHT);
    lv_obj_set_flex_flow(ui_conGlyphs, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_conGlyphs, LV_FLEX_ALIGN_END, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_add_flag(ui_conGlyphs, LV_OBJ_FLAG_FLOATING);     /// Flags
    lv_obj_clear_flag(ui_conGlyphs, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_pad_left(ui_conGlyphs, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_conGlyphs, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_conGlyphs, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_conGlyphs, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_staBluetooth = lv_label_create(ui_conGlyphs);
    lv_obj_set_width(ui_staBluetooth, 20);
    lv_obj_set_height(ui_staBluetooth, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_staBluetooth, -220);
    lv_obj_set_y(ui_staBluetooth, -205);
    lv_obj_set_align(ui_staBluetooth, LV_ALIGN_TOP_RIGHT);
    lv_label_set_text(ui_staBluetooth, "");
    lv_obj_set_style_text_color(ui_staBluetooth, lv_color_hex(0xA5B2B5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_staBluetooth, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_staBluetooth, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_staBluetooth, &ui_font_AwesomeBrand, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_staBluetooth, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_staBluetooth, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_staBluetooth, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_staBluetooth, 3, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_staNetwork = lv_label_create(ui_conGlyphs);
    lv_obj_set_width(ui_staNetwork, 30);
    lv_obj_set_height(ui_staNetwork, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_staNetwork, -220);
    lv_obj_set_y(ui_staNetwork, -205);
    lv_obj_set_align(ui_staNetwork, LV_ALIGN_TOP_RIGHT);
    lv_label_set_text(ui_staNetwork, "");
    lv_obj_set_style_text_color(ui_staNetwork, lv_color_hex(0xA5B2B5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_staNetwork, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_staNetwork, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_staNetwork, &ui_font_Awesome, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_staNetwork, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_staNetwork, 6, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_staNetwork, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_staNetwork, 3, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_staCapacity = lv_label_create(ui_conGlyphs);
    lv_obj_set_width(ui_staCapacity, 35);
    lv_obj_set_height(ui_staCapacity, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_staCapacity, -220);
    lv_obj_set_y(ui_staCapacity, -205);
    lv_obj_set_align(ui_staCapacity, LV_ALIGN_TOP_RIGHT);
    lv_label_set_text(ui_staCapacity, "");
    lv_obj_set_style_text_color(ui_staCapacity, lv_color_hex(0xF7E318), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_staCapacity, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_staCapacity, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_staCapacity, &ui_font_AwesomeBig, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_staCapacity, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_staCapacity, -4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_staCapacity, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_staCapacity, 3, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_pnlFooter = lv_obj_create(ui_scrArchive);
    lv_obj_set_width(ui_pnlFooter, 640);
    lv_obj_set_height(ui_pnlFooter, 42);
    lv_obj_set_align(ui_pnlFooter, LV_ALIGN_BOTTOM_MID);
    lv_obj_set_flex_flow(ui_pnlFooter, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_pnlFooter, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_pnlFooter, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_pnlFooter, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_pnlFooter, lv_color_hex(0x100808), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_pnlFooter, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_pnlFooter, lv_color_hex(0x0D0803), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_pnlFooter, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_pnlFooter, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_pnlFooter, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_pnlFooter, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_pnlFooter, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_pnlFooter, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(ui_pnlFooter, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_pnlFooter, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblNavAGlyph = lv_label_create(ui_pnlFooter);
    lv_obj_set_width(ui_lblNavAGlyph, 25);
    lv_obj_set_height(ui_lblNavAGlyph, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblNavAGlyph, -220);
    lv_obj_set_y(ui_lblNavAGlyph, -205);
    lv_obj_set_align(ui_lblNavAGlyph, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblNavAGlyph, "⇓");
    lv_label_set_recolor(ui_lblNavAGlyph, "true");
    lv_obj_set_style_text_color(ui_lblNavAGlyph, lv_color_hex(0xF7E318), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblNavAGlyph, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblNavAGlyph, &ui_font_GamepadNav, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_lblNavAGlyph, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_lblNavAGlyph, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_lblNavAGlyph, -2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_lblNavAGlyph, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblNavA = lv_label_create(ui_pnlFooter);
    lv_obj_set_width(ui_lblNavA, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblNavA, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblNavA, -220);
    lv_obj_set_y(ui_lblNavA, -205);
    lv_obj_set_align(ui_lblNavA, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblNavA, "");
    lv_label_set_recolor(ui_lblNavA, "true");
    lv_obj_set_style_text_color(ui_lblNavA, lv_color_hex(0xF7E318), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblNavA, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_lblNavA, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_lblNavA, 9, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_lblNavA, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_lblNavA, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblNavBGlyph = lv_label_create(ui_pnlFooter);
    lv_obj_set_width(ui_lblNavBGlyph, 25);
    lv_obj_set_height(ui_lblNavBGlyph, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblNavBGlyph, -220);
    lv_obj_set_y(ui_lblNavBGlyph, -205);
    lv_obj_set_align(ui_lblNavBGlyph, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblNavBGlyph, "⇒");
    lv_label_set_recolor(ui_lblNavBGlyph, "true");
    lv_obj_set_style_text_color(ui_lblNavBGlyph, lv_color_hex(0xF7E318), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblNavBGlyph, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblNavBGlyph, &ui_font_GamepadNav, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_lblNavBGlyph, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_lblNavBGlyph, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_lblNavBGlyph, -2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_lblNavBGlyph, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblNavB = lv_label_create(ui_pnlFooter);
    lv_obj_set_width(ui_lblNavB, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblNavB, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblNavB, -220);
    lv_obj_set_y(ui_lblNavB, -205);
    lv_obj_set_align(ui_lblNavB, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblNavB, "");
    lv_label_set_recolor(ui_lblNavB, "true");
    lv_obj_set_style_text_color(ui_lblNavB, lv_color_hex(0xF7E318), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblNavB, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_lblNavB, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_lblNavB, 9, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_lblNavB, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_lblNavB, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblNavCGlyph = lv_label_create(ui_pnlFooter);
    lv_obj_set_width(ui_lblNavCGlyph, 25);
    lv_obj_set_height(ui_lblNavCGlyph, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblNavCGlyph, -220);
    lv_obj_set_y(ui_lblNavCGlyph, -205);
    lv_obj_set_align(ui_lblNavCGlyph, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblNavCGlyph, "⇫");
    lv_label_set_recolor(ui_lblNavCGlyph, "true");
    lv_obj_set_style_text_color(ui_lblNavCGlyph, lv_color_hex(0xF7E318), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblNavCGlyph, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblNavCGlyph, &ui_font_GamepadNav, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_lblNavCGlyph, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_lblNavCGlyph, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_lblNavCGlyph, -2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_lblNavCGlyph, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblNavC = lv_label_create(ui_pnlFooter);
    lv_obj_set_width(ui_lblNavC, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblNavC, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblNavC, -220);
    lv_obj_set_y(ui_lblNavC, -205);
    lv_obj_set_align(ui_lblNavC, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblNavC, "");
    lv_label_set_recolor(ui_lblNavC, "true");
    lv_obj_set_style_text_color(ui_lblNavC, lv_color_hex(0xF7E318), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblNavC, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_lblNavC, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_lblNavC, 9, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_lblNavC, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_lblNavC, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblNavXGlyph = lv_label_create(ui_pnlFooter);
    lv_obj_set_width(ui_lblNavXGlyph, 25);
    lv_obj_set_height(ui_lblNavXGlyph, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblNavXGlyph, -220);
    lv_obj_set_y(ui_lblNavXGlyph, -205);
    lv_obj_set_align(ui_lblNavXGlyph, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblNavXGlyph, "⇣");
    lv_label_set_recolor(ui_lblNavXGlyph, "true");
    lv_obj_set_style_text_color(ui_lblNavXGlyph, lv_color_hex(0xF7E318), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblNavXGlyph, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblNavXGlyph, &ui_font_GamepadNav, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_lblNavXGlyph, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_lblNavXGlyph, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_lblNavXGlyph, -2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_lblNavXGlyph, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblNavX = lv_label_create(ui_pnlFooter);
    lv_obj_set_width(ui_lblNavX, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblNavX, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblNavX, -220);
    lv_obj_set_y(ui_lblNavX, -205);
    lv_obj_set_align(ui_lblNavX, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblNavX, "");
    lv_label_set_recolor(ui_lblNavX, "true");
    lv_obj_set_style_text_color(ui_lblNavX, lv_color_hex(0xF7E318), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblNavX, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_lblNavX, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_lblNavX, 9, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_lblNavX, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_lblNavX, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblNavYGlyph = lv_label_create(ui_pnlFooter);
    lv_obj_set_width(ui_lblNavYGlyph, 25);
    lv_obj_set_height(ui_lblNavYGlyph, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblNavYGlyph, -220);
    lv_obj_set_y(ui_lblNavYGlyph, -205);
    lv_obj_set_align(ui_lblNavYGlyph, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblNavYGlyph, "⇑");
    lv_label_set_recolor(ui_lblNavYGlyph, "true");
    lv_obj_set_style_text_color(ui_lblNavYGlyph, lv_color_hex(0xF7E318), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblNavYGlyph, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblNavYGlyph, &ui_font_GamepadNav, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_lblNavYGlyph, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_lblNavYGlyph, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_lblNavYGlyph, -2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_lblNavYGlyph, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblNavY = lv_label_create(ui_pnlFooter);
    lv_obj_set_width(ui_lblNavY, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblNavY, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblNavY, -220);
    lv_obj_set_y(ui_lblNavY, -205);
    lv_obj_set_align(ui_lblNavY, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblNavY, "");
    lv_label_set_recolor(ui_lblNavY, "true");
    lv_obj_set_style_text_color(ui_lblNavY, lv_color_hex(0xF7E318), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblNavY, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_lblNavY, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_lblNavY, 9, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_lblNavY, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_lblNavY, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblNavZGlyph = lv_label_create(ui_pnlFooter);
    lv_obj_set_width(ui_lblNavZGlyph, 25);
    lv_obj_set_height(ui_lblNavZGlyph, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblNavZGlyph, -220);
    lv_obj_set_y(ui_lblNavZGlyph, -205);
    lv_obj_set_align(ui_lblNavZGlyph, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblNavZGlyph, "⇬");
    lv_label_set_recolor(ui_lblNavZGlyph, "true");
    lv_obj_set_style_text_color(ui_lblNavZGlyph, lv_color_hex(0xF7E318), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblNavZGlyph, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblNavZGlyph, &ui_font_GamepadNav, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_lblNavZGlyph, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_lblNavZGlyph, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_lblNavZGlyph, -2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_lblNavZGlyph, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblNavZ = lv_label_create(ui_pnlFooter);
    lv_obj_set_width(ui_lblNavZ, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblNavZ, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblNavZ, -220);
    lv_obj_set_y(ui_lblNavZ, -205);
    lv_obj_set_align(ui_lblNavZ, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblNavZ, "");
    lv_label_set_recolor(ui_lblNavZ, "true");
    lv_obj_set_style_text_color(ui_lblNavZ, lv_color_hex(0xF7E318), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblNavZ, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_lblNavZ, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_lblNavZ, 9, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_lblNavZ, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_lblNavZ, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblNavMenuGlyph = lv_label_create(ui_pnlFooter);
    lv_obj_set_width(ui_lblNavMenuGlyph, 27);
    lv_obj_set_height(ui_lblNavMenuGlyph, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblNavMenuGlyph, -220);
    lv_obj_set_y(ui_lblNavMenuGlyph, -205);
    lv_obj_set_align(ui_lblNavMenuGlyph, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblNavMenuGlyph, "⇥");
    lv_label_set_recolor(ui_lblNavMenuGlyph, "true");
    lv_obj_set_style_text_color(ui_lblNavMenuGlyph, lv_color_hex(0xF7E318), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblNavMenuGlyph, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lblNavMenuGlyph, &ui_font_GamepadNav, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_lblNavMenuGlyph, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_lblNavMenuGlyph, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_lblNavMenuGlyph, -2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_lblNavMenuGlyph, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblNavMenu = lv_label_create(ui_pnlFooter);
    lv_obj_set_width(ui_lblNavMenu, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_lblNavMenu, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblNavMenu, -220);
    lv_obj_set_y(ui_lblNavMenu, -205);
    lv_obj_set_align(ui_lblNavMenu, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblNavMenu, "");
    lv_label_set_recolor(ui_lblNavMenu, "true");
    lv_obj_set_style_text_color(ui_lblNavMenu, lv_color_hex(0xF7E318), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblNavMenu, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_lblNavMenu, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_lblNavMenu, 9, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_lblNavMenu, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_lblNavMenu, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblArchiveMessage = lv_label_create(ui_scrArchive);
    lv_obj_set_width(ui_lblArchiveMessage, 640);
    lv_obj_set_height(ui_lblArchiveMessage, 28);
    lv_obj_set_align(ui_lblArchiveMessage, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblArchiveMessage, "No Archives Found");
    lv_obj_add_flag(ui_lblArchiveMessage, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_FLOATING);     /// Flags
    lv_obj_set_scroll_dir(ui_lblArchiveMessage, LV_DIR_HOR);
    lv_obj_set_style_text_color(ui_lblArchiveMessage, lv_color_hex(0xA5B2B5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblArchiveMessage, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_lblArchiveMessage, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_lblArchiveMessage, lv_color_hex(0xA5B2B5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_lblArchiveMessage, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_lblArchiveMessage, lv_color_hex(0x100808), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_main_stop(ui_lblArchiveMessage, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_stop(ui_lblArchiveMessage, 200, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_lblArchiveMessage, LV_GRAD_DIR_HOR, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_lblArchiveMessage, lv_color_hex(0xA5B2B5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_lblArchiveMessage, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_lblArchiveMessage, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_lblArchiveMessage, LV_BORDER_SIDE_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_lblArchiveMessage, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_lblArchiveMessage, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_lblArchiveMessage, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_lblArchiveMessage, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_lblArchiveMessage, lv_color_hex(0xF8E008), LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui_lblArchiveMessage, 255, LV_PART_MAIN | LV_STATE_FOCUSED);

    ui_pnlMessage = lv_obj_create(ui_scrArchive);
    lv_obj_set_width(ui_pnlMessage, 615);
    lv_obj_set_height(ui_pnlMessage, 42);
    lv_obj_set_x(ui_pnlMessage, 0);
    lv_obj_set_y(ui_pnlMessage, -47);
    lv_obj_set_align(ui_pnlMessage, LV_ALIGN_BOTTOM_MID);
    lv_obj_set_flex_flow(ui_pnlMessage, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_pnlMessage, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_add_flag(ui_pnlMessage, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_clear_flag(ui_pnlMessage, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_pnlMessage, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_pnlMessage, lv_color_hex(0x100808), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_pnlMessage, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_pnlMessage, lv_color_hex(0xF7E318), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_pnlMessage, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_pnlMessage, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_pnlMessage, LV_BORDER_SIDE_FULL, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblMessage = lv_label_create(ui_pnlMessage);
    lv_obj_set_width(ui_lblMessage, 600);
    lv_obj_set_height(ui_lblMessage, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_lblMessage, -220);
    lv_obj_set_y(ui_lblMessage, -205);
    lv_obj_set_align(ui_lblMessage, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblMessage, "");
    lv_label_set_recolor(ui_lblMessage, "true");
    lv_obj_set_style_text_color(ui_lblMessage, lv_color_hex(0xF7E318), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblMessage, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_lblMessage, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_lblMessage, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_lblMessage, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_lblMessage, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_pnlHelp = lv_obj_create(ui_scrArchive);
    lv_obj_set_width(ui_pnlHelp, 640);
    lv_obj_set_height(ui_pnlHelp, 480);
    lv_obj_set_align(ui_pnlHelp, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_pnlHelp, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_clear_flag(ui_pnlHelp, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_pnlHelp, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_pnlHelp, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_pnlHelp, 155, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_pnlHelp, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_pnlHelp, 155, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_pnlHelp, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_pnlHelpMessage = lv_obj_create(ui_pnlHelp);
    lv_obj_set_width(ui_pnlHelpMessage, 550);
    lv_obj_set_height(ui_pnlHelpMessage, 385);
    lv_obj_set_align(ui_pnlHelpMessage, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_pnlHelpMessage, LV_FLEX_FLOW_COLUMN_WRAP);
    lv_obj_set_flex_align(ui_pnlHelpMessage, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_pnlHelpMessage, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_pnlHelpMessage, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_pnlHelpMessage, lv_color_hex(0x0D0803), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_pnlHelpMessage, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_pnlHelpMessage, lv_color_hex(0xF8E008), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_pnlHelpMessage, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_pnlHelpMessage, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_pnlHelpMessage, LV_BORDER_SIDE_FULL, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(ui_pnlHelpMessage, 15, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_pnlHelpMessage, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblHelpHeader = lv_label_create(ui_pnlHelpMessage);
    lv_obj_set_width(ui_lblHelpHeader, 515);
    lv_obj_set_height(ui_lblHelpHeader, 22);
    lv_obj_set_align(ui_lblHelpHeader, LV_ALIGN_CENTER);
    lv_label_set_text(ui_lblHelpHeader, "");
    lv_obj_set_style_text_color(ui_lblHelpHeader, lv_color_hex(0xF7E318), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblHelpHeader, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_lblHelpContent = lv_label_create(ui_pnlHelpMessage);
    lv_obj_set_width(ui_lblHelpContent, 515);
    lv_obj_set_height(ui_lblHelpContent, 320);
    lv_obj_set_align(ui_lblHelpContent, LV_ALIGN_CENTER);
    lv_label_set_long_mode(ui_lblHelpContent, LV_LABEL_LONG_DOT);
    lv_label_set_text(ui_lblHelpContent, "");
    lv_label_set_recolor(ui_lblHelpContent, "true");
    lv_obj_set_style_text_color(ui_lblHelpContent, lv_color_hex(0xA5B2B5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lblHelpContent, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_lblHelpContent, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_lblHelpContent, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_pnlProgress = lv_obj_create(ui_scrArchive);
    lv_obj_set_width(ui_pnlProgress, 615);
    lv_obj_set_height(ui_pnlProgress, 42);
    lv_obj_set_x(ui_pnlProgress, 0);
    lv_obj_set_y(ui_pnlProgress, -47);
    lv_obj_set_align(ui_pnlProgress, LV_ALIGN_BOTTOM_MID);
    lv_obj_set_flex_flow(ui_pnlProgress, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_pnlProgress, LV_FLEX_ALIGN_SPACE_EVENLY, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_add_flag(ui_pnlProgress, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_clear_flag(ui_pnlProgress, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_pnlProgress, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_pnlProgress, lv_color_hex(0x100808), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_pnlProgress, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_pnlProgress, lv_color_hex(0xF7E318), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_pnlProgress, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_pnlProgress, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_pnlProgress, LV_BORDER_SIDE_FULL, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_icoProgress = lv_label_create(ui_pnlProgress);
    lv_obj_set_width(ui_icoProgress, 18);
    lv_obj_set_height(ui_icoProgress, 28);
    lv_obj_set_x(ui_icoProgress, -220);
    lv_obj_set_y(ui_icoProgress, -205);
    lv_obj_set_align(ui_icoProgress, LV_ALIGN_CENTER);
    lv_label_set_text(ui_icoProgress, "");
    lv_label_set_recolor(ui_icoProgress, "true");
    lv_obj_set_style_text_color(ui_icoProgress, lv_color_hex(0xF7E318), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_icoProgress, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_icoProgress, &ui_font_AwesomeSmall, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_icoProgress, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_icoProgress, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_icoProgress, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_icoProgress, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_barProgress = lv_bar_create(ui_pnlProgress);
    lv_bar_set_value(ui_barProgress, 50, LV_ANIM_OFF);
    lv_bar_set_start_value(ui_barProgress, 0, LV_ANIM_OFF);
    lv_obj_set_width(ui_barProgress, 550);
    lv_obj_set_height(ui_barProgress, 16);
    lv_obj_set_align(ui_barProgress, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_barProgress, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_barProgress, lv_color_hex(0x7E730C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_barProgress, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_barProgress, 0, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_barProgress, lv_color_hex(0xF7E318), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_barProgress, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

}
