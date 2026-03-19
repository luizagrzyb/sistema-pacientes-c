#include <stdio.h>
#include <string.h>
#include "medico.h"

void medicar_paciente(Medico *m, Paciente *p) {
    printf("medico %s (especialidade: %s) medicou o paciente %s\n", m->pessoa.nome, m->especialidade, p->pessoa.nome);
}

