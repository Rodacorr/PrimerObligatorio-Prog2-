#ifndef AUTO_H_INCLUDED
#define AUTO_H_INCLUDED
#include"string.h"
typedef struct{
        strings marca;
        int aniofab;
}autos;

void CargarAutos(autos &a);

void DevolverMarca(autos a);

int DevolverAniofab(autos a);

void MostrarAutos(autos a);


#endif // AUTO_H_INCLUDED
