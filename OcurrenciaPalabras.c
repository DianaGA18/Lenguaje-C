#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
 	int contu;
 	int contd;
 	int x;
 	int w=0;
 	int v=1;
 	int b=1;
 	char palabra[100];
 	puts("Ingresa una palabra: ");
 	gets(palabra);
 	x=strlen(palabra);
 	
 	for(contu=0;contu<x;contu++){
 		for(contd=0;contd<=x;contd++){
 			if(palabra[contu]==palabra[contd]){
 				w++;
			 }
		 }
		 while(v<=contu){
		 	if(palabra[contu]==palabra[v-1]){
		 		b++;
			 }
			 v++;
		 }
		 if(b==1){
		 	printf("%c->%d\n",palabra[contu],w);
		 }
		 w=0;
		 v=1;
		 b=1;
	 }
	system("Pause");
	return 0;
}
