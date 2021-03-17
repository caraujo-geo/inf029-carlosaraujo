#include <stdio.h>

char ler3Letras (char num[]);

int main(){

	char let[3];
	
	printf("Digite 3 letras\n");
	ler3Letras (let);
	
	for(int i=0;i<3; i++){
		printf("%c",let[i]);
	}
	
	return 0;
	
}
	
	
char ler3Letras (char let[]){
		
	
	for(int i=0;i<3; i++){
		scanf("%s",&let[i]);
	}
	
	for(int i = 0; i<3; i++){
		return let[i];
	}

}