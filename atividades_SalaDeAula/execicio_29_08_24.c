#include <stdio.h>
#include <math.h>

int main() {

float valor, resposta;
printf("Digite um numero para ver o quadrado dele");
scanf("%f", &valor);

resposta = pow(valor, 2.0);
// pow é potenciacao na biblioteca metematica

printf("Esse numero ao quadrado é: %.1f", resposta);
return 0;
}