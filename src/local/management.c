//
// Created by sheku on 27/05/2018.
//

#include "management.h"

void show_notice(char notice[456]) {
    label_with_id_set_text("NoticeLabel",notice);
    clear_screen_to(ColorWhite);
    draw_interface();
    update_interface();
    refresh_screen();
}

void show_message(char message[456]) {
    panel c_panel = load_panel("ChatArea.txt");
    region r = region_with_id(c_panel,"MessagesList");
    guilist list = list_from_region(r);
    add_item_by_text(list, message);
}

void show_connected_user(panel chat, user connected_user) {
    region r = region_with_id(chat, "ConnectionList");
    guilist list = list_from_region(r);
    char to_show[456];
    sprintf(to_show,"%s:%s",connected_user.username,connected_user.ip_addr);
    add_item_by_text(list, to_show);
    draw_interface();
    update_interface();
    refresh_screen();
}

char *get_own_ip(connection self) {
    uint32_t ip = connection_ip(self);
    char str[26] = {0};
    char *ip_str = (char *) malloc(strlen(str) + 1);
    int_to_ip(ip, str);
    strcpy(ip_str, str);
    return ip_str;
}


void sign_name(char *name, char *to_sign) {
    append_char(to_sign, ':');
    append_char(to_sign,' ');
    prepend(to_sign,name);
}

bool username_set() {
    guitextbox ubox = text_box_from_id("UsernameBox");
    if(strcmp(ubox->content_string, "Enter username") == 0 || strcmp(ubox->content_string, " ") == 0) {
        return  false;
    }

    return  true;
}

