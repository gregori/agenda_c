# Exemplo de Agenda de Contatos em C

Código de exemplo para a atividade de agenda de contatos, como trabalhado na disciplina de Sistemas Operacionais.

## Organização

| Nome do Arquivo | Descrição |
| --------------- | --------- |
| address_book.c  | Arquivo principal que contém a função main() |
| contact.c        | Arquivo que contém as funções relacionadas à struct que representa um contato |
| contact.h        | Arquivo de cabeçalho que contém os protótipos das funções do contato mais a especificação da struct |
| contact_list.c        | Arquivo que contém as funções relacionadas à struct que representa uma lista de contatos |
| contact_list.h        | Arquivo de cabeçalho que contém os protótipos das funções da lista de contatos mais a especificação da struct |
| interface.c        | Arquivo que contém as funções relacionadas à interface textual |
| interface.h        | Arquivo de cabeçalho que contém os protótipos das funções da interface textual |
| persistence.c        | Arquivo que contém as funções relacionadas à persistência de dados |
| persistence.h        | Arquivo de cabeçalho que contém os protótipos das funções de persistência de dados |

## Para compilar

As regras de compilação estão no arquivo `Makefile`. Você precisará estar em um linux ou utilizar as ferramentas GNU no windows para compilar este código (por exemplo, via GIT Bash). Para compilar, execute:

```shell
make all
```

## Arquivo binário

O arquivo binário gerado se chamará `address_book`. Basta executá-lo.