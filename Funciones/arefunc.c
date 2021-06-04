#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416
void area_circulo(){
     int radio;
     float areacirc;
     printf("Teclee el radio: ");
     scanf("%d",&radio);
     areacirc=PI*radio*radio;
     printf("El area del circulo es: %f",areacirc);
}
void area_cuadrado(){
     int lado,areacuad;
     printf("Dame el lado");
     scanf("%d",&lado);
     areacuad=lado*lado;
     printf("El area del cuadrado es: %d",areacuad);
}
void area_rectangulo(){
     int base,alt,arearec;
     printf("Dame la base y la altura");
     scanf("%d %d",&base,&alt);
     arearec=base*alt;
     printf("El area del rectangulo es: ",arearec);
}
void area_triangulo(){
     int base,alt;
     float areatria;
     printf("Dame la base y la altura");
     scanf("%d %d",&base,&alt);
     areatria=base*alt/2;
     printf("El area del rectangulo es: ",areatria);
}
void area_trapecio(){
     float basemay,basemen,alt,areatrap;
     printf("Da la base mayor,menor y altura");
     scanf("%f %f %f",&basemay,&basemen,&alt);
     areatrap=(basemay+basemen)*alt/2;
     printf("El area del rectangulo es: ",areatrap);
}
    
main()
{     char resp='S';
     int opc;
      do{   
      printf("Elige una opcion\n");
      printf("1. Circulo\n");
      printf("2. Cuadrado\n");
      printf("3. Rectangulo\n");
      printf("4. Triangulo\n");
      printf("5. Trapecio\n");
      scanf("%d ",&opc);
      switch(opc)
      { 
      case 1: area_circulo();break;
      case 2: area_cuadrado();break;
      case 3: area_rectangulo();break;
      case 4: area_triangulo();break;
      case 5: area_trapecio();break;
      default:break;
      
      }
      printf("\nDeseas continuar S/N\n");
      
      scanf("%c ",&resp);
} while(resp=='S'||resp=='s');
system("pause");
return 0;
}

      
