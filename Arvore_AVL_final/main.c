#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "ArvoreAVL.h"

int main(){
    setlocale(LC_ALL, "Portuguese");

    int x; //usado como retorno código de erro
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
        printf("\nErro, não foi posível inserir os elementos.");
    }

    if(vazia_arvAVL(raiz)){
        printf("\nA árvore está vazia.");
    }else{
        printf("\nA árvore possui elementos.");
    }

    x = altura_arvAVL(raiz);
    printf("\nAltura da árvore: %d", x);

    x = totalNO_arvAVL(raiz);
    printf("\nTotal de nós na árvore: %d", x);

    printf("\n\nVisitando em pré-Ordem:\n");
    preOrdem_arvAVL(raiz);

    printf("\nVisitando em-Ordem:\n");
    emOrdem_arvAVL(raiz);

    printf("\nVisitando em pós-Ordem:\n");
    posOrdem_arvAVL(raiz);

    x = remove_arvAVL(raiz, 140);

    if(x){
        printf("\n\nElemento removido com sucesso!\n");
    }else{
        printf("Erro, não foi possível remover o elemento.");
    }

    printf("\nVisitando em pós-Ordem depois da remoção:\n");
    posOrdem_arvAVL(raiz);

    printf("\nBusca na Árvore AVL:\n");
    if(consulta_arvAVL(raiz,130)){
        printf("Consulta realizada com sucesso!\n");
    }else{
        printf("Elemento não encontrado...\n");
    }

    liberar_arvAVL(raiz);
}
