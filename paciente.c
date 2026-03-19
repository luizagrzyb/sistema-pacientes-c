#include <stdio.h>
#include <string.h>
#include "paciente.h"

void registrar_paciente(Paciente *p, const char *nome, int idade, int id, const char *condicao) {
    strcpy(p->pessoa.nome, nome);
    p->pessoa.idade = idade;
    p->id_paciente = id;
    strcpy(p->condicao, condicao);
}

