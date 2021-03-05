#include <stdio.h>


int main(){
	int num1, num2, operacao = 1;
	float result;
	
	
	while(operacao != 0){

	printf ("Insira o primeiro numero:\n");
	scanf ("%d", &num1);
	printf ("Insira o segundo numero:\n");
	scanf ("%d", &num2);

	result = num1 + num2;
 	printf("O resultado da operacao eh: %.2f", result);
 	}
 	return 0;


}