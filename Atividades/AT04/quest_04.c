#include <stdio.h>

int ler3num (int num[]);

int main(){

int num[3];

	printf("Digite 3 numeros\n");
	ler3num (num);
	
	for(int i=0;i<3; i++){
		printf("%d\n",num[i]);
	}
	
	return 0;
	
	}
	
	
int ler3num (int num[]){
		
	
	for(int i=0;i<3; i++){
		scanf("%d",&num[i]);
	}
	
	for(int i = 0; i<3; i++){
		return num[i];
	}
	
}