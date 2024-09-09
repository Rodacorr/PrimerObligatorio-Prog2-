#ifndef ESTACIONAMIENTO_H_INCLUDED
#define ESTACIONAMIENTO_H_INCLUDED
#include"Vehiculo.h"

//COMENTARIO 18/9 Matias: Escribi los procedimientos de etacionamiento, falta escribir TotReaudado, tambien luego hay que discutir ciertos puntos si estan ingresados bien y tambien hay otros comentarios en el Documento de Google. NO se probo nada en el main, NO da error de compilacion.
const int tam = 50;
typedef struct{
                Vehiculo arreglo[tam];
                int tope=0;
            }ArregloConTope;

boolean EstaRegistrado (ArregloConTope a, strings mat);//ingresa mat si esta

void IngresarVehiculo(ArregloConTope &a); //verifica si el auto esta y lo agrega sino

void ResgistrarPartida(ArregloConTope &a, strings Mat, int &total);//borra por matricula

int TotRecaudado(int total);//por hacer, hacer hora

void CantAutosYCamionetas(ArregloConTope a);//fenomenal

int TotVehiculoXDepartamento(ArregloConTope a, Departamentos d);//anda bien preguntar si ingresa dep y mayus o minus

void ListadoVehiculos(ArregloConTope a);//imporime arreglo no en linea

void MostrarDatosXMatricula(ArregloConTope a);//preguntar si imprime todo o datos del

void IngresosXHora(ArregloConTope a);//imprime datos por hora

void SuperaCapDeCarga(ArregloConTope a);

void cargadevehiculos(ArregloConTope &a);

void Valorticket(ArregloConTope a, hora h, int j, int &ticket);

#endif // ESTACIONAMIENTO_H_INCLUDED
