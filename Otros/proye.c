#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <ctype.h>

using namespace std;

string desencriptar(string linea,int desplazamiento)
{
	string desencriptado;
	// Asignar la línea original en la línea desencriptada para que el tamaño del string coincida
	desencriptado = linea;
	// Recorrer la línea caracter x caracter
	for(string::size_type i=0; i<linea.size(); i++) {
		// Desplazar el caracter
		desencriptado[i] = linea[i] - desplazamiento;
	}
	return desencriptado;
}

string encriptar(string linea,int desplazamiento)
{
	string encriptado;
	// Asignar la línea original en la línea encriptada para que el tamaño del string coincida
	encriptado = linea;
	// Recorrer la línea caracter x caracter
	for(string::size_type i=0; i<linea.size(); i++) {
		// Desplazar el caracter
		encriptado[i] = linea[i] + desplazamiento;
	}
	return encriptado;
}

int main() {
	printf("================ CODIFICADO DE ARCHIVO ================\n");
	
	// Cambiar codificación para permitir caracteres de español como Ñ y acentos
	setlocale(LC_CTYPE, "Spanish"); 

	// Definir variables que se utilizarán	
	string archivo;
	int numerocesar;
	string linea;
	string lineaencriptada;
	string lineadesencriptada;
	
	// Pedir el nombre del archivo
	printf("Indique el nombre del archivo a encriptar: ");
	scanf("%s", &archivo[0]);
	
	// Pedir el número para el desplazamiento
	printf("Indique el número de desplazamiento para la encriptación: ");
	scanf("%i", &numerocesar);
	
	// Intentar abrir el archivo
	ifstream miarchivo(archivo.c_str());
	if (miarchivo.is_open())
	{
		// Se pudo abrir el archivo, continuar con la encriptación
		while ( getline(miarchivo, linea) )
		{
			printf("Línea del archivo  : %s\n", linea.c_str());
			lineaencriptada = encriptar(linea, numerocesar);
			printf("Línea encriptada   : %s\n", lineaencriptada.c_str());
			lineadesencriptada = desencriptar(lineaencriptada, numerocesar);
			printf("Línea desencriptada: %s\n\n", lineadesencriptada.c_str());
		}
		miarchivo.close();
	} else {
		// No se pudo abrir el archivo, mostrar error
		printf("No se pudo abrir el archivo");
	}
	return 0;
}
