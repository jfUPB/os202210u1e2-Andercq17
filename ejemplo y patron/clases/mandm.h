#ifndef _IMANDM_H
#define _IMANDM_H
#include "machine.h"
typedef struct _mandm
{ 
    char * color;
    int actualizar;
    struct _mandm *next;
} Mandm;
Mandm *crear_mandm(void);
void actualizar(Mandm *this);
#endif
