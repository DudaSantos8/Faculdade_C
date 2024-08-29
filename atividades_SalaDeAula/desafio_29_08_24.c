#include <stdio.h>
#include <math.h>

int main() {

float valorA,valorB,valorC,  delta;

printf("Digite os valor (a b c) para calcular a função quadratica\n ");
printf("Digite o valor de A na função: \n");
scanf("%f", &valorA);

printf("Digite o valor de B na função: \n");
scanf("%f", &valorB);

printf("Digite o valor de C na função: \n");
scanf("%f", &valorC);

delta = pow(valorB, 2.0) - 4 * valorA * valorC;

if(delta == 0){
    printf("Existe uma raiz");
}else if(delta > 0){
    printf("Existe duas raizes");
}else if(delta < 0){
    printf("Não existe raiz");
}

printf("\nO delta dessa função é: %.1f", delta);
return 0;
}