#include "api.h"

struct listacircular
{
    int numero;
    ListaCircular *prox;
};

typedef struct listacircular ListaCircular;

ListaCircular *inicializaLista()
{
    ListaCircular *lista = (ListaCircular *)malloc(sizeof(ListaCircular));

    lista = NULL;

    return lista;
}

ListaCircular *insereNumero(int num, ListaCircular *lista)
{
    ListaCircular *no, *p;
    p = lista;
    no = (ListaCircular *)malloc(sizeof(ListaCircular));

    no->numero = num;
    no->prox = lista;

    if (lista == NULL)
    {
        lista = no;
    }
    else
    {
        while (p->prox != lista)
            p = p->prox;
        p->prox = no;
    }
    no->prox = lista;
    return lista;
}

int definirLider(int M, ListaCircular *lista)
{
    ListaCircular *p = lista;
    ListaCircular *ant = NULL;
    ListaCircular *aux = NULL;
    int iterador = 0;

    while (p != NULL && p->numero != M)
    {
        ant = p;
        p = p->prox;
    }
    aux = p;
    ant->prox = p->prox; // Retira o elemento, fazendo o elemento anterior apontar para o próximo.
    p = ant;
    free(aux);

    while (1)
    {

        if (p->prox->numero == p->numero)
        {
            int num = p->prox->numero;
            free(p);
            return num;
        }

        if (iterador == M)
        {
            aux = p;
            iterador = 0;
            ant->prox = p->prox;
            p = ant;
            free(aux);
        }
        else
        {
            iterador++;
            ant = p;
            p = p->prox;
        }
    };
}