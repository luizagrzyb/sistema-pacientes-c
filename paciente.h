//paciente.h - "subclasse" paciente
#ifndef PACIENTE_H
#define PACIENTE_H

#include "pessoa.h"

typedef struct {
    Pessoa pessoa;
    int id_paciente;        // dados extras do paciente
    char condicao[50];      // dados extras do paciente
} Paciente;

// inicializa os dados do paciente:
void registrar_paciente(Paciente *p, const char *nome, int idade, int id, const char *condicao);

#endif

