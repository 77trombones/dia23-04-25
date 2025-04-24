#include <stdio.h>

#include <stdio.h>

int main() {
    float numeros[2];

    printf("Digite dois números reais:\n");
    scanf("%f %f", &numeros[0], &numeros[1]);

    printf("Você digitou: %.2f e %.2f\n", numeros[0], numeros[1]);

    return 0;
}