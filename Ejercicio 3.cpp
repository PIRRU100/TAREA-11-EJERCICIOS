#include <stdio.h>
#include <stdlib.h>

int main (){

int N1;

printf("INTRODUZCA UN NUMERO:");
scanf("%d", &N1);

if(N1%2==0){
    printf("\nEL NUMERO INTRODUCIDO ES PAR\n");
}
else if(N1%3==0){
printf ("\nEL NUMERO INTRODUCIDO ES IMPAR DEBIDO A QUE ES DIVISIBLE ENTRE 3\n");
}
else{
    printf("\nEL NUMERO INTRODUCIDO ES IMPAR\n");
}
}
