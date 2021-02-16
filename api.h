#ifndef API_H_
#define API_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct listacircular ListaCircular;

ListaCircular *inicializaLista();
ListaCircular *insereNumero(int num, ListaCircular *lista);
int definirLider(int M, ListaCircular *lista);
void imprimir(ListaCircular *lista);

#endif /* API_H_ */