#include "contact.h"
#include <stdio.h>
#include <string.h>

void add_data_to_contact(contact *contact, char *name, char *phone, char *email, char *address)
{
    strcpy(contact->name, name);
    strcpy(contact->phone, phone);
    strcpy(contact->email, email);
    strcpy(contact->address, address);
}

void show_contact(contact *contact)
{
    printf("Nome: %s\n", contact->name);
    printf("Telefone: %s\n", contact->phone);
    printf("Email: %s\n", contact->email);
    printf("Endereço: %s\n", contact->address);
}