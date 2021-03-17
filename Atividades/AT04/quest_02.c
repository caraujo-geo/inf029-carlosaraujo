#include <stdio.h>
int subtrai (int num1, int num2, int num3);
int main () {

int a, b, c;
	printf("digite tres numeros inteiros para obter a subtração entre eles:\n");
	scanf("%d%d%d", &a, &b, &c);
	printf("O valor da subtração de %d - %d - %d eh %d",a,b,c,subtrai(a,b,c));

}

int subtrai (int num1, int num2, int num3)
{
	return num1 - num2 - num3;
}