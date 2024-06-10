#include <stdio.h>
#include <stdlib.h>

int main(){
	int len;
	char uno[11];
	char dos[11];
	int i;
	
	printf("Escribe un numero\n");
	gets(uno);
	printf("Escribir otro numero\n");
	gets(dos);
	len = strlen(uno);
	
	printf("La longitud de la palabra 1 \'%s'\ es:%d\n",uno,len);
	printf("%s",uno);
	char a;
	strcat(uno,dos);
	
	for(i=1;i<=len;i++){
	printf("%s",dos);
	}
	printf("\n\n");
	system("Pause");
	return 0;
	
}
