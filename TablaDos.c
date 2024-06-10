#include <stdio.h>
#include <stdlib.h>

int main(){
	int vector[100];//INDICA LAS POSICIONES DEL VECTOR
	int i=0;
	while(i <= 100){
		printf("Vector[%d] = %d \n", i, i*2);
		i++;
		printf("\n");	
	}
	
	system ("Pause");
	return 0;
}
