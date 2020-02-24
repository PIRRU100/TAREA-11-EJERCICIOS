#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
setlocale(LC_CTYPE, "Spanish");

int N1,N2,N3;

printf("INTRODUZCA EL VALOR DEL PRIMER NUMERO:");
scanf("%d", &N1);
printf("\nINTRODUZCA EL VALOR DEL SEGUNDO NUMERO:");
scanf("%d", &N2);
printf("\nINTRODUZCA EL VALOR DEL TERCER NUMERO:");
scanf("%d", &N3);

if(N1==3 && N2==9 && N3==5){
    printf("\nACCESO ACEPTADO\n");
}
else{
    printf("\nCONTRASEÑA INCORRECTA\n");
}
}
