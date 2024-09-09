#include "Departamento.h"

void Seleccionedepartamento(Departamentos &d){

    int p=0;
    do{
        printf("\nDepartamentos: \n1-CANELONES.\n2-MALDONADO.\n3-ROCHA.\n4-TREINTA_Y_TRES.\n5-CERRO_LAROGO.\n6-RIVERA.\n7-ARTIGAS.\n8-SALTO.\n9-PAYSANDU.\n10-RIO_NEGRO.\n11-SORIANO.\n12-COLONIA.\n13-SAN_JOSE.\n14-FLORES.\n15-FLORIDA.\n16-LAVALLEJA.\n17-DURAZNO.\n18-TACUAREMBO.\n19-MONTEVIDEO.");
        printf("\nIngrese departamento del vehiculo: ");
        scanf("%d",&p);
        if(p<19 && p>1)
            printf("\nERROR. Departamento no valido.");
    }while(p>=19&&p<=1);
    switch (p){
        case 1: d = CANELONES;
            break;
        case 2: d = MALDONADO;
            break;
        case 3: d = ROCHA;
            break;
        case 4: d = TREINTAYTRES;
            break;
        case 5: d = CERROLARGO;
            break;
        case 6: d = RIVERA;
            break;
        case 7: d = ARTIGAS;
            break;
        case 8: d = SALTO;
            break;
        case 9: d = PAYSANDU;
            break;
        case 10: d = RIONEGRO;
            break;
        case 11: d = SORIANO;
            break;
        case 12: d = COLONIA;
            break;
        case 13: d = SANJOSE;
            break;
        case 14: d = FLORES;
            break;
        case 15: d = FLORIDA;
            break;
        case 16: d = LAVALLEJA;
            break;
        case 17: d = DURAZNO;
            break;
        case 18: d = TACUAREMBO;
            break;
        case 19: d = MONTEVIDEO;
            break;
    }

}

void ImprimrDepartamento (Departamentos d){

    switch(d){
    case CANELONES:
        printf("CANELONES");
        break;
    case MALDONADO:
        printf("MALDONADO");
        break;
    case ROCHA:
        printf("ROCHA");
        break;
    case TREINTAYTRES:
        printf("TREINTA Y TRES");
        break;
    case CERROLARGO:
        printf("CERRO LAROG");
        break;
    case RIVERA:
        printf("RIVERA");
        break;
    case ARTIGAS:
        printf("ARTIGAS");
        break;
    case SALTO:
        printf("SALTO");
        break;
    case PAYSANDU:
        printf("PAYSANDU");
        break;
    case RIONEGRO:
        printf("RIO NEGRO");
        break;
    case SORIANO:
        printf("SORIANO");
        break;
    case COLONIA:
        printf("COLONIA");
        break;
    case SANJOSE:
        printf("SAN_JOSE");
        break;
    case FLORES:
        printf("FLORES");
        break;
    case FLORIDA:
        printf("FLORIDA");
        break;
    case LAVALLEJA:
        printf("LAVALLEJA");
        break;
    case DURAZNO:
        printf("DURAZNO");
        break;
    case TACUAREMBO:
        printf("TACUAREMBO");
        break;
    case MONTEVIDEO:
        printf("MONTEVIDEO");
        break;

    }


}
