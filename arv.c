#include <stdlib.h>
#include <stdio.h>
#include "ARVORE.h"
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    No* Pai = NULL;
    int valor;
    int num;
    char continua;

    printf("Insira valores na arvore (digite 0 para parar):\n");

    do {
        printf("Valor: ");
        scanf("%d", &valor);

        if (valor != 0)
            Pai = inserir(Pai, valor);

    } while (valor != 0);

    printf("Árvore criada.\n");


    do {
        printf("\nDigite um valor para buscar na árvore: ");
        scanf("%d", &num);

        if (buscar(Pai, num)){
            printf("\n%d encontrado na árvore.\n", num);
        }
        else{
            printf("\n%d não encontrado na árvore.\n", num);
        }
        fflush(stdin);
        printf("\nDeseja buscar outro valor? (s/n): ");
        scanf("%c", &continua);

    } while (continua == 's');{

            return 0;
    }
}
