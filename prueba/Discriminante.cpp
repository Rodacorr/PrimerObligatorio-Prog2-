#include"Discriminante.h"

void CargarDiscriminante(discriminante &dis){
    int a=0;
    printf("\nIngrese el tipo de vehiculo: \n1 - AUTO.\n2- CAMIONETA.\n");
    scanf("%d",&a);

    if (a == 1)
        dis = AUTO;
    else{
        if (a == 2)
            dis = CAMIONETA;

    }
}

void MostrarDiscriminante(discriminante dis){
    if (dis == AUTO)
        printf("\nAUTO.");
    else {
        if(dis== CAMIONETA)
            printf("\nCAMIONETA.");
        else
            printf("\nFUERA DE RANGO.");
            }
}
