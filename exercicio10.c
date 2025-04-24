#include <stdio.h>

void maior(float numeros[]) {
    if (numeros[1] > numeros[0]) {
        float temp = numeros[0];
        numeros[0] = numeros[1];
        numeros[1] = temp;
    }
}

void mostrarvetor(float numeros[]) {
    printf("Vetor: %.2f %.2f\n", numeros[0], numeros[1]);
}

int main() {
    float numeros[2] = {7.0, 8.0};

    printf("Antes de maior():\n");
    mostrarvetor(numeros);

    maior(numeros);

    printf("Depois de maior():\n");
    mostrarvetor(numeros);

    return 0;
}