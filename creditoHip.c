#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int anios;
	int sueldo;
	puts("Ingrese los anios que lleva trabajando en la empresa: ");
	scanf("%d", &anios);
	
	puts("Ingrese el sueldo que recibe mensualmente: ");
	scanf("%d", &sueldo);
	
	int sueldMens = (sueldo*100)/10;
	
	if(anios>4){
		if(sueldMens>1000){
			puts("Si puede obtener el credito hipotecario");
		}
	}
	
	system ("Pause");
	return 0;	
}
