#include <stdio.h>

int fat (int x);

int main(){

	int num;

	printf("Digite um numero inteiro e positivo para obter seu fatorial\n");
	scanf("%d", &num);

	printf("%d fatorial eh %d\n", num, fat(num));

	return 0;
}


int fat (int x){
	
	if (x == 0){
	 	x =1;
	 	return x;
	}
	else if (x ==1){
		x=1;
		return x;
	}
	else{
		int aux = 1;
		while (x > 0){
			aux = aux *x;
			x--;
		}
		return aux;
	}
}


