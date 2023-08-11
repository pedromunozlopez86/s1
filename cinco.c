#include <stdio.h>
#include <string.h>
int numero;
char *str_num;

int
main ()
{

  printf ("Introduzca el resultado al lanzar un dado: ");

  scanf ("%d", &numero);
  if (numero < 1 || numero > 6)
    {
      printf ("ERROR: Numero incorrecto!");
    }
  else
    {
        // dependiendo del numero escogido seteo la variable string al valor opuesto.
      switch (numero){
	    case 1:
	        str_num = "Seis";
            break;
        case 2:
            str_num = "Cinco";
            break;
        case 3:
            str_num = "Cuatro";
            break;
        case 4:
            str_num = "Tres";
            break;
        case 5:
            str_num = "Dos";
            break;
        case 6:
            str_num = "Uno";
            break;
            
      }    
    printf ("El numero escogido es: %d y la cara opuesta tiene el numero: %s",numero,str_num);
    }
  return 0;
}