#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int vectora[10]= {3,5,6,8,4,7,8,5,3,1};
	int vectorb[10]= {3,4,6,8,9,1,2,3,0,9};
	
	double op1, op2, op3, op4;
	
	op1= vectora[3] % (vectorb[2]/2);
	op2= vectorb[vectora[1]] - vectora[9];
	op3= vectora[0] + vectora[1+2];
	op4= vectora[5] + vectorb[5];
	
	printf("El resultado de la operacion 1 es: %d \n", op1);
	printf("El resultado de la operacion 2 es: %d \n", op2);
	printf("El resultado de la operacion 3 es: %d \n", op3);
	printf("El resultado de la operacion 4 es: %d \n", op4);
	
	system("Pause");
	return 0;
}
