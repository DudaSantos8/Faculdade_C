#include <stdio.h>
int main (){
    int a = 5, b = 3;

int soma = a + b;
printf("soma de %d e %d é %d\n", a, b, soma);

int subtracao = a - b;
printf("subtracao de %d e %d é %d\n", a, b, subtracao);

int mult = a * b;
printf("multiplicação de %d e %d é %d\n", a, b, mult);

int divisao = a / b;
printf("divisao de %d e %d é %d\n", a, b, divisao);

int mod = a % b;
printf("resto da divisão de %d e %d é %d\n", a, b, mod);
   
a++;
printf("incremento: %d\n", a);
   
b--;
printf("decremento: %d\n", b);
    return 0;
}