#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i;
	int j;
	int n;
	int m;
	
	puts("Ingrese la tabla que desee ver: ");
	scanf("%d", &m);
	puts("Ingrese el numero: ");
	scanf("%d", &n);
	
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			printf("%d \t",j*i);
		}
		printf("\n\n");
	}
	
	system("Pause");
	return 0;
}
