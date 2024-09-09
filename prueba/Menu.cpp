#include"Menu.h"

void Menu (ArregloConTope &est){
int Opcion=0, op2=0,vtot=0;
Departamentos d;
strings Mat;
hora h;
printf("PRIMER MENU\n");
do{
    printf("\n1. Registrar ingreso de un vehiculo.");
    printf("\n2. Registrar partida de un vehiculo.");
    printf("\n3. Menu de consultas y listados.");
    printf("\n4. Salir del programa. \n");
    printf("\nIngrese a continuacion la opcion deseada: ");
    scanf("%d",&Opcion);
    switch(Opcion){
        case 1: cargadevehiculos(est);
            break;
        case 2:
            printf("\nIngrese una matricula: ");
            fflush(stdin);
            scan(Mat);
            ResgistrarPartida(est, Mat, vtot);
            break;
        case 3: printf("\nSEGUNDO MENU\n");
                printf("\n1. Total recaudado hasta el momento por concepto de tickets.");
                printf("\n2. Cantidad de autos y cantidad de camionetas registradas actualemente.");
                printf("\n3. Cantidad de vehiculos matriculadas en un departamento determinado.");
                printf("\n4. Listado de vehiculos registrados actualmente.");
                printf("\n5. Listado detallado de un vehiculo.");
                printf("\n6. Listado de vehiculos que ingresaron dentro de una hora determinada.");
                printf("\n7. Listado de camionetas que superan una capacidad de carga determinada.");
                printf("\n8. Volver al menu principal.\n");
                printf("\nIngrese a continuacion la opcion deseada: ");
                scanf("%d",&op2);
                    switch(op2){
                            case 1: printf("\nEl total recaudado hasta el momento es de: %d pesos.",TotRecaudado(vtot));
                                break;
                            case 2: CantAutosYCamionetas(est);
                                break;
                            case 3: Seleccionedepartamento(d);
                                    printf("el total de vehiculos por departameno es %d",TotVehiculoXDepartamento(est, d));
                                break;
                            case 4: ListadoVehiculos(est);
                                break;
                            case 5: MostrarDatosXMatricula(est);
                                break;
                            case 6: IngresosXHora(est);
                                break;
                            case 7: SuperaCapDeCarga(est);
                                break;
                            case 8:
                                break;
                            default: printf("\nERROR FUERA DE RANGO.\n");
                                break;
                        }
            break;
        case 4:printf("SALGO");
            break;
        default: printf("\nERROR FUERA DE RANGO.\n");
                 Opcion = 4;
            break;
    }
}while(Opcion!=4);


}

