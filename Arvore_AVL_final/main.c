#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "ArvoreAVL.h"

int main(){
    setlocale(LC_ALL, "Portuguese");

    int x; //usado como retorno c�digo de erro
    arvAVL *raiz;

    raiz = cria_arvAVL();

    x = insere_arvAVL(raiz, 100);
    x = insere_arvAVL(raiz, 140);
    x = insere_arvAVL(raiz, 160);
    x = insere_arvAVL(raiz, 130);
    x = insere_arvAVL(raiz, 150);
    x = insere_arvAVL(raiz, 110);
    x = insere_arvAVL(raiz, 120);
    if (x){
        printf("\nElementos inseridos com sucesso!");
    }else{
        printf("\nErro, n�o foi pos�vel inserir os elementos.");
    }

    if(vazia_arvAVL(raiz)){
        printf("\nA �rvore est� vazia.");
    }else{
        printf("\nA �rvore possui elementos.");
    }

    x = altura_arvAVL(raiz);
    printf("\nAltura da �rvore: %d", x);

    x = totalNO_arvAVL(raiz);
    printf("\nTotal de n�s na �rvore: %d", x);

    printf("\n\nVisitando em pr�-Ordem:\n");
    preOrdem_arvAVL(raiz);

    printf("\nVisitando em-Ordem:\n");
    emOrdem_arvAVL(raiz);

    printf("\nVisitando em p�s-Ordem:\n");
    posOrdem_arvAVL(raiz);

    x = remove_arvAVL(raiz, 140);

    if(x){
        printf("\n\nElemento removido com sucesso!\n");
    }else{
        printf("Erro, n�o foi poss�vel remover o elemento.");
    }

    printf("\nVisitando em p�s-Ordem depois da remo��o:\n");
    posOrdem_arvAVL(raiz);

    printf("\nBusca na �rvore AVL:\n");
    if(consulta_arvAVL(raiz,130)){
        printf("Consulta realizada com sucesso!\n");
    }else{
        printf("Elemento n�o encontrado...\n");
    }

    liberar_arvAVL(raiz);
}
