#ifndef JUGADOR_H_INCLUDED
#define JUGADOR_H_INCLUDED


struct JugadorE;

typedef struct JugadorE * JugadorPtr;

JugadorPtr crearJugador(int num, char ape[20]);

void mostrarJugador(JugadorPtr j);


#endif // JUGADOR_H_INCLUDED
