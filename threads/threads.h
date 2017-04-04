//
// Created by Luiz Felipe on 04/04/17.
//

#ifndef EXERCICIOS_SO_THREADS_H
#define EXERCICIOS_SO_THREADS_H

/**
 * Escreva um programa em C que cria uma worker thread usando
 * PThreads. A thread criada deverá imprimir na tela a frase “Nova thread
 * criada. TID = XX!”, onde XX é o identificador da thread. A main thread
 * deverá aguardar que a thread criada imprima a frase na tela antes de
 * terminar. Dica: use a função pthread_self() para retornar o ID da thread.
 */
void threadsEx1();

/**
 * Transforme o código do exercício anterior em um código gené-
 * rico que cria n threads. Da mesma forma que o exercício anterior, a
 * main thread deverá aguardar a finalização de todas as worker threads
 * antes de terminar. O número de threads deverá ser definido no código
 * em uma constante chamada MAX_THREADS. Por exemplo, deverão ser
 * criadas 5 threads se a constante for definida da seguinte forma: #define
 * MAX_THREADS 5.
 */
void threadsEx2();

/**
 * Tendo como base a solução para o exercício anterior, crie uma
 * variável global do tipo inteiro inicialmente contendo o valor 0 (int contador_global
 * = 0;). Modifique a função executada pelas threads para que
 * cada thread realize 100 operações de incremento nesta variável global
 * (contador_global++) sem a utilização de mutex. Após o término
 * da execução das threads, a main thread deverá imprimir o valor armazenado
 * na variável contador_global. Em uma execução correta, o valor
 * impresso deverá ser igual a 100 vezes o número de threads criadas,
 * ou seja contador_global = 100 * MAX_THREADS. Execute várias
 * vezes este programa com 2, 4, 8, 32 e 128 threads e observe o valor impresso
 * a cada vez. O que acontece?
 */
void threadsEx3();

#endif //EXERCICIOS_SO_THREADS_H