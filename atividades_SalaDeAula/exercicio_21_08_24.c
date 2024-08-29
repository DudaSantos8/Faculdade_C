#include <stdio.h>

int main() {

float valor1, valor2, calculo;
int operacao;

printf("Digite o primeiro numero:");
scanf("%f", &valor1);

printf("Digite o segundo numero:");
scanf("%f", &valor2);

printf("O que você deseja fazer:\n");
printf("1 para soma\n2 para subtracao\n3 para divisao\n4 para multiplicacao");
printf("\n-------------------------\n");
scanf("%d", &operacao);

if(operacao == 1){
    calculo = valor1 + valor2;

}else if(operacao == 2){
    calculo = valor1 - valor2;

}else if(operacao == 3){
    if(valor1 == 0 || valor2 == 0) {printf("valor invalido 1");}
    calculo = valor1 / valor2;

}else if(operacao == 4){
    calculo = valor1 * valor2;

}else{
    printf("valor invalido");
}

printf("\nA resposta da sua conta é: %.2f", calculo);



return 0;
}