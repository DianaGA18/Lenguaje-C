#include <stdio.h>
#include <stdlib.h>

int main(){
	float n1 = 1;
	float n3 = 3;
	float n5 = 5;
	float n30 = 30;
	float n23 = 23;
	float ecAbajo = (n23/n30);
	float ecTotal = (n1/n3)+(n3/n5)+(n1/n30)/ecAbajo;
	
	printf ("ecuacion1 : %f\n", ecTotal);

	float e5 = 5;
	float e2 = 2;
	float e1 = 1;
	float e4 = 4;
	float ecu1= e2-(e1/e4);
	float ecu2= e1+(e2/ecu1);
	float ecu3= e1/ecu2;
	float ecu4= e5+(e2/ecu3);
	
	printf ("ecuacion2 : %f\n", ecu4);
	
	system ("Pause");
	return 0;
}
