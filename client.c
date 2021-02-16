#include "api.h"

int main()
{
    int M, N;

    printf("Qual o valor de N?\n");
    scanf("%d", &N);
    printf("Qual o valor de M?\n");
    scanf("%d", &M);

    ListaCircular *lista;
    lista = inicializaLista();

    for (int i = 1; i <= N; i++)
    {
        lista = insereNumero(i, lista);
    }

    int numLider = definirLider(M, lista);
    printf("O líder é: %d\n", numLider);

    return 0;
}