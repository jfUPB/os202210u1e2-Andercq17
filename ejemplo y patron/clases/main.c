#include "machine.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "mandm.h"
int main(void)
{
    Machine *maquina_chocolatitos = NULL;
    maquina_chocolatitos = createlist();
    for(int i=0; i<10;i++){
        Mandm *chocolatito=NULL;
        chocolatito= crear_mandm();
        anadir(maquina_chocolatitos,chocolatito);
    }
    for(int i=0; i<4;i++){
        eliminar(maquina_chocolatitos, 5);
    }
    cantidadmandm(maquina_chocolatitos);
    coloresmandm(maquina_chocolatitos);
}
