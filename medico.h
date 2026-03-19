//medico.h - outra "subclasse" de pessoa 
#ifndef MEDICO_H
#define MEDICO_H

#include "pessoa.h"
#include "paciente.h"

typedef struct {
    Pessoa pessoa;
    char especialidade[50];     // dado exclusivo de médico 
} Medico;

void medicar_paciente(Medico *m, Paciente *p);

#endif

