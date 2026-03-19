#include <stdio.h>
#include <stdlib.h>
#include "pessoa.h"

// simulação de medição para sinais vitais:
void medir_sinais(Pessoa *p) {
    p->batimentos = 60 + rand() % 40;
    p->pressao = 90 + rand() % 40;
    p->temperatura = 36 + (rand() % 40) / 10.0;
}

void imprimir_sinais(Pessoa *p) {
    printf("nome: %s\n", p->nome);
    printf("idade: %d\n", p->idade);
    printf("batimentos: %.1f bpm\n", p->batimentos);
    printf("pressão: %.1f mmHg\n", p->pressao);
    printf("temperatura: %.1f oC\n", p->temperatura);
}

