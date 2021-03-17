#include <stdio.h>
#define TAM_VET 255


void ler3Palavras (char palavras [][TAM_VET]);

int main(){

  int iCont;

  char palavras [TAM_VET][TAM_VET];

  printf("Digite três palavras:\n");

  ler3Palavras(palavras);

  for (int i =0; i<3;i++){
    printf("%s ", palavras[i]);
  }
return 0;

}

void ler3Palavras (char palavras [][TAM_VET]){
   for (int i =0; i<3;i++){
       scanf ("%s", palavras[i]);
   }
   
}