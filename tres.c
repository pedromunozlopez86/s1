#include <stdio.h>

int precio1, precio2, precio3, media, suma;

int main()
{

    printf("Introduzca el precio del producto en el establecimiento numero 1, en euros: ");

    scanf("%d", &precio1);

    printf("Introduzca el precio del producto en el establecimiento numero 2, en euros: ");

    scanf("%d", &precio2);

    printf("Introduzca el precio del producto en el establecimiento numero 3, en euros: ");

    scanf("%d", &precio3);

    // calculamos la media
    suma = precio1 + precio2 + precio3;

    media = suma / 3;

    printf("El precio medio del producto es: %d en Euros", media);

    return 0;
}
