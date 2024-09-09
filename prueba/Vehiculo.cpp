#include"Vehiculo.h"

void CargarVehiculo(Vehiculo &v){
    printf("\nIngrese la Matricula: ");
    fflush(stdin);
    scan(v.Matricula);

    Seleccionedepartamento(v.Dept);

    printf("\nIngrese CI: ");
    fflush(stdin);
    scanf("%ld",&v.CI);

    CargarHoras(v.hor);

    CargarDiscriminante(v.disc);

    if(v.disc==AUTO)
        CargarAutos(v.datos.aut);
    else
        CargarCamioneta(v.datos.camio);
}

void DevolverMatricula(Vehiculo v,strings &str1){
    strcop(v.Matricula, str1);
}

Departamentos DevolverDepartamento(Vehiculo v){
     return v.Dept;
}

long int DevolverCI(Vehiculo v){
    return v.CI;
}

hora DevolverHora(Vehiculo v){
    return v.hor;
}

discriminante DevolverDisc(Vehiculo v){
    return v.disc;
}

autos DevovlerAutos(Vehiculo v){
    return v.datos.aut;
}

camionetas DevovlerCamionetas(Vehiculo v){
    return v.datos.camio;
}

void MostrarVehiculo(Vehiculo v){
    strings str1;

    DevolverMatricula(v, str1);
    print(str1);

    ImprimrDepartamento(v.Dept);

    printf("\nLa CI es: %ld",DevolverCI(v));

    MostrarHoras(v.hor);

    MostrarDiscriminante(v.disc);

    if(v.disc==AUTO)
        MostrarAutos(v.datos.aut);
    else
        MostrarCamioneta(v.datos.camio);


}
