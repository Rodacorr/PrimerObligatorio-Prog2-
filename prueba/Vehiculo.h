#ifndef VEHICULO_H_INCLUDED
#define VEHICULO_H_INCLUDED
#include"String.h"

#include"Hora.h"
#include"Discriminante.h"
#include"Auto.h"
#include"Camioneta.h"
#include "Departamento.h"

typedef struct
{
    strings Matricula;
    Departamentos Dept;
    long int CI;
    hora hor;
    discriminante disc;
    union
    {
        autos aut;
        camionetas camio;
    } datos;
} Vehiculo;


void CargarVehiculo(Vehiculo &v);

void DevolverMatricula(Vehiculo v, strings &str1);

Departamentos DevolverDepartamento(Vehiculo v);

long int DevolverCI(Vehiculo v);

hora DevolverHora(Vehiculo v);

discriminante DevolverDisc(Vehiculo v);

autos DevovlerAutos(Vehiculo v);

camionetas DevovlerCamionetas(Vehiculo v);

void MostrarVehiculo(Vehiculo v);

#endif // VEHICULO_H_INCLUDED
