#include <stdio.h>

int main() {
int a = 1, b = 1;

//AND (E)
int resultado = (a && b);
printf("%d e %d é %d\n", a, b, resultado);

//OR (OU)
resultado = (a || b);
printf("%d ou %d é %d\n", a, b, resultado);

//NOT (NÃO)
resultado = !a;
printf("!%d é %d\n", a, resultado);

//Combinação de operadores lógicos
resultado = (a && b) || !a;
printf("(%d e %d) ou !%d é %d\n", a, b, a, resultado);

return 0;
}