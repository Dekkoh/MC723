
#include <stdio.h>
#include <stdlib.h>

volatile int *lock = (int *) (100*1024*1024);
volatile int soma = 0;
volatile int procCounter = 0;
volatile int *vetor;
volatile int contador = 0;
const int nProc = 1;
const int n = 50000;

void acquireLock() {
        while(*lock);
}

void releaseLock() {
        *lock = 0;
}

int fazSoma(int procNumber) {
        int i, somaParcial = 0;

        for (i = procNumber; i < n; i = i + nProc) {
                somaParcial += vetor[i];
        }

        return somaParcial;
}

void processHandle() {

        int procNumber, i, somaParcial;

        acquireLock();

        procNumber = procCounter;
        procCounter++;

        if (procNumber >= nProc) {
                releaseLock();
                return;
        }

        if(procNumber == 0){

                vetor = malloc(n * sizeof(volatile int));

                for (i = 0; i < n; i++) {
                        vetor[i] = i+1;
                }
        }

        releaseLock();

        somaParcial += fazSoma(procNumber);

        acquireLock();

        soma += somaParcial;

        contador++;

        releaseLock();

        if(contador == nProc) {
                printf("%d\n", soma);
        }

}

int main() {

        processHandle();

        return 0;
}