#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
 	char palabra[100];
	int i,j,v=1,b=1;
	int len;
	int acum=0;
	
	puts("Ingresa una palabra");
	scanf("%s",&palabra);
	printf("La palabra ingresada fue: %s\n",palabra);
	len = strlen(palabra);
	printf("El tamanio de %s es: %d\n",palabra,len);
	
	for(i=0;i<len;i++){
		for(j=0;j<=len;j++){
			if(palabra[i]==palabra[j]){
			acum++;
			}
		}
		for(v=0;v<=i;v++){
		 	if(palabra[i]==palabra[v-1]){
		 		b++;
			 }
		 }
		 if(b==1){
		 	printf("%c->%d\n",palabra[i],acum);
		 }
		 acum=0;
		 v=1;
		 b=1;
	}
	system("Pause");
	return 0;
}
