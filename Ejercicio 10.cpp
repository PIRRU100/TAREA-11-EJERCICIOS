#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_CTYPE, "Spanish");

float BT,AT,ATR,LA,LB,HTP,ATP,BR,AR,ARG;
int opt;

printf("1.-�rea de un Tri�ngulo\n\n2.-�rea de un Trapecio\n\n3.-�rea de un Rect�ngulo\n");
printf("\nSeleccione una opci�n:");
scanf("%d",&opt);

switch(opt){
case 1:
    printf("\nIntroduce la base del Tri�ngulo:");
    scanf("%f",&BT);
    printf("\nIntroduce la altura del Tri�ngulo:");
    scanf("%f",&AT);
    ATR = BT * AT /2;
    printf("\nEl �rea del Tri�ngulo es: %0.2f\n",ATR);
    break;
case 2:
    printf("\nIntroduce la altura del Trapecio:");
    scanf("%f",&AT);
    printf("\nIntroduce el lado A:");
    scanf("%f",&LA);
    printf("\nIntroduce el lado B:");
    scanf("%f",&LB);
    ATP = AT * (LA + LB) /2;
    printf("\nEl �rea del Trapecio es: %0.2f",ATP);
    break;
case 3:
    printf("\nIntroduce la base del Rect�ngulo:");
    scanf("%f",&BR);
    printf("\nIntroduce la altura del Rect�ngulo:");
    scanf("%f",&AR);
    ARG = BR * AR;
    printf("\nEl �rea del Rect�ngulo es: %0.2f",ARG);
    break;
    default:
    printf("\nOpci�n Invalida\n");
}
}
