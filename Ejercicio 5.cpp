#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
setlocale(LC_CTYPE, "Spanish");

int Edad;
float Entrada,Descuento,Precio;

printf("INGRESE LA EDAD:");
scanf("%d", &Edad);
printf("\nINGRESE EL VALOR DE LA ENTRADA $:");
scanf("%f", &Entrada);

if(Edad<=12){
Descuento = Entrada * 0.60;
Precio = Entrada - Descuento;
printf("\nEL PRECIO FINAL DE LA ENTRADA PARA NIÑOS ES: $%0.2f\n", Precio);
}

else if (Edad>=60){
Descuento = Entrada * 0.55;
Precio = Entrada - Descuento;
printf ("\nEL PRECIO FINAL DE LA ENTRADA PARA MAYORES DE EDAD ES: $%0.2f\n", Precio);
}

else{
    (Edad>=13 && Edad<=59);
Precio = Entrada;
printf("\nEL PRECIO FINAL DE LA ENTRADA PARA ADULTOS ES: $%0.2f\n", Precio);
}
}
