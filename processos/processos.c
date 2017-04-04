//
// Created by Luiz Felipe on 04/04/17.
//

#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#include "processos.h"

void processosEx1() {
    pid_t pid = fork();

    printf("Novo processo!\n");

    wait(NULL); // o processo pai espera o filho terminar
}

void processosEx2() {
    pid_t pid;
    for (int i = 0; i < 4; ++i) {
        pid = fork();
        if (pid >= 0 /* Criou com sucesso */) {
            if (pid != 0 /* É o pai */) {
                printf("Processo pai %d criou %d \n", getpid(), pid);
            } else {
                // Filho
                printf("Processo filho %d \n", getpid());
                break;
            }
        }
    }

    // aguarda o termino de TODOS os filhos
    // o retorno de wait() indica o PID do filho que terminou ou -1 caso o processo não tenha filhos
    while ((pid = wait(NULL)) > 0)
        printf("Processo pai %d: filho %d terminou!\n", getpid(), pid);
}

void processosEx3() {
    pid_t pid;
    for (int i = 0; i < 2; ++i) {
        pid = fork();
        if (pid == 0) {
            printf("Processo %d filho de %d \n", getpid(), getppid());
            for (int j = 0; j < 2; ++j) {
                pid_t pidNeto = fork();
                if (pidNeto == 0) {
                    printf("Processo %d filho de %d \n", getpid(), getppid());
                    break;
                }
            }
            break;
        }
    }

    // aguarda o termino de TODOS os filhos
    // o retorno de wait() indica o PID do filho que terminou ou -1 caso o processo não tenha filhos
    while ((pid = wait(NULL)) > 0)
        printf("Processo pai %d: filho %d terminou!\n", getpid(), pid);
}