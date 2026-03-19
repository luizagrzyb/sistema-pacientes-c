//// pessoa.h: define a estrutura Pessoa e declara funções para medir sinais vitais
/* arquivos de cabeçalho (.h) são usados para declarar estruturas e tipos, declarar funções e compartilhar código entre arquivos */

#ifndef PESSOA_H
#define PESSOA_H

typedef struct {            //typedef stract define uma estrutura de dados 
    char nome[50];
    int idade;
    float batimentos;
    float pressao;
    float temperatura;
} Pessoa;

// métodos "encapsulados" inicializados
void medir_sinais(Pessoa *p); // ponteiro para uma estrutura do tipo Pessoa; ou seja, a função pode alterar os valores da pessoa original 
void imprimir_sinais(Pessoa *p);

#endif

