#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "mandm.h"
#include "machine.h"
Mandm *crear_mandm(void){
    Mandm *chocolate = malloc(sizeof(Mandm));
    chocolate->actualizar=0;
    char *colores[4]={"amarillo","azul","verde","marron"}; 
    int numero_aleatorio = rand() % (3+1);
    chocolate->color=colores[numero_aleatorio]; 

}
void actualizar(Mandm *this){
    char *reacciones[5]={"Estoy aburrido","que habra mas alla?","me gustan los chocolates marrones 7v7","cuando sera que saldre","soy un rico chocolatito"};     
    int numero_aleatorio = rand() % (3+1);
    if(this->actualizar=1){
        printf(reacciones[numero_aleatorio]);
    }
}
