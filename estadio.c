#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#include "estadio.h"
#include "jugador.h"
#include "nodo.h"
#include <string.h>
struct EstadioE{

    int capacidad;
    char nombre[20];
    ListaPtr jugadores;
};


EstadioPtr crearEstadio(int cap, char nom[20]){
EstadioPtr e=(EstadioPtr) malloc (sizeof (struct EstadioE));
e->capacidad=cap;
strcpy (e->nombre,nom);
e->jugadores=crearLista();
return e;
};

void mostrarEstadio(EstadioPtr e){

    printf("\n---------ESTADIO---------\n");
    printf("NOMBRE: %s -- CAP: %d\n", e->nombre, e->capacidad);
    mostrarJugadores(getListajuegador(e));
};







ListaPtr getListajuegador(EstadioPtr l){
    return l->jugadores;

}





