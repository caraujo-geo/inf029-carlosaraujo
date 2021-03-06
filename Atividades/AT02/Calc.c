#include <stdio.h>


int main(){
	int num1, num2, operacao = 1;
	float result;
	
	
	while(operacao != 0){
    
    	printf("Informe o tipo de operação que deseja realizar:\n0 - Sair  \t1 - Somar \t2 - Subtrair \t3 - Multiplicar \t4 - Dividir\n");
    	scanf("%d", &operacao);
		printf ("Insira o primeiro numero:\n");
		scanf ("%d", &num1);
		printf ("Insira o segundo numero:\n");
		scanf ("%d", &num2);
			switch (operacao){
				case 1:
				result = num1 + num2;
 				printf("O resultado da operacao eh: %.2f\n", result);
 				break;
 				case 2:
 				result = num1 - num2;
 				printf("O resultado da operacao eh: %.2f\n", result);
 				break;
 				case 3:
 				result = num1 * num2;
 				printf("O resultado da operacao eh: %.2f\n", result);
 				break;
 				case 4:
 				result = num1 / num2;
 				printf("O resultado da operacao eh: %.2f\n", result);
 				break;
 				default:
 				printf("Opção invalida\n");		
		}
	if (operacao==0)break;
 	}
 	return 0;


}