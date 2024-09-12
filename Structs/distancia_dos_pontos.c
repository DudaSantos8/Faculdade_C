#include<stdio.h>
#include<math.h>

struct pontos_para_calcular {
    int ponto1_x;
    int ponto2_x;
    int ponto1_y;
    int ponto2_y;
};

int main(){
    struct pontos_para_calcular  pontos;
    printf("Digite as coordenadas do primeiro ponto: (x,y)");
    scanf("%d", &pontos.ponto1_x);
    scanf("%d", &pontos.ponto1_y);
   
    printf("Digite as coordenadas do segundo ponto: (x,y)");
    scanf("%d", &pontos.ponto2_x);
    scanf("%d", &pontos.ponto2_y);

    double valor1 = (pontos.ponto1_x - pontos.ponto2_x);
    double valor2 = (pontos.ponto1_y - pontos.ponto2_y);

    double calc = (pow(valor1,2.0)) + (pow(valor2, 2.0));
        float resposta = sqrt(calc);
        printf("O tamanho da reta: %2f",resposta);
       
}