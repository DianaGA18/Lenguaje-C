#include <stdio.h>
#include <stdlib.h>

int main(){
	char origen[]="Origen";
	char destino[7];
	strcpy(destino, origen);
	printf("Destino: %s \n", destino);
	system ("Pause");
	return 0;
}
