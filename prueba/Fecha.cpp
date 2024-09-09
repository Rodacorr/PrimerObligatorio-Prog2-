#include "Fecha.h"

void CargarFecha(Fecha &f){
    printf("\nIngrese el dia: ");
    scanf("%d",&f.dia);
    printf("\nIngrese el mes: ");
    scanf("%d",&f.mes);
    printf("\nIngrese el anio: ");
    scanf("%d",&f.anio);
}

int DarDia(Fecha f){
    return f.dia;
}

int DarMes(Fecha f){
    return f.mes;
}

int DarAnio(Fecha f){
    return f.anio;
}

void MostrarFecha(Fecha f){
    printf("\nLa fecha es: %d / %d / %d.",f.dia,f.mes,f.anio);
}

boolean EsValida(Fecha f){
    boolean Valida=FALSE;

    switch (f.mes)
        {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                            if (f.dia >= 1 && f.dia <= 31)
                                Valida = TRUE;
                            else
                                Valida = FALSE;
                        break;
                case 4:
                case 6:
                case 9:
                case 11:
                            if (f.dia >= 1 && f.dia <= 30)
                                Valida = TRUE;
                            else
                                Valida = FALSE;
                        break;
                 case 2:
                        if (f.anio % 4 == 0)
                            if (f.dia >= 1 && f.dia <= 29)
                                Valida = TRUE;
                            else
                                Valida = FALSE;
                            else
                                if (f.dia >= 1 && f.dia <= 28)
                                    Valida = TRUE;
                                else
                                    Valida = FALSE;
                        break;
                 default:
                        Valida = FALSE;
                        break;
 }
    return Valida;
}
