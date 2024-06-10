#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int min =60;
	int hora = 60;
	int dia=24;
	int anio =365;
	int anios =19;
	int segundos = anios*anio*dia*hora*min;
	
	printf("%d", segundos);
	printf("\n");
	system("Pause");
	return 0;
}
