/* ======== Generate by IOXGD Designer ======== */

LV_FONT_DECLARE(supermarket_40);
LV_FONT_DECLARE(supermarket_140);

void load_page() {
  static lv_style_t style_screen;
  lv_style_copy(&style_screen, &lv_style_plain);
  style_screen.body.main_color = lv_color_hex(0xFF0000);
  style_screen.body.grad_color = lv_color_hex(0xFFF700);
  lv_obj_set_style(lv_scr_act(), &style_screen);
  
  /* ========== txt1 ========== */
  static lv_style_t txt1_style;
  lv_obj_t* txt1;
  
  lv_style_copy(&txt1_style, &lv_style_plain);
  txt1_style.text.color = lv_color_hex(0xFFFFFF);
  txt1_style.text.font = &supermarket_140;
  
  txt1 = lv_label_create(lv_scr_act(), NULL);
  lv_label_set_style(txt1, LV_LABEL_STYLE_MAIN, &txt1_style);
  lv_label_set_long_mode(txt1, LV_LABEL_LONG_EXPAND);
  lv_label_set_align(txt1, LV_LABEL_ALIGN_LEFT);
  lv_label_set_text(txt1, "สวัสดี");
  lv_obj_set_size(txt1, 0, 0);
  lv_obj_align(txt1, NULL, LV_ALIGN_CENTER, 0, -60);
  
  lv_obj_set_hidden(txt1, false);
  /* ====== END of txt1 ====== */
  
  /* ========== obj1 ========== */
  static lv_style_t obj1_style;
  lv_obj_t* obj1;
  
  lv_style_copy(&obj1_style, &lv_style_plain);
  obj1_style.body.main_color = lv_color_hex(0xFFF700);
  obj1_style.body.grad_color = lv_color_hex(0xFF0000);
  obj1_style.body.radius = 10;
  obj1_style.body.opa = 255;
  obj1_style.body.border.color = lv_color_hex(0xFFFFFF);
  obj1_style.body.border.width = 2;
  obj1_style.body.border.opa = 255;
  obj1_style.body.shadow.color = lv_color_hex(0x000000);
  obj1_style.body.shadow.width = 4;
  obj1_style.body.shadow.type = LV_SHADOW_FULL;
  
  obj1 = lv_obj_create(lv_scr_act(), NULL);
  lv_obj_set_style(obj1, &obj1_style);
  lv_obj_set_size(obj1, 320, 20);
  lv_obj_align(obj1, NULL, LV_ALIGN_CENTER, 0, 50);
  
  lv_obj_set_hidden(obj1, false);
  /* ====== END of obj1 ====== */
  
  /* ========== txt3 ========== */
  static lv_style_t txt3_style;
  lv_obj_t* txt3;
  
  lv_style_copy(&txt3_style, &lv_style_plain);
  txt3_style.text.color = lv_color_hex(0x000000);
  txt3_style.text.font = &supermarket_40;
  
  txt3 = lv_label_create(lv_scr_act(), NULL);
  lv_label_set_style(txt3, LV_LABEL_STYLE_MAIN, &txt3_style);
  lv_label_set_long_mode(txt3, LV_LABEL_LONG_SROLL_CIRC);
  lv_label_set_align(txt3, LV_LABEL_ALIGN_LEFT);
  lv_label_set_text(txt3, "ยินดีต้อนรับสู่แพลตฟอร์ม IOXGD");
  lv_obj_set_size(txt3, 300, 80);
  lv_obj_align(txt3, NULL, LV_ALIGN_CENTER, 0, 50);
  
  lv_obj_set_hidden(txt3, false);
  /* ====== END of txt3 ====== */
}
