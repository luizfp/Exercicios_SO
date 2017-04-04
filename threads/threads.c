//
// Created by Luiz Felipe on 04/04/17.
//

#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <pthread.h>
#include "threads.h"

void printThreadId() {
    pthread_t tid = pthread_self();
    printf("Nova Thread criada. TID = %u!", (unsigned) tid);
    pthread_exit(NULL);
}

void threadsEx1() {
    pthread_t thread;
    pthread_create(&thread, NULL, printThreadId, NULL);
    pthread_join(thread, NULL);
    pthread_exit(NULL);
}

void threadsEx2() {

}

void threadsEx3() {

}