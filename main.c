#include <stdio.h>
#include <stdlib.h>
#include "estadio.h"
#include "lista.h"
#include "jugador.h"
#include "nodo.h"
/// 1- Construir todo el programa bajo TDA
/// Muchas cosas las pueden reutilizar, lo que falte deberan desarrollarlo

/// 2- El estadio debe tener una lista de jugadores
/// 3- Crear un estadio y crear 5 jugadores. (Insertar los jugadores en la lista del estadio)
/// 4- Mostrar el estadio con los jugadores
/// 5- Ordenar la lista de jugadores por apellido y mostrar otra vez el estadio
/// --- Hasta acá requisito de aprobacion -----
/// 6- Eliminar de la lista a un jugador buscado por apellido
/// 7- Duplicar la lista y mostrar el duplicado

int main()
{       printf("\n****************SIN ORDENAR**************************\n");
       EstadioPtr e=crearEstadio(22,"river");
       JugadorPtr j1=crearJugador(3,"ruiz");
       JugadorPtr j2=crearJugador(4,"luissino");
       JugadorPtr j3=crearJugador(5,"rodrigues");
       JugadorPtr j4=crearJugador(6,"albetico");
       JugadorPtr j5=crearJugador(7,"pereira");
    insertarPrimero(getListajuegador(e),&j1 );
 insertarPrimero(getListajuegador(e),&j2 );
 insertarPrimero(getListajuegador(e), &j3);
  insertarPrimero(getListajuegador(e), &j4);
   insertarPrimero(getListajuegador(e), &j5);
    mostrarEstadio( e);
    printf("\n****************ORDENADO x APELLIDO**************************\n");
    ordenarXapellido(getListajuegador(e));///es lo mismo hacerla en lista o en estadio
 mostrarEstadio( e);
    return 0;
}
