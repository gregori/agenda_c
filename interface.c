#include <stdio.h>
#include <string.h>
#include "contact.h"
#include "contact_list.h"
#include "persistence.h"
#include "interface.h"

void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}

void clear_input_newline(char *input) {
    if (input[strlen(input) - 1] == '\n') {
        input[strlen(input) - 1] = '\0';
    }
}

char* get_string_input(char *value, int size) {
    fgets(value, size, stdin);
    clear_input_newline(value);
    return value;
}


void show_menu() {
    printf("1 - Adicionar contato\n");
    printf("2 - Listar contatos\n");
    printf("3 - Buscar contato\n");
    printf("4 - Deletar contato\n");
    printf("5 - Salvar lista de contatos\n");
    printf("6 - Sair e salvar\n");
    printf("Escolha uma opção: ");
}

int get_option() {
    int option;
    scanf("%d", &option);
    return option;
}

void process_option(int option, contact_list *contact_list, char *filename) {
    switch (option)
    {
    case ADD_CONTACT:
        add_contact_option(contact_list);
        break;
    case LIST_CONTACTS:
        list_contacts_option(*contact_list);
        break;
    case FIND_CONTACT:
        find_contact_option(contact_list);
        break;
    case DELETE_CONTACT:
        delete_contact_option(contact_list);
        break;
    case SAVE_CONTACT:
        persist_contact_list(*contact_list, filename);
        break;
    case EXIT:
        break;
    default:
        printf("Opção inválida\n");
        break;
    }
}

void add_contact_option(contact_list *contact_list) {
    contact c;
    char name[50], phone[15], email[50], address[100];
    printf("Adicionar contato\n");
    printf("Nome: ");
    clear_input_buffer();
    get_string_input(name, 50);
    printf("Telefone: ");
    get_string_input(phone, 15);
    printf("Email: ");
    get_string_input(email, 50);
    printf("Endereço: ");
    get_string_input(address, 100);
    add_data_to_contact(&c, name, phone, email, address);
    add_contact(contact_list, &c);
}

void list_contacts_option(contact_list contact_list) {
    printf("Listar contatos\n");
    list_contacts(contact_list);
}

void find_contact_option(contact_list *contact_list) {
    char name[50];
    printf("Buscar contato\n");
    printf("Nome do contato a buscar: ");
    clear_input_buffer();
    get_string_input(name, 50);
    contact *contact = find_contact(contact_list, name);
    
    if (contact != NULL) {
        show_contact(contact);
    } else {
        printf("Contato não encontrado\n");
    }
}

void delete_contact_option(contact_list *contact_list) {
    char name[50];
    printf("Deletar contato\n");
    printf("Nome do contato a deletar: ");
    clear_input_buffer();
    get_string_input(name, 50);
    delete_contact(contact_list, name);
}