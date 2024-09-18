#include<stdio.h>
#include<limits.h>

int main(){

    int quant_valores, valor, controlador_while = 1, soma_valores = 0, valores_positivos = 0;
    int maior_valor = INT_MIN, menor_valor = INT_MAX;

    printf("Digite  quantos valores deseja inserir: ");
    scanf("%d", &quant_valores);

    while(controlador_while <= quant_valores){

        printf("\nDigite o %d° valor: ", controlador_while);
        scanf("%d", &valor);
        soma_valores += valor;

        // definir maior e menor valor de entrada
        if(maior_valor < valor){
            maior_valor = valor;
        }
        if(menor_valor > valor){
            menor_valor = valor;
        }

        // somar quantos valores foram positivos
        if(valor > 0) valores_positivos += 1; 

        if((valor < 100 && valor > 0) && (valor%2 == 0 && valor%5 == 0)){
            printf("\nO valor digitado é menor que 100 e multiplo de 2 e 5\n");
        }
        controlador_while ++;   
    }

    printf("\nA soma dos valores é: %d", soma_valores);
    printf("\nO maior valor digitado foi: %d, e o menor foi: %d", maior_valor, menor_valor);
    printf("\nQuantidade de valores positivos: %d", valores_positivos);
}