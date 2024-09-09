#include"Camioneta.h"

void CargarCamioneta(camionetas &c){
    printf("\nIngrese el modelo de la camioneta: ");
    fflush(stdin);
    scan(c.modelo);


    printf("\nIngrese la capacidad de carga de la camioneta: ");
    scanf("%d",&c.capcarga);
}

void DevolverModeloCamio(camionetas c,strings &str1){
    strcop(c.modelo,str1);
}

int DevolverCapcarga(camionetas c){
    return c.capcarga;
}

void MostrarCamioneta(camionetas c){
    strings str1;

    DevolverModeloCamio(c, str1);
    print(str1);
    printf("\nLa capacidad de carga es de: %d.",DevolverCapcarga(c));

}
