#include "contact_list.h"
#include "contact.h"
#include "persistence.h"
#include <stdio.h>

persistence_error persist_contact_list(contact_list contact_list, char *filename)
{
    FILE *file = fopen(filename, "w");
    if (file == NULL)
    {
        return (persistence_error){1, "Erro ao abrir o arquivo"};
    }

    fwrite(&contact_list.size, sizeof(int), 1, file);
    fwrite(&contact_list.contacts, sizeof(contact), contact_list.size, file);

    return (persistence_error){0, "Contatos salvos com sucesso"};
}

persistence_error load_contact_list(contact_list *contact_list, char *filename)
{
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        return (persistence_error){1, "Erro ao abrir o arquivo"};
    }

    fread(&contact_list->size, sizeof(int), 1, file);
    fread(&contact_list->contacts, sizeof(contact), contact_list->size, file);

    return (persistence_error){0, "Contatos carregados com sucesso"};
}