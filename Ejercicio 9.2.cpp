#include <stdio.h>
#include <stdlib.h>

int main (){

int J;

printf("INGRESE UN DATO:");
scanf("%d",&J);

if(J>=0 && J<=9){
    printf("\nES UN NUMERO\n");
}
else{
    printf("\nES UNA LETRA\n");
}
}
