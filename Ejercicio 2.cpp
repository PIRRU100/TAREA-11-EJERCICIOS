#include <stdio.h>
#include <stdlib.h>

int main (){

int N1,N2;

printf("INTRODUCE EL PRIMER NUMERO:\n");
scanf("%d", &N1);
printf("\nINTRODUCE EL SEGUNDO NUMERO:\n");
scanf("%d", &N2);

if(N1%N2==0){
    printf("\nEL PRIMER NUMERO ES DIVISIBLE ENTRE EL SEGUNDO NUMERO\n");
}
else{
    printf("\nEl PRIMER NUMERO NO ES DIVISIBLE ENTRE EL SEGUNDO NUMERO\n");
}
}
