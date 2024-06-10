#include <stdio.h>
#include <stdlib.h>

int main(){
	int vector[100];//INDICA LAS POSICIONES DEL VECTOR
	int i=0, n;
	puts("Ingrese la tabla que desee ver:  ");
	scanf("%d", &n);
	while(i <= 100){
		printf("Vector[%d] = %d \n", i, i*n);
		i++;
		printf("\n");	
	}
	
	system ("Pause");
	return 0;
}
