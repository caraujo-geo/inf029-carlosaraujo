#include <stdio.h>
#include <string.h>
#define TAM_VET 255
#define TAM_CLIENTES 1

typedef struct ficha_cliente
{
    char nome[TAM_VET];
    char dataNascimento[TAM_VET];
    char cpf[TAM_VET];
    char sexo[TAM_VET];
} Cliente;

void cadastrarCliente(int i, Cliente lista_clientes[]);
void imprime_clientes(Cliente lista_clientes[]);

int main()
{

    Cliente lista_clientes[TAM_VET];

    int i;

    puts("\t\t\t\tCadastrar Cliente\t\t\t\t\n");

    for (i = 0; i < TAM_CLIENTES; i++)
    {
        cadastrarCliente(i, lista_clientes);
    }

    puts("\t\t\t\tDados do Cliente\t\t\t\t\n");

    for (i = 0; i < TAM_CLIENTES; i++)
    {

        printf("Nome: %s\nData de Nascimetno: %s\nCPF: %s\nSexo: %s\n",
               lista_clientes[i].nome,
               lista_clientes[i].dataNascimento,
               lista_clientes[i].cpf,
               lista_clientes[i].sexo);
    }

    /*puts("\t\t\t\tDados do Cliente- Função\t\t\t\t\n");

        imprime_clientes(lista_clientes);*/

    return 0;
}

void cadastrarCliente(int i, Cliente lista_clientes[])
{

    printf("Nome do cliente:\t");
    fgets(lista_clientes[i].nome, TAM_VET, stdin);

    printf("Data de nascimento(dd/mm/aaaa):\t");
    fgets(lista_clientes[i].dataNascimento, TAM_VET, stdin);

    printf("Numero do CPF:\t");
    fgets(lista_clientes[i].cpf, TAM_VET, stdin);

    printf("Informe o Sexo [M- Masculino]\t[F- Feminino]\t[O- Outros]\n");
    fgets(lista_clientes[i].sexo, TAM_VET, stdin);
}

void imprime_clientes(Cliente lista_clientes[])
{
    int i;
    for (i = 0; i < TAM_CLIENTES; i++)
    {
        printf("\t\t\t\tDados do Cliente - [%d]\t\t\t\t\n", i);
        printf("Nome: %s\nData de Nascimetno: %s\nCPF: %s\nSexo: %s\n",
               lista_clientes[i].nome,
               lista_clientes[i].dataNascimento,
               lista_clientes[i].cpf,
               lista_clientes[i].sexo);
    }
}