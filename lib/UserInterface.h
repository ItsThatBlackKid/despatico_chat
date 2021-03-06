/*
* Generated by SGWrapperGen - DO NOT EDIT!
*
* SwinGame wrapper for C - UserInterface
*
* Wrapping sgUserInterface.pas
*/

#ifndef sgUserInterface
#define sgUserInterface

#include <stdint.h>

#ifndef __cplusplus
  #include <stdbool.h>
#endif

#include "Types.h"

void activate_panel(panel p);
region active_radio_button(guiradio_group grp);
region active_radio_button_with_id(const char *id);
region active_radio_button_on_panel_with_id(panel pnl, const char *id);
int32_t active_radio_button_index(guiradio_group RadioGroup);
int32_t active_radio_button_index_from_id(const char *id);
int32_t active_radio_button_index_on_panel(panel pnl, const char *id);
panel active_text_box_parent();
int32_t active_text_index();
bool button_named_clicked(const char *name);
bool button_clicked(region r);
guicheckbox checkbox_from_region(region r);
void checkbox_set_state(guicheckbox chk, bool val);
void check_box_set_state_with_id(const char *id, bool val);
void checkbox_set_state_from_region(region r, bool val);
void checkbox_set_state_on_panel(panel pnl, const char *id, bool val);
bool checkbox_state_from_region(region r);
bool checkbox_state(const char *s);
bool checkbox_state_from_checkbox(guicheckbox chk);
bool checkbox_state_on_panel(panel p, const char *s);
void deactivate_panel(panel p);
void deactivate_text_box();
bool dialog_cancelled();
bool dialog_complete();
void dialog_path(char *result);
void dialog_set_path(const char *fullname);
void draw_guias_vectors(bool b);
void draw_interface();
void finish_reading_text();
void free_panel(panel *pnl);
bool guiclicked();
void guiset_active_textbox_from_region(region r);
void guiset_active_textbox_named(const char *name);
void guiset_active_textbox(guitextbox t);
void guiset_background_color(color c);
void guiset_background_color_inactive(color c);
void guiset_foreground_color(color c);
void guiset_foreground_color_inactive(color c);
guitextbox guitext_box_of_text_entered();
bool guitext_entry_complete();
bool has_panel(const char *name);
void hide_panel_named(const char *name);
void hide_panel(panel p);
int32_t index_of_last_updated_text_box();
bool is_dragging();
bool panel_is_dragging(panel pnl);
font_alignment label_alignement_from_region(region r);
font_alignment label_alignment(guilabel lbl);
font label_from_region_get_font(region r);
font label_font(guilabel l);
guilabel label_from_region(region r);
void set_label_alignment_from_region(region r, font_alignment align);
void set_label_alignment(guilabel tb, font_alignment align);
void label_set_font(guilabel l, const char *s);
void label_set_text(guilabel lb, const char *newString);
void label_from_region_set_text(region r, const char *newString);
void label_with_id_set_text(const char *id, const char *newString);
void label_on_panel_with_id_set_text(panel pnl, const char *id, const char *newString);
void label_text_from_region(region r, char *result);
void label_text(guilabel lb, char *result);
void label_text_with_id(const char *id, char *result);
void label_text_on_panel_with_id(panel pnl, const char *id, char *result);
int32_t list_active_item_index(guilist lst);
int32_t list_active_item_index_with_id(const char *id);
int32_t list_active_item_index_from_region(region r);
int32_t list_active_item_index_on_panel_with_id(panel pnl, const char *id);
void list_active_item_text(guilist list, char *result);
void list_active_item_text_from_region(region r, char *result);
void list_with_id_active_item_text(const char *ID, char *result);
void list_active_item_text_on_panel_with_id(panel pnl, const char *ID, char *result);
void add_item_by_bitmap(guilist lst, bitmap img);
void add_item_with_id_by_bitmap(const char *id, bitmap img);
void list_add_item_with_cell(guilist lst, const bitmap_cell *img);
void list_add_item_with_cell_byval(guilist lst, const bitmap_cell img);
void add_item_by_text(guilist lst, const char *text);
void add_item_with_id_by_text(const char *id, const char *text);
void list_add_item_by_bitmap_from_region(region r, bitmap img);
void list_add_item_with_cell_from_region(region r, const bitmap_cell *img);
void list_add_item_with_cell_from_region_byval(region r, const bitmap_cell img);
void list_with_id_add_item_with_cell(const char *id, const bitmap_cell *img);
void list_with_id_add_item_with_cell_byval(const char *id, const bitmap_cell img);
void list_add_item_by_text_from_region(region r, const char *text);
void list_add_item_bitmap(panel pnl, const char *id, bitmap img);
void list_add_item_with_cell_and_text_from_region(region r, const bitmap_cell *img, const char *text);
void list_add_item_with_cell_and_text_from_region_byval(region r, const bitmap_cell img, const char *text);
void list_add_bitmap_and_text_item(guilist lst, bitmap img, const char *text);
void list_on_panel_with_id_add_item_with_cell(panel pnl, const char *id, const bitmap_cell *img);
void list_on_panel_with_id_add_item_with_cell_byval(panel pnl, const char *id, const bitmap_cell img);
void list_with_idadd_bitmap_with_text_item(const char *id, bitmap img, const char *text);
void list_add_bitmap_and_text_item_from_region(region r, bitmap img, const char *text);
void list_add_item_with_cell_and_text(guilist lst, const bitmap_cell *img, const char *text);
void list_add_item_with_cell_and_text_byval(guilist lst, const bitmap_cell img, const char *text);
void add_item_on_panel_with_id_by_text(panel pnl, const char *id, const char *text);
void list_with_id_add_item_with_cell_and_text(const char *id, const bitmap_cell *img, const char *text);
void list_with_id_add_item_with_cell_and_text_byval(const char *id, const bitmap_cell img, const char *text);
void list_on_panel_with_id_add_item_with_cell_and_text(panel pnl, const char *id, const bitmap_cell *img, const char *text);
void list_on_panel_with_id_add_item_with_cell_and_text_byval(panel pnl, const char *id, const bitmap_cell img, const char *text);
void list_on_panel_with_id_add_bitmap_with_text_item(panel pnl, const char *id, bitmap img, const char *text);
int32_t list_bitmap_index(guilist lst, bitmap img);
int32_t list_bitmap_cell_index(guilist lst, const bitmap_cell *img);
int32_t list_bitmap_cell_index_byval(guilist lst, const bitmap_cell img);
void listclear_items_with_id(const char *id);
void list_clear_items(guilist lst);
void list_clear_items_from_region(region r);
void list_clear_items_given_panel_with_id(panel pnl, const char *id);
font list_font(guilist lst);
font list_font_from_region(region r);
font_alignment list_font_alignment(guilist lst);
font_alignment list_font_alignment_from_region(region r);
guilist list_from_region(region r);
int32_t list_item_count(guilist lst);
int32_t list_item_count_from_region(region r);
int32_t list_item_count_with_id(const char *id);
int32_t list_item_count_on_panel_with_id(panel pnl, const char *id);
void list_item_text_from_id(const char *id, int32_t idx, char *result);
void list_item_text(guilist lst, int32_t idx, char *result);
void list_item_text_from_region(region r, int32_t idx, char *result);
void list_item_text_on_panel_with_id(panel pnl, const char *id, int32_t idx, char *result);
int32_t list_largest_start_index(guilist lst);
void list_remove_active_item_from_region(region r);
void list_remove_active_item_from_id(const char *id);
void list_remove_active_item_on_panel_with_id(panel pnl, const char *id);
void list_remove_item_from_with_id(const char *id, int32_t idx);
void list_remove_item(guilist lst, int32_t idx);
void list_remove_item_on_panel_with_id(panel pnl, const char *id, int32_t idx);
int32_t list_scroll_increment(guilist lst);
void list_set_active_item_index_with_id(const char *id, int32_t idx);
void list_set_active_item_index(guilist lst, int32_t idx);
void list_set(panel pnl, const char *id, int32_t idx);
void list_set_font(guilist lst, font f);
void list_set_font_alignment_from_region(region r, font_alignment align);
void list_set_font_alignment(guilist lst, font_alignment align);
void list_set_starting_at_from_region(region r, int32_t idx);
void list_set_starting_at(guilist lst, int32_t idx);
int32_t list_start_at(guilist lst);
int32_t list_starting_at_from_region(region r);
int32_t list_text_index(guilist lst, const char *value);
panel load_panel(const char *filename);
panel load_panel_named(const char *name, const char *filename);
void move_panel(panel p, const vector *mvmt);
void move_panel_byval(panel p, const vector mvmt);
panel new_panel(const char *pnlName);
bool panel_active(panel pnl);
panel panel_at_point(const point2d *pt);
panel panel_at_point_byval(const point2d pt);
panel panel_clicked();
bool panel_was_clicked(panel pnl);
bool panel_draggable(panel p);
void panel_filename(panel pnl, char *result);
int32_t panel_height(panel p);
int32_t panel_named_height(const char *name);
void panel_name(panel pnl, char *result);
panel panel_named(const char *name);
void panel_set_draggable(panel p, bool b);
bool panel_visible(panel p);
int32_t panel_named_width(const char *name);
int32_t panel_width(panel p);
float panel_x(panel p);
float panel_y(panel p);
bool point_in_region(const point2d *pt, panel p);
bool point_in_region_byval(const point2d pt, panel p);
bool point_in_region_with_kind(const point2d *pt, panel p, guielement_kind kind);
bool point_in_region_with_kind_byval(const point2d pt, panel p, guielement_kind kind);
guiradio_group radio_group_from_id(const char *id);
guiradio_group radio_group_on_panel_width_id(panel pnl, const char *id);
guiradio_group radio_group_from_region(region r);
bool region_active(region forRegion);
region region_at_point(panel p, const point2d *pt);
region region_at_point_byval(panel p, const point2d pt);
region region_clicked();
void region_clicked_id(char *result);
int32_t region_height(region r);
void region_id(region r, char *result);
region region_of_last_updated_text_box();
panel region_panel(region r);
int32_t region_width(region r);
region global_region_with_id(const char *ID);
region region_with_id(panel pnl, const char *ID);
float region_x(region r);
float region_y(region r);
void register_event_callback(region r, guievent_callback callback);
void release_all_panels();
void release_panel(const char *name);
void select_radio_button(region r);
void select_radio_button_with_id(const char *id);
void select_radio_button_from_radio_group_and_region(guiradio_group rGroup, region r);
void select_radio_button_on_panel_with_id(panel pnl, const char *id);
void select_radio_button_from_radio_group_and_index(guiradio_group rGroup, int32_t idx);
void set_region_active(region forRegion, bool b);
void show_open_dialog();
void show_open_dialog_with_type(file_dialog_select_type select);
void show_panel(panel p);
void show_panel_named(const char *name);
void show_panel_dialog(panel p);
void show_save_dialog();
void show_save_dialog_with_type(file_dialog_select_type select);
font text_box_font(guitextbox tb);
font text_box_font_from_region(region r);
guitextbox text_box_from_id(const char *id);
guitextbox textbox_from_region(region r);
void text_box_text(guitextbox tb, char *result);
void textbox_text_with_id(const char *id, char *result);
void textbox_text_from_region(region r, char *result);
void textbox_text_on_panel_with_id(panel pnl, const char *id, char *result);
font_alignment text_box_alignment_from_region(region r);
font_alignment textbox_alignment(guitextbox tb);
void text_box_set_alignment_from_region(region r, font_alignment align);
void textbox_set_alignment(guitextbox tb, font_alignment align);
void textbox_set_font(guitextbox Tb, font f);
void textbox_set_text_to_int_with_id(const char *id, int32_t i);
void textbox_set_text_to_single_from_id(const char *id, float single);
void textbox_set_text_from_region(region r, const char *s);
void textbox_set_text(guitextbox tb, const char *s);
void textbox_set_text_from_id(const char *id, const char *s);
void textbox_set_text_to_int_from_region(region r, int32_t i);
void textbox_set_text_to_int(guitextbox tb, int32_t i);
void textbox_set_text_to_single(guitextbox tb, float single);
void textbox_set_text_to_single_from_region(region r, float single);
void textbox_set_text_on_panel_and_id(panel pnl, const char *id, const char *s);
void textbox_set_text_to_int_on_panel_with_id(panel pnl, const char *id, int32_t i);
void textbox_set_text_to_single_on_panel(panel pnl, const char *id, float single);
void toggle_activate_panel(panel p);
void toggle_checkbox_state_from_id(const char *id);
void toggle_checkbox_state(guicheckbox c);
void toggle_checkbox_state_on_panel(panel pnl, const char *id);
void toggle_region_active(region forRegion);
void toggle_show_panel(panel p);
void update_interface();

