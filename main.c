#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "pessoa.h"
#include "paciente.h"
#include "medico.h"

int main() {
    srand(time(NULL));

    // criação de paciente:
    Paciente paciente1;
    registrar_paciente(&paciente1, "João", 30, 101, "Hipertensao"); // aponta o endereço da memória de paciente1 e insere/registra as informações
    medir_sinais(&paciente1.pessoa);
    imprimir_sinais(&paciente1.pessoa);

    printf("\n");

    // criação de médico:
    Medico medico1;
    strcpy(medico1.pessoa.nome, "Dra. Maria");      // para copiar um texto para o outro 
    medico1.pessoa.idade = 40;
    strcpy(medico1.especialidade, "Cardiologista");

    medicar_paciente(&medico1, &paciente1);

    return 0;
}


