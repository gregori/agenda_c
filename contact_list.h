#ifndef CONTACT_LIST_H
#define CONTACT_LIST_H

#include "contact.h"

typedef struct contact_list
{
    /* data */
    contact contacts[50];
    int size;
} contact_list;

void add_contact(contact_list *contact_list, contact *contact);
void list_contacts(contact_list contact_list);
contact* find_contact(contact_list *contact_list, char *name);
void delete_contact(contact_list *contact_list, char *name);

#endif