
#include<stdio.h>
#include<stdlib.h>

int main(){

    int* pontInt, quantidade, indice;

    printf("Quantidade de valores: ");
    scanf("%d", &quantidade);

    if (quantidade <= 0){
        printf("\n\a A quantidade n�o pode ser menor ou igual a zero!");
        return -1;
    }

    /* O malloc faz a aloca��o de mem�ria mas deixa a �rea reservada como est�,
       ou seja com os valores anteriormente armazenados (Lixo de Mem�ria) */

    pontInt = (int*) malloc(quantidade * sizeof(int));

    if (pontInt == NULL){
        printf("\n\a Erro na alocacao de memoria!");
        return -2;
    }

    for (indice = 0; indice < quantidade; indice++){
        printf("\n [%d] - %d", indice, pontInt[indice]);
    }

    free(pontInt);

    return 0;
}
