#include"Hora.h"

void CargarHoras(hora &h){
    boolean valida=FALSE;
    do{
    printf("\nIngrese hora: ");
    scanf("%d",&h.Horas);
        if(h.Horas >= 8 && h.Horas <=22){
            printf("\nIngrese minutos: ");
            scanf("%d",&h.Minutos);
                if(h.Minutos >= 0 && h.Minutos <=59)
                    valida = TRUE;
                else
                    printf("\nError minutos no validos");

        }
        else
            printf("\nERROR Hora no valida.\nVolver a ingresar hora: ");

    }while(!valida);
}

int DevolverHoras(hora h){
    return h.Horas;
}

int DevolverMinutos(hora h){
    return h.Minutos;
}

void MostrarHoras(hora h){
    printf("\nLa hora es: %d:%d",DevolverHoras(h),DevolverMinutos(h));
}
