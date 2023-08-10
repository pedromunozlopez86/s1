#include <stdio.h>


float R,V,D,H;
float Pi = 3.1415;


int main()
{
    printf("Introduzca el diámetro, en metros:");
    scanf("%f",&D);
    printf("Introduzca la altura, en metros:");
    scanf("%f",&H);
    // calculo de R 
    R = D / 2;  
    R = R * R;
    V= Pi*R*H;
    printf("El volumen del cilindro es de: %f\n metros cúbicos",V);
    return 0;
}  