#ifndef ARVORE_H_INCLUDED
#define ARVORE_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int info;
    struct No* esq;
    struct No* dir;
} No;

No* criarNo(int valor) {
    No* novoNo = (No*)malloc(sizeof(No));
    novoNo->info = valor;
    novoNo->esq = novoNo->dir = NULL;
    return novoNo;
}

No* inserir(No* pai, int valor) {
    if (pai == NULL)
        return criarNo(valor);

    if (valor < pai->info)
        pai->esq = inserir(pai->esq, valor);
    else if (valor > pai->info)
        pai->dir = inserir(pai->dir, valor);

    return pai;
}

int estaVazia(No* pai) {
    return (pai == NULL);
}

No* buscar(No* pai, int num) {
    if (pai == NULL || pai->info == num)
        return pai;

    if (num < pai->info)

        return buscar(pai->esq, num);

        return buscar(pai->dir, num);
}



#endif // ARVORE_H_INCLUDED
