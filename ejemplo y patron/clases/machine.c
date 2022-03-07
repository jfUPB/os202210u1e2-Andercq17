#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "machine.h"
#include "mandm.h"

Machine *createlist(void)
{
    Machine *lista_chocolates = malloc(sizeof(Machine));
    lista_chocolates->isEmpty = 0;
    lista_chocolates->primer_chocolate = NULL;
    lista_chocolates->ultimo_chocolate = NULL;
    lista_chocolates->cantidad=0;
    return lista_chocolates;
}
void anadir(Machine *this, Mandm *chocolate){
    Mandm *chocolate = this->primer_chocolate;
    if (this->isEmpty != 1){
        printf("---------añadiendo chocolatito-----------");
        this->primer_chocolate = chocolate;
        this->ultimo_chocolate = chocolate;
        this->isEmpty = 1;
        this->cantidad=this->cantidad+1;
    }
    else{   
        printf("---------añadiendo chocolatito-----------");
        this->primer_chocolate->next = chocolate;
        this->ultimo_chocolate = chocolate;
        this->cantidad=this->cantidad+1;
    }
}
void eliminar(Machine *this, int cantidad){
    if (this->isEmpty == 0){return;}
    else{
        while (cantidad!=0)
        {    
            int numero_aleatorio = rand() % (this->cantidad+1);
            Mandm *actual;
            Mandm *sup_elemento;
            actual = this->primer_chocolate;
            for (int i = 1; i < numero_aleatorio; ++i)
                actual = actual->next;
                sup_elemento = actual->next;
                actual->next = actual->next->next;
            if(actual->next == NULL)
                this->ultimo_chocolate = actual;
            free (sup_elemento);
            this->cantidad--;
        }
    }
    printf("---------chocolatitos van a ser notificados de los que se fueron :c-----------");
    notificar(this);
}
void notificar(Machine *this){
    printf ("---------------------------------------------");
    printf ("---------------------------------------------");
    printf ("---------notificando chocolatitos-----------");
    Mandm *chocolate_actual;
    chocolate_actual = this->primer_chocolate;
    while (chocolate_actual != NULL){
        chocolate_actual->actualizar=1;
        chocolate_actual = chocolate_actual->next;
    }
}
void cantidadmandm(Machine *this){
    int conteo= this->cantidad;
    printf ("---------------------------------------------");
    printf ("---------------------------------------------");
    printf ("----Cantidad de M&M dentro de la maquina-----");
    printf ("--Hay %d m&m en la maquina de chocolatitos", conteo);
    
}
void coloresmandm(Machine *this){
    Mandm *chocolate_actual;
    chocolate_actual = this->primer_chocolate;
    int amarillo=0;
    int verde=0;
    int azul=0;
    int marron=0;
    while (chocolate_actual != NULL){
        chocolate_actual->actualizar=1;
        if (chocolate_actual->color=="amarillo")
        {
            amarillo++;
        }else if (chocolate_actual->color=="azul")
        {
            azul++;
        }else if (chocolate_actual->color=="verde")
        {
            verde++;
        }else if (chocolate_actual->color=="marron")
        {
            marron++;
        }
        chocolate_actual = chocolate_actual->next;
    }
    printf ("---------------------------------------------");
    printf ("---------------------------------------------");
    printf ("----Colores de M&M dentro de la maquina-----");
    printf ("--Hay %d m&m de color amarillo", amarillo);
    printf ("--Hay %d m&m de color azul", azul);
    printf ("--Hay %d m&m de color verde", verde);
    printf ("--Hay %d m&m de color marron", marron);
    
}