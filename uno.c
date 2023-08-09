#include <stdio.h>

int gt = 32; // autos turismos
int capGt = 40; // capacidad bencina turismos

int awd = 11; // autos todo terreno
int capAwd = 65; // capacidad bencina todoterreno

int calcGt,calcAwd,total;

int main()
{
    calcGt = gt*capGt; // 1280 
    calcAwd = awd*capAwd; // 715
    total = calcGt+calcAwd;
    printf("La cantidad de combustible total es: %d\n litros.",total);
    
    return 0;
}