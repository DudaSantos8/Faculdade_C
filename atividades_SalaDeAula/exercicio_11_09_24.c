#include<stdio.h>

int main(){
    int valor, controlador_while = 0, valor_soma=0, valor_media=0;
    printf("Digite um número inteiro natural: ");
    scanf("%d", &valor);
    
    printf("Valores: ");
    while (controlador_while <= valor){
        printf("%d ,", controlador_while);
        controlador_while++;
    }

    controlador_while = 0;
    valor = 0;
    printf("\nDigite  quantos valores deseja inserir: ");
    scanf("%d", &valor);
    while (controlador_while < valor){
        printf("Digite o %d° valor: ", controlador_while+1);
        scanf("%d", &valor_soma);
        valor_media += valor_soma;
        controlador_while++;
    }
    printf("A média dos valores digitados é: %d", (valor_media/valor));
    
}