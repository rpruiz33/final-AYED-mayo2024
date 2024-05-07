#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#include "jugador.h"
#include <string.h>


struct JugadorE{

    int numero;
    char apellido[20];

};



JugadorPtr crearJugador(int num, char ape[20]){
JugadorPtr j=(JugadorPtr)malloc(sizeof(struct JugadorE));
j->numero=num;
strcpy(j->apellido,ape);
return j;
}


void mostrarJugador(JugadorPtr j){


    printf("\n-----JUGADOR----\n");
    printf("APELLIDO: %s - NUM: %d\n", j->apellido, j->numero);

};
char * getApellido(JugadorPtr j){
return j->apellido;

}
