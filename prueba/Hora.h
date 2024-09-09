#ifndef HORA_H_INCLUDED
#define HORA_H_INCLUDED
#include<stdio.h>
#include"Boolean.h"
typedef struct{
        int Horas;
        int Minutos;
    }hora;

void CargarHoras(hora &h);

int DevolverHoras(hora h);

int DevolverMinutos(hora h);

void MostrarHoras(hora h);


#endif // HORA_H_INCLUDED
