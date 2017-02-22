#include<stdio.h>
#include"procesamiento.h"
#include"archivos.h"
#include"defs.h"

int main ()
{
	float seno[MUESTRAS];

	generar_seno(seno);
	guarda_datos(seno);
	return 0;
}


