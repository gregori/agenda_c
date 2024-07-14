#ifndef INTERFACE_H
#define INTERFACE_H

#include "contact_list.h"
#include "contact.h"

#define ADD_CONTACT 1
#define LIST_CONTACTS 2
#define FIND_CONTACT 3
#define DELETE_CONTACT 4
#define SAVE_CONTACT 5
#define EXIT 6

void show_menu();
int get_option();
void process_option(int option, contact_list *contact_list, char *filename);
void add_contact_option(contact_list *contact_list);
void list_contacts_option(contact_list contact_list);
void find_contact_option(contact_list *contact_list);
void delete_contact_option(contact_list *contact_list);

#endif