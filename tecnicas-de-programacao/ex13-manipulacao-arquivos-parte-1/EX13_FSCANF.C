
/* Exemplo de manipula��o de Arquivo Texto

   Uso das fun��es:

   fscanf: Le dados formatos de um arquivo.
           Em caso de sucesso, a fun��o retorna o n�mero de itens da lista de argumentos
           preenchido com sucesso. Esta contagem pode igualar o n�mero esperado de itens
           ou ser menor (mesmo zero) devido a uma falha de correspond�ncia, um erro de
           leitura, ou o alcance do fim do arquivo.
           Se um erro de leitura acontece ou o fim do arquivo � atingido durante a leitura,
           o indicador adequado � definido (errno), e caso isto ocorra antes que qualquer
           dado possa ser lido com sucesso, EOF (Constante que indica final de arquivo)
           � retornada.

   Tratamento de erros

   errno : v�riavel localizada na biblioteca <errno.h> que armazena o c�digo do �ltimo erro
           padr�o identificado.

   ENOFILE : Constante que indica que o arquivo ou diret�rio n�o foi localidozado */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h> // Biblioteca com a v�riavel (errno) e constantes de erro

int main(){

    int   numeroLido;
    FILE *arquivo;
    char  nomeArquivo[] = "NUMEROS.TXT";

    arquivo = fopen(nomeArquivo, "r"); // Abre o arquivo (deve existir) para leitura com o ponteiro no in�cio

    if (arquivo == NULL){

        if(errno == ENOFILE){
            printf("\n\a Erro %d: O arquivo [%s] nao foi localizado.\n", errno, nomeArquivo);
        }else{
            printf("\n\a Erro %d: N�o foi possivel abrir para leitura o arquivo [%s].\n", errno, nomeArquivo);
        }

        exit(errno);
    }

    printf("\n Listando numeros do arquivo...\n ");

    while (fscanf(arquivo, "%d", &numeroLido) == 1){

        if (numeroLido == 1){
            printf("\n ");
        }

        printf("%d ", numeroLido);
    }

    fclose(arquivo);

    printf("\n\n Operacao realizada com sucesso!\n");

    return 0;
}
