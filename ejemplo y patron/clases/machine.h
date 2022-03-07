#ifndef _IMACHINE_H
#define _IMACHINE_H
#include "mandm.h"
typedef struct _machine
{
    char isEmpty;
    Mandm *primer_chocolate;
    Mandm *ultimo_chocolate;
    int cantidad;
} Machine;

Machine *createlist(void);
void anadir(Machine *this, Mandm *maquina);
void eliminar(Machine *this, int cantidad);
void notificar(Machine *this);
void cantidadmandm(Machine *this);
void coloresmandm(Machine *this);
#endif