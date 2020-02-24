#include <stdio.h>
#include <stdlib.h>

int main(){

int J;

printf("INGRESE UN DATO:");
scanf("%d",&J);

switch(J){
case 1:
case 2:
case 3:
case 4:
case 5:
case 6:
case 7:
case 8:
case 9:
    printf("\nES UN NUMERO\n");
    break;
default:
    printf("\nES UNA LETRA\n");
}
}
