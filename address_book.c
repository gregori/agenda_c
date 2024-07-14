#include "interface.h"
#include "contact_list.h"
#include "persistence.h"
#include <stdio.h>

int main() {
    contact_list contacts;
    contacts.size = 0;
    int option;
    char *filename = "contacts.dat";
    
    load_contact_list(&contacts, filename);
    
    do {
        show_menu();
        option = get_option();
        process_option(option, &contacts, filename);
    } while (option != EXIT);

    persist_contact_list(contacts, filename);

    return 0;
}