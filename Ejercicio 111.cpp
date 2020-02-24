#include <stdio.h>
#include <stdlib.h>

int main(){

float X1,Y1,X2,Y2,m,A,B;

printf("INTRODUZCA LOS VALORES DEL PUNTO UNO\n");
printf("\nINTRODUZCA EL VALOR DE X1:");
scanf("%f",&X1);
printf("\nINTRODUZCA EL VALOR DE Y1:");
scanf("%f",&Y1);

printf("\nINTRODUZCA LOS VALORES DEL PUNTOS DOS\n");
printf("\nINTRODUZCA EL VALOR DE X2:");
scanf("%f",&X2);
printf("\nINTRODUZCA EL VALOR DE Y2:");
scanf("%f",&Y2);

    A = (Y2-Y1);
    B = (X2-X1);

    while(B==0){
    printf("\nERROR,COMO X1 ES IGUAL QUE X2 LA PENDIENTE NO EXISTE, POR LO TANTO, LA PENDIENTE ES UNA LINEA VERTICAL\n");
    printf("MODIFIQUE LOS VALORES DE LAS COORDENADAS\n");
    printf("\nINTRODUZCA DE NUEVO EL VALOR DE X1:");
    scanf("%f",&X1);
    printf("\nINTRODUZCA DE NUEVO EL VALOR DE X2:");
    scanf("%f",&X2);
    if(X1!=X2){
        printf("\nEl VALOR DE B ES: %0.2f\n", B=(X2-X1));
    }
    }
    m= A / B;
printf("\nEL VALOR DE LA PENDIENTE ES: %0.2f\n",m);
}
