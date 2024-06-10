#include <stdio.h>
#include <stdlib.h>

int main(){
	int x, y, n=1, i, suma=0, multi;
	puts("Ingrese las posiciones del vector: ");
	scanf("%d", &x);
	printf("\n");
	int vector[x];//INDICA LAS POSICIONES DEL VECTOR
	
	while (n <= x){
		puts("Ingrese el valor del vector: ");
		scanf("%d", &y);
		printf("\n");		
		n++;
	}
	for(n=1;n<=x;n++){
		suma = suma +(y);
	}
	
	printf("El promedio es: %d \n", suma);	
	system ("Pause");
	return 0;
}
	
