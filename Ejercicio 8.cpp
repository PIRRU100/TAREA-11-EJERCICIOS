#include <stdio.h>
#include <stdlib.h>

int main (){

float N1,N2,N3;

printf("INGRESE EL VALOR DEL PRIMER NUMERO:");
scanf("%f", &N1);
printf("\nINGRESE EL VALOR DEL SEGUNDO NUMERO:");
scanf("%f", &N2);
printf("\nINGRESE EL VALOR DEL TERCER NUMERO:");
scanf("%f", &N3);

if(N1<N2 && N1<N3){
    if(N2<N3){
        printf("\n%0.2f", N1);
        printf("\n%0.2f", N2);
        printf("\n%0.2f", N3);
    }
else{
        printf("\n%0.2f", N1);
        printf("\n%0.2f", N3);
        printf("\n%0.2f", N2);
}
}
if(N2<N1 && N2<N3){
    if(N1<N3){
        printf("\n%0.2f", N2);
        printf("\n%0.2f", N1);
        printf("\n%0.2f", N3);
}
else{
        printf("\n%0.2f", N2);
        printf("\n%0.2f", N3);
        printf("\n%0.2f", N1);
}
}
if(N3<N1 && N3<N2){
    if(N1<N2){
        printf("\n%0.2f", N3);
        printf("\n%0.2f", N1);
        printf("\n%0.2f", N2);
}
else{
        printf("\n%0.2f", N3);
        printf("\n%0.2f", N2);
        printf("\n%0.2f", N1);
}
}
if(N1==N3 && N3==N2){
    if(N1==N2){
        printf("\nTODOS LOS NUMEROS SON IGUALES\n");
    }
}
}
