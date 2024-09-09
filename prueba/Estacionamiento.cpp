#include"Estacionamiento.h"

boolean EstaRegistrado (ArregloConTope a, strings mat){
    int i=0;
    boolean encontre = FALSE;

    do{
        if(streq(a.arreglo[i].Matricula, mat))
            encontre = TRUE;
        else
            i++;

    }while(i<a.tope && !encontre);
    return encontre;
}

void IngresarVehiculo(ArregloConTope &a){
    Vehiculo h;
    CargarVehiculo(h);
    if(!EstaRegistrado(a,h.Matricula)){
        a.arreglo[a.tope] = h;
        a.tope++;
    }
    else
        printf("\nERROR. El vehiculo ya esta registrado.");
    if(a.tope>tam)
        printf("\nEsta lleno el estacionamiento");
}

void ResgistrarPartida(ArregloConTope &a, strings Mat, int &total){
    hora h;
    boolean esta=FALSE;
    int i=0;
    int thoras=0, tminutos=0;

    do{
        if(streq(a.arreglo[i].Matricula, Mat)){

            int ticket=0;
            printf("/nIngrese la hora de salida: ");
            CargarHoras(h);
            thoras = h.Horas - a.arreglo[i].hor.Horas;
            tminutos = h.Minutos - a.arreglo[i].hor.Minutos;
            if (tminutos==0)
                ticket= thoras*100;
            else
                ticket=(thoras*100)+60;

            printf("\nEl valor del ticket es de: %d pesos.",ticket);

            total= total + ticket;

            esta= TRUE;
            for(i;i<a.tope;i++){
                a.arreglo[i] = a.arreglo[i+1];
            }
            a.tope--;

        }
        else
        i++;
    }while(i<a.tope && !esta);

}

int TotRecaudado(int total){
    return total;
}

void CantAutosYCamionetas(ArregloConTope a){
    int contAut=0, contCam=0;

    for(int i=0; i<a.tope; i++){
        if(a.arreglo[i].disc == AUTO)
            contAut++;
        else if (a.arreglo[i].disc == CAMIONETA)
                contCam++;
    }
    printf("\nLa cantidad de AUTOS es de: %d.",contAut);
    printf("\nLa cantidad de CAMIONETAS es de: %d.",contCam);
}

int TotVehiculoXDepartamento(ArregloConTope a, Departamentos d){

    int contador=0;
    for(int i=0;i<a.tope;i++){
        if(a.arreglo[i].Dept == d)
            contador++;
    }
    return contador;

}

void ListadoVehiculos(ArregloConTope a){
    for(int i=0;i<a.tope;i++){
        printf("La matricula es: ");
        print(a.arreglo[i].Matricula);
        ImprimrDepartamento(a.arreglo[i].Dept);
        printf(" La CI es: %ld",DevolverCI(a.arreglo[i]));
        printf(" ");
        MostrarHoras(a.arreglo[i].hor);
        printf("\n");
    }
}

void MostrarDatosXMatricula(ArregloConTope a){
    strings str1;
    printf("\nIngrese su Matricula a continuacion: ");
    fflush(stdin);
    scan(str1);
    for(int i=0;i<a.tope;i++)
        if(streq(a.arreglo[i].Matricula, str1))
            MostrarVehiculo(a.arreglo[i]);


}

void IngresosXHora(ArregloConTope a){
    int horIngre;
    strings str1;

    printf("\nIngrese una hora: ");
    scanf("%d",&horIngre);
    if(horIngre >= 8 && horIngre <=22){
        for(int i=0;i<a.tope;i++){
            if(horIngre == a.arreglo[i].hor.Horas){
                printf("\nLa CI es: %ld",DevolverCI(a.arreglo[i]));
                printf("\nLa matricula es: ");
                DevolverMatricula(a.arreglo[i],str1);
                print(str1);
            }
        }
    }
    else
        printf("\nHora no valida.");
}

void SuperaCapDeCarga(ArregloConTope a){
    int valcarga=0;
    printf("\nIngrese el limite de la capcidad de carga para el estacionamiento: ");
    fflush(stdin);
    scanf("%d",&valcarga);
    for(int i=0;i<a.tope;i++){
        if(a.arreglo[i].datos.camio.capcarga > valcarga){
            printf("\nSu CI es: %ld.", DevolverCI(a.arreglo[i]));
            MostrarCamioneta(a.arreglo[i].datos.camio);
        }
    }
}


void cargadevehiculos(ArregloConTope &a){
    boolean listo;
     Vehiculo v;
     listo=FALSE;

    int i=0, b=0;
    do{
       printf("\n--Cargando informacion del vehiculo--\n");
       CargarVehiculo(a.arreglo[i]);
       printf("\nDesea continuar?. \n1-SI, 2-NO\n: ");
       scanf("%d",&b);
       if(b==1){
            i++;
            a.tope++;
       }
       else {
        a.tope++;
        listo=TRUE;
       }

    }while(listo!=TRUE);

}
