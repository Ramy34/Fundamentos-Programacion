/*programa que utiliza funciones*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

		void hola (void)/*declaracion y definicion  la funcion*/
		{
			  printf("\nEsta es la funcion hola");
			  printf("\n Hola Compañeros");
			  }
		void adios(void)
	  {
			  printf("\nEsta esla funcion adios");
			  printf("\n Adios compañeros");
			  }

main()
{     
      printf("\n ESTE ES EL PROGRAMA PRINCIPAL");
      printf("\n Realiza la llamada a la funcion HOLA");
      hola();/*invoca o manda llamar la función*/
      printf("\n Realiza la llamada a la funcion ADIOS");
      adios();
      printf("\n Fin del programa.\n En el programa principal");
      system("pause");
      return 0;
}       
          
