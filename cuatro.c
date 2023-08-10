#include <stdio.h>
#include <string.h>

struct hab
{

    int id;

    char nombre[20];

    int camas;

    char planta[20];
};

int habSelect;

int main()
{

    struct hab azul = {1, "Azul", 2, "Primera"};

    struct hab roja = {2, "Roja", 1, "Primera"};

    struct hab verde = {3, "Verde", 3, "Segunda"};

    struct hab rosa = {4, "Rosa", 2, "Segunda"};

    struct hab gris = {5, "Gris", 1, "Tercera"};

    // Se imprime tabla
    printf("Listado de habitaciones Casa Rural: \n");

    printf("====================================================== \n");

    printf("|| %d | Habitacion: %s | Camas: %d | Planta: %s || \n", azul.id,
           azul.nombre,

           azul.camas, azul.planta);

    printf("|| %d | Habitacion: %s | Camas: %d | Planta: %s || \n",
           roja.id, roja.nombre,

           roja.camas, roja.planta);

    printf("|| %d | Habitacion: %s| Camas: %d | Planta: %s ||\n",
           verde.id, verde.nombre,

           verde.camas, verde.planta);

    printf("|| %d | Habitacion: %s | Camas: %d | Planta: %s || \n",
           rosa.id, rosa.nombre,

           rosa.camas, rosa.planta);

    printf("|| %d | Habitacion: %s | Camas: %d | Planta: %s || \n",
           gris.id, gris.nombre,

           gris.camas, gris.planta);

    printf("====================================================== \n");

    // logica de get habitacion by number/id
    printf("Ingrese el numero de habitacion: ");

    scanf("%d", &habSelect);

    switch (habSelect)
    {

    case 1:

        printf("Habitacion %d %s=> Planta %s, NB0 de camas: %d", habSelect,
               azul.nombre, azul.planta, azul.camas);

        break;

    case 2:

        printf("Habitacion %d %s=> Planta %s, N. de camas: %d", habSelect,
               roja.nombre, roja.planta, roja.camas);

        break;

    case 3:

        printf("Habitacion %d %s=> Planta %s, N. de camas: %d", habSelect,
               verde.nombre, verde.planta, verde.camas);

        break;

    case 4:

        printf("Habitacion %d %s=> Planta %s, N. de camas: %d", habSelect,
               rosa.nombre, rosa.planta, rosa.camas);

        break;

    case 5:

        printf("Habitacion %d %s=> Planta %s, N. de camas: %d", habSelect,
               gris.nombre, gris.planta, gris.camas);

        break;
    }

    return 0;

    // printf("Introduzca el precio del producto en el establecimiento numero 1, en euros: ");

    // scanf ("%d", &precio1);

    return 0;
}
