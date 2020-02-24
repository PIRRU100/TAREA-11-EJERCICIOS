#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

float x,Rango;

printf("INGRESE EL VALOR DE x:");
scanf("%f", &x);

if(x<=0){
    Rango = x + 3;
printf("\nEL VALOR DEL RANGO ES: %0.2f\n", Rango);
}
else{
    (x>0);
    Rango = pow(x,2) + 2 * x;
printf("\nEL VALOR DEL RANGO ES: %0.2f\n", Rango);
}
}
