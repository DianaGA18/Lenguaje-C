#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,j;
	int len;
	char cad[]=" ";
	puts("Ingrese una palabra:");
	gets(cad);
	len = strlen(cad);
	
	printf("La longitud de: %s es %d\n",cad,len);
	
	for(i=1;i<=len;i++){
		for(j=1;j<=len;j++){
		printf("* \t");	
		}
		printf("\n");
	}
	system("Pause");
	return 0;
}
