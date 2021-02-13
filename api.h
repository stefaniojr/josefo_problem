#ifndef API_H_
#define API_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct numero Numero;
typedef struct listacircular ListaCircular;

ListaCircular *inicializaLista();
Numero *inicializaNumero(int numero);
void insereNumero(Numero *num, ListaCircular *lista);
int definirLider(int M, ListaCircular* lista);
ListaCircular *liberaLista(ListaCircular *lista);
void liberaNumero(Numero *numeroItem);


#endif /* API_H_ */