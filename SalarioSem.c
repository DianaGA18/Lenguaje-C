#include <stdio.h>
#include <stdlib.h>

int main(){
	int hrsemt;
	int preciohr;
	int salariosem;
	puts("Ingrese las horas semanales trabajadas: ");
	scanf("%d", &hrsemt);
	puts("Ingrese el precio por hora: ");
	scanf("%d", &preciohr);
	
	if(hrsemt<=40){
		salariosem= hrsemt * 40;
		printf("Su salario semanal es de: %d", salariosem);
		printf ("\n");
	}else if(hrsemt>40){
		salariosem= (40 * preciohr + (preciohr*1.5*(hrsemt-40)));
		printf("Su salario semanal es de: %d", salariosem);
		printf ("\n");
	}
	system ("Pause");
	return 0;
}
