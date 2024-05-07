#ifndef ESTADIO_H_INCLUDED
#define ESTADIO_H_INCLUDED

#include "lista.h"
struct EstadioE;

typedef struct EstadioE * EstadioPtr;

EstadioPtr crearEstadio(int cap, char nom[20]);

void mostrarEstadio(EstadioPtr e);

ListaPtr getListajuegador(EstadioPtr l);


#endif // ESTADIO_H_INCLUDED
