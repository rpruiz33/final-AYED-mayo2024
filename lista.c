#include <stdio.h>
#include <stdlib.h>
#include "jugador.h"
#include "lista.h"

struct Lista{

    NodoPtr primero;

};

NodoPtr getPrimero(ListaPtr lista){
return lista->primero;

};
void setPrimero(ListaPtr lista, NodoPtr nuevoPrimero);


ListaPtr crearLista(){

    ListaPtr lista = malloc(sizeof(struct Lista));

    lista->primero = NULL;

    return lista;
};


void insertarPrimero(ListaPtr lista, DatoPtr dato){

    NodoPtr nuevoNodo = crearNodo(dato, lista->primero);

    lista->primero = nuevoNodo;


};


void insertarUltimo(ListaPtr lista, DatoPtr dato){

    NodoPtr nuevoNodo = crearNodo(dato, NULL);

    NodoPtr actual = lista->primero;
    if(actual == NULL){
        lista->primero = nuevoNodo;
    }else{
        while(getSiguiente(actual)!=NULL){

            actual = getSiguiente(actual);
        }

       setSiguiente(actual, nuevoNodo);
        }

};


void insertarPosicion(ListaPtr lista, DatoPtr dato, int posicion);

DatoPtr obtenerPrimero(ListaPtr lista);
DatoPtr obtenerUltimo(ListaPtr lista);
DatoPtr obtenerPosicion(ListaPtr lista, int posicion);

DatoPtr eliminarPrimero(ListaPtr lista);
DatoPtr eliminarUltimo(ListaPtr lista);
DatoPtr eliminarPosicion(ListaPtr lista, int posicion);

int obtenerTamanio(ListaPtr lista){

    int tam = 0 ;
    NodoPtr actual = lista->primero;
    while (actual != NULL){

            tam = tam + 1;
            actual = getSiguiente(actual);

    }

    return tam;
}; //tarea

void ordenarLista(ListaPtr lista);
ListaPtr ordenarListaCopia(ListaPtr lista);
ListaPtr duplicarLista(ListaPtr lista);

int buscarElemento(ListaPtr lista, DatoPtr datoBuscado);

void insertarEnOrden(ListaPtr lista, DatoPtr dato);//tarea, si la lista está ordenada cada vez que
//se inserta se inserta en la posición que corresponda




void liberarLista(ListaPtr lista) {

    NodoPtr actual = lista->primero;
    NodoPtr aux;

    while (actual!=NULL){
        aux = actual;
        actual = getSiguiente(actual);
        free(aux);
    };
}
void mostrarJugadores(ListaPtr l){
    NodoPtr actual= getPrimero( l);

while(actual!=NULL){
//for(int i=0;i<5;i++){
    mostrarJugador(*(JugadorPtr*) getDato(actual));

    actual= getSiguiente(actual);
}

}

void ordenarXapellido(ListaPtr e){


    NodoPtr actual = getPrimero(e);



while(actual!=NULL){
        NodoPtr ordenar=actual;
        while(ordenar!=NULL){


    if(strcmp(getApellido((*(JugadorPtr*)(getDato(actual)))),getApellido(*(JugadorPtr*)(getDato(ordenar))))>0){
       DatoPtr aux=getDato(actual);
        setDato(actual,getDato(ordenar));
        setDato(ordenar,aux);

    }
    ordenar=getSiguiente(ordenar);
        }


actual=getSiguiente(actual);

}
}
