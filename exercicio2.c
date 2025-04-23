#include <stdio.h>

#define PI 3.14159

int main(){
    float raio, area;
    
    printf("digite o raio: ");
    scanf("%f", &raio);
    
    area = PI * raio * raio;
    
    printf("a área do círculo é: %.2f\n", area);
    
    return 0;
}