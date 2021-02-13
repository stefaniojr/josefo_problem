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

    for (int i = N; i >= 0; i--)
        insereNumero(inicializaNumero(i), lista);

    int L = definirLider(M, lista);

    printf("O líder é: %d\n", L);

    
    //lista = liberaLista(lista);

    return 0;
}