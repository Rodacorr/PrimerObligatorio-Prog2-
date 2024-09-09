#ifndef CAMIONETA_H_INCLUDED
#define CAMIONETA_H_INCLUDED
#include"string.h"
typedef struct{
    strings modelo;
    int capcarga;
}camionetas;
void CargarCamioneta(camionetas &c);

void DevolverModeloCamio(camionetas c,strings &str1);

int DevolverCapcarga(camionetas c);

void MostrarCamioneta(camionetas c);

#endif // CAMIONETA_H_INCLUDED
