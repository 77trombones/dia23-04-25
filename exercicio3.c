#include <stdio.h>

int main() {
    float notas[4];
    float total = 0;

    for (int i = 0; i < 4; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    for (int i = 0; i < 4; i++) {
        total += notas[i];
    }

    printf("total: %.2f\n", total);

    return 0;
}