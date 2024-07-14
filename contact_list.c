#include "contact_list.h"
#include "contact.h"
#include <stdio.h>
#include <string.h>

void add_contact(contact_list *contact_list, contact *contact)
{
    if (contact_list->size < 50)
    {
        contact_list->contacts[contact_list->size] = *contact;
        contact_list->size++;
    }
}

void list_contacts(contact_list contact_list)
{
    for (int i = 0; i < contact_list.size; i++)
    {
        show_contact(&contact_list.contacts[i]);
    }
}

contact* find_contact(contact_list *contact_list, char *name)
{
    for (int i = 0; i < contact_list->size; i++)
    {
        if (strcmp(contact_list->contacts[i].name, name) == 0)
        {
            return &contact_list->contacts[i];
        }
    }
    return NULL;
}

void delete_contact(contact_list *contact_list, char *name)
{
    for (int i = 0; i < contact_list->size; i++)
    {
        if (strcmp(contact_list->contacts[i].name, name) == 0)
        {
            for (int j = i; j < contact_list->size - 1; j++)
            {
                contact_list->contacts[j] = contact_list->contacts[j + 1];
            }
            contact_list->size--;
            return;
        }
    }
    printf("Contato não encontrado\n");
}
