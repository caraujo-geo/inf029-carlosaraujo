#include <stdio.h>
int soma (int num1, int num2);
int main () {

int a, b;
	printf("digite dois numeros inteiros para obter a soma:\n");
	scanf("%d%d", &a, &b);
	printf("O valor da soma de %d + %d eh %d",a,b,soma(a,b));

}

int soma (int num1, int num2)
{
	return num1 + num2;
}