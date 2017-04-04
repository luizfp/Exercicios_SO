//
// Created by Luiz Felipe on 04/04/17.
//

#ifndef EXERCICIOS_SO_PROCESSOS_H
#define EXERCICIOS_SO_PROCESSOS_H

/**
 * Escreva um programa em C que cria um processo utilizando a
 * chamada de sistema fork(). Ambos os processos pai e filho deverão imprimir
 * na tela a frase “Novo processo criado!”. Você deverá utilizar apenas
 * um printf().
 */
void processosEx1();

/**
 * Escreva um programa em C no qual o processo pai cria 4 processos
 * filhos. Para cada filho criado, o processo pai deverá imprimir na
 * tela “Processo pai XX criou YY”, onde XX é o PID do pai e YY o PID do
 * filho. Além disso, os processos filhos deverão imprimir na tela “Processo
 * filho XX”, onde XX é o PID do filho. Dica: utilize a função getpid() para
 * retornar o PID do processo corrente.
 */
void processosEx2();

/**
 * Escreva um programa em C no qual o processo pai cria 2 processos
 * filhos e cada um dos processos filhos cria mais 2 processos filhos. Os
 * processos filhos deverão imprimir na tela “Processo XX filho de YY”, onde
 * XX é o PID do processo e YY é o PID do pai do processo. Dica: utilize a
 * função getpid() para retornar o PID do processo corrente e getppid() para
 * retornar o PID do pai do processo corrente.
 */
void processosEx3();

#endif //EXERCICIOS_SO_PROCESSOS_H
