#include <stdio.h>
#include <stdlib.h> //para usar malloc

typedef struct nodo_d {
	int dato;
	struct nodo_d *ant, *sig;
} nodo;

//la doubly linked lists esta representada por una estructura con 2 punteros: primero y ultimo

typedef struct ldoble {
	nodo_d *prim, *ult;
} lista;

//insertar al principio de la lista

lista insertar_lifo(lista l, int d) //con el nombre de la struct y l le digo que estoy llamando a esa struct que contiene a los punteros
{
	nodo_d *nuevo;

	nuevo = (nodo_d*) malloc(sizeof(nodo_d));
	nuevo->dato = d;
	nuevo->ant = NULL;
	nuevo->sig = l.prim;

	if (l.prim == NULL) //Lista vacía, l.prim y l.ult son NULL
		l.ult = nuevo;
	else
		l.prim->ant = nuevo;
	l.prim = nuevo;
	return l;
}



