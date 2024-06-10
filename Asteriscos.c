#include <stdio.h>
#include <stdlib.h>

int main(){
	int i ,x, y;
	int n;
	int j;
	char a;
	puts("Cantidad de pisos: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		a = "*";
		printf("%c", a);
		
		for(j=0;j<i;j++){
		printf("%c", a);	
		}
		printf("\n");
	}
	printf("\n");
	for(x=0;x<n;x++){
		a = "*";
		printf("%c", a);	
		for(y=x;y<(n-1);y++){
		printf("%c", a);	
		}
		printf("\n");
	}
	
	system("Pause");
	return 0;
}
