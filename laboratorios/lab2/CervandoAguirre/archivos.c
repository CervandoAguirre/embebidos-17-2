#include<stdio.h>
#include<stdlib.h>
#include"defs.h"

void guarda_datos(float * s)
{
	FILE *archivo;
	archivo = fopen("seno.dat", "w");

	if(archivo == NULL)
	{
		perror("Error al abrir");
		exit(EXIT_FAILURE);
	}
	for(int n= 0; n < MUESTRAS ; n++)
	{
		fprintf(archivo, "%f \n", s[n]);
	}
	fclose(archivo);
}


