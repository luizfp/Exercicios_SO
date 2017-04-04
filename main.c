#include "processos/processos.h"
#include "threads/threads.h"

void processos();

void threads();

int main(int argc, char **argv) {
//    processos();
    threads();
}

void processos() {
    processosEx1();
    processosEx2();
    processosEx3();
}

void threads() {
    threadsEx1();
    threadsEx2();
    threadsEx3();
}