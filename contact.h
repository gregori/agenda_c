#ifndef CONTACT_H
#define CONTACT_H

typedef struct contact
{
    /* data */
    char name[50];
    char phone[15];
    char email[50];
    char address[100];
} contact;

void add_data_to_contact(contact *contact, char *name, char *phone, char *email, char *address);
void show_contact(contact *contact);

#endif