#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	int i;
	int suma;
	puts("Ingrese el numero para hacer la suma: ");
	scanf("%d", &n);
	
	for (i=0;i<=n;i++){
	suma = suma+(i); 
	}
	printf("%d", suma-1);
	printf("\n");
	
	system("Pause");
	return 0;
}
