#include <stdio.h>
#include<limits.h>

struct max_min{
    int maior_valor;
    int menor_valor;
};

int main(){
    // compara o menor valor posiivel com os valores de entrada e faz o mesmo com o maior;
    struct max_min max_min = {INT_MIN , INT_MAX};

    
    for(int i = 0; i < 10; i++){
        int numero;
        printf("Digite o %d° valor: ", i+1);
        scanf("%d" , &numero);

        if(max_min.maior_valor < numero){
            max_min.maior_valor = numero;
        }
        if(max_min.menor_valor > numero){
            max_min.menor_valor = numero;
        }
    }
    printf("Maior valor: %d,menor valor: %d", max_min.maior_valor, max_min.menor_valor);
    return 0;
}