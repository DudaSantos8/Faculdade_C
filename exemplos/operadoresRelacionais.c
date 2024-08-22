#include <stdio.h>

int main() {

int a = 5, b = 3;

//Igualdade
int resultado = (a == b);
printf("%d == %d é %d\n", a, b, resultado);

//Diferença
resultado = (a != b);
printf("%d != %d é %d\n", a, b, resultado);

//Maior
resultado = (a > b);
printf("%d > %d é %d\n", a, b, resultado);

//Menor
resultado = (a < b);
printf("%d < %d é %d\n", a, b, resultado);

//Maior ou igual
resultado = (a >= b);
printf("%d >= %d é %d\n", a, b, resultado);

//Menor ou Igual
resultado = (a <= b);
printf("%d <= %d é %d\n", a, b, resultado);

return 0;
}