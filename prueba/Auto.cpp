#include"Auto.h"

void CargarAutos(autos &a){
    printf("\nIngrese la marca del vehiculo: ");
    fflush(stdin);
    scan(a.marca);
    printf("\nIngrese anio de fabricacion: ");
    scanf("%d",&a.aniofab);
}

void DevolverMarca(autos a,strings &str1){
    strcop (a.marca, str1);
}

int DevolverAniofab(autos a){
    return a.aniofab;
}

void MostrarAutos(autos a){
    strings str1;

    DevolverMarca(a, str1);
    print(str1);
    printf("\nEl anio de fabricacion es: %d.",DevolverAniofab(a));

}
