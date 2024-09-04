#include <stdio.h>

int main(){
    int number1, number2, number3, aux, maior, menor;

    for (int i = 1; i <= 3; i++){
        printf("Digite o %d numero: ", i);
        scanf("%d",&aux);
        if(i == 1) number1 = aux;
        else if (i == 2) number2 = aux;
        else if (i == 3) number3 = aux;
    }

    if(number1 > number2 && number1 > number3){
        maior = number1;
    }else if (number2 > number1 && number2 > number3){
        maior = number2;
    }else if (number3 > number1 && number3 > number2){
        maior = number3;
    }
    
    if(number1 < number2 && number1 < number3){
        menor = number1;
    }else if (number2 < number1 && number2 < number3){
        menor = number2;
    }else if (number3 < number1 && number3 < number2){
        menor = number3;
    }

    printf("O maior numero: %d \n", maior);
    printf("O menor numero: %d", menor);

    return 0;
}
