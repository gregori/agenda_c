#ifndef PERSISTENCE_H
#define PERSISTENCE_H

#include "contact_list.h"

typedef struct persistence_error
{
    int code;
    char message[100];
} persistence_error;

persistence_error persist_contact_list(contact_list contact_list, char *filename);
persistence_error load_contact_list(contact_list *contact_list, char *filename);

#endif