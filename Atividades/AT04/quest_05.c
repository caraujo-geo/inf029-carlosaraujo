#include <stdio.h>

int ler4Numeros(int num[]);

struct numeros {

  int listNum[4];

};

int main()
{
    struct numeros num;

    printf("Digite quatro numeros: ");

    ler4Numeros(num.listNum);
 
    
    for(int i = 0; i < 4; i++){
    
        printf("Numero %d: %d\n",i+1, num.listNum[i]);

    }
    

    return 0;

}



int ler4Numeros(int num[]){

    for(int i = 0; i < 4; i++){

        scanf("%d", &num[i]);

    }

    for(int i = 0; i < 4; i++){

	return  num[i];    
    
    }
    
}