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
    char *username = connected_user.username;
    add_item_by_text(list, username);
}

void show_connected_users(user_array users) {
    panel c_panel = load_panel("ChatArea.txt");
    user detail;
    int i = 0;
    vec_foreach(&users, detail, i) {
            show_connected_user(c_panel,detail);
        }

}

char *get_ip_str(uint32_t ip_dec) {
    char *hex_str;
    dec_to_hex(ip_dec, hex_str);
    char *hex;

    char *ip_str;
    hex_str_to_ipv4(hex_str, ip_str);
    return ip_str;
}

char *get_own_ip(connection self) {
    uint32_t ip = connection_ip(self);
    char str[26] = {0};
    char *ip_str = (char *) malloc(strlen(str) + 1);
    int_to_ip(ip, str);
    strcpy(ip_str, str);
    return ip_str;
}

char *get_user_ip(int user_index) {
    connection user = retreive_connection(user_index);
    uint32_t ip_dec = connection_ip(user);

    //proceeding code took me 4 hours to figure out...
    char ip_str[26] = {0};
    char *str = (char *) malloc(strlen(ip_str) + 1);

    int_to_ip(ip_dec, ip_str);
    strcpy(str, ip_str);

    return str;
}


char *get_user_details(user user_detail) {
    char result[456] = {0};
    sprintf(result, "%s %s", user_detail.username, user_detail.ip_addr);
    char *true_result;
    strcpy_ukwn(result,&true_result);
    return true_result;
}

void sign_name(char *name, char *to_sign) {
    prepend(name,to_sign);
}