#ifdef __cplusplus
// C++ overloaded functions
region active_radio_button(const char *id);
region active_radio_button(panel pnl, const char *id);
int32_t active_radio_button_index(const char *id);
int32_t active_radio_button_index(panel pnl, const char *id);
bool button_clicked(const char *name);
void checkbox_set_state(const char *id, bool val);
void checkbox_set_state(region r, bool val);
void checkbox_set_state(panel pnl, const char *id, bool val);
bool checkbox_state(region r);
bool checkbox_state(guicheckbox chk);
bool checkbox_state(panel p, const char *s);
void free_panel(panel &pnl);
void guiset_active_textbox(region r);
void guiset_active_textbox(const char *name);
void hide_panel(const char *name);
bool is_dragging(panel pnl);
font_alignment label_alignment(region r);
font label_font(region r);
void label_set_alignment(region r, font_alignment align);
void label_set_alignment(guilabel tb, font_alignment align);
void label_set_text(region r, const char *newString);
void label_set_text(const char *id, const char *newString);
void label_set_text(panel pnl, const char *id, const char *newString);
void label_text(region r, char *result);
void label_text(const char *id, char *result);
void label_text(panel pnl, const char *id, char *result);
int32_t list_active_item_index(const char *id);
int32_t list_active_item_index(region r);
int32_t list_active_item_index(panel pnl, const char *id);
void list_active_item_text(region r, char *result);
void list_active_item_text(const char *ID, char *result);
void list_active_item_text(panel pnl, const char *ID, char *result);
void list_add_item(guilist lst, bitmap img);
void list_add_item(const char *id, bitmap img);
void list_add_item(guilist lst, const bitmap_cell &img);
void list_add_item(guilist lst, const char *text);
void list_add_item(const char *id, const char *text);
void list_add_item(region r, bitmap img);
void list_add_item(region r, const bitmap_cell &img);
void list_add_item(const char *id, const bitmap_cell &img);
void list_add_item(region r, const char *text);
void list_add_item(panel pnl, const char *id, bitmap img);
void list_add_item(region r, const bitmap_cell &img, const char *text);
void list_add_item(guilist lst, bitmap img, const char *text);
void list_add_item(panel pnl, const char *id, const bitmap_cell &img);
void list_add_item(const char *id, bitmap img, const char *text);
void list_add_item(region r, bitmap img, const char *text);
void list_add_item(guilist lst, const bitmap_cell &img, const char *text);
void list_add_item(panel pnl, const char *id, const char *text);
void list_add_item(const char *id, const bitmap_cell &img, const char *text);
void list_add_item(panel pnl, const char *id, const bitmap_cell &img, const char *text);
void list_add_item(panel pnl, const char *id, bitmap img, const char *text);
int32_t list_bitmap_index(guilist lst, const bitmap_cell &img);
void list_clear_items(const char *id);
void list_clear_items(region r);
void list_clear_items(panel pnl, const char *id);
font list_font(region r);
font_alignment list_font_alignment(region r);
int32_t list_item_count(region r);
int32_t list_item_count(const char *id);
int32_t list_item_count(panel pnl, const char *id);
void list_item_text(const char *id, int32_t idx, char *result);
void list_item_text(region r, int32_t idx, char *result);
void list_item_text(panel pnl, const char *id, int32_t idx, char *result);
void list_remove_active_item(region r);
void list_remove_active_item(const char *id);
void list_remove_active_item(panel pnl, const char *id);
void list_remove_item(const char *id, int32_t idx);
void list_remove_item(panel pnl, const char *id, int32_t idx);
void list_set_active_item_index(const char *id, int32_t idx);
void list_set_active_item_index(panel pnl, const char *id, int32_t idx);
void list_set_font_alignment(region r, font_alignment align);
void list_set_start_at(region r, int32_t idx);
void list_set_start_at(guilist lst, int32_t idx);
int32_t list_start_at(region r);
void move_panel(panel p, const vector &mvmt);
panel panel_at_point(const point2d &pt);
bool panel_clicked(panel pnl);
int32_t panel_height(const char *name);
int32_t panel_width(const char *name);
bool point_in_region(const point2d &pt, panel p);
bool point_in_region(const point2d &pt, panel p, guielement_kind kind);
guiradio_group radio_group_from_id(panel pnl, const char *id);
region region_at_point(panel p, const point2d &pt);
region region_with_id(const char *ID);
void select_radio_button(const char *id);
void select_radio_button(guiradio_group rGroup, region r);
void select_radio_button(panel pnl, const char *id);
void select_radio_button(guiradio_group rGroup, int32_t idx);
void show_open_dialog(file_dialog_select_type select);
void show_panel(const char *name);
void show_save_dialog(file_dialog_select_type select);
font text_box_font(region r);
guitextbox text_box_from_region(region r);
void text_box_text(const char *id, char *result);
void text_box_text(region r, char *result);
void text_box_text(panel pnl, const char *id, char *result);
font_alignment textbox_alignment(region r);
void textbox_set_alignment(region r, font_alignment align);
void textbox_set_text(const char *id, int32_t i);
void textbox_set_text(const char *id, float single);
void textbox_set_text(region r, const char *s);
void textbox_set_text(const char *id, const char *s);
void textbox_set_text(region r, int32_t i);
void textbox_set_text(guitextbox tb, int32_t i);
void textbox_set_text(guitextbox tb, float single);
void textbox_set_text(region r, float single);
void textbox_set_text(panel pnl, const char *id, const char *s);
void textbox_set_text(panel pnl, const char *id, int32_t i);
void textbox_set_text(panel pnl, const char *id, float single);
void toggle_checkbox_state(const char *id);
void toggle_checkbox_state(panel pnl, const char *id);

#endif

#endif

