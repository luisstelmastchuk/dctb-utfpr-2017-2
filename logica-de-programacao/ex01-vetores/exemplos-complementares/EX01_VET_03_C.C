/* Exemplo 3C de uso de vetores

   Um vetor quando � criado possui lixo de mem�ria em cada posi��o dele.

   Nesta solu��o as posi��es do vetor s�o inicializadas atrav�s de um la�o de
   repeti��o. O que torna o c�digo flex�vel. Caso se queira aumentar ou diminuir
   a quantidade de elementos do vetor, basta mudar a constante e recompilar o c�digo.
*/

#include<conio.h>
#include<stdio.h>

#define TOTAL 15

int main(){
	int notas[TOTAL], indice;

    for(indice = 0; indice < TOTAL; indice++){
	    notas[indice] = 0;
	}

	printf("\n\nListagem de Dados:");
	for(indice = 0; indice < TOTAL; indice++){
	    printf("\n nota %2d = %3d",indice,notas[indice]);
	}
    printf("\n\nDigite qualquer tecla para encerrar...");
	getch();
	return 0;
}
