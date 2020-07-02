#include <stdio.h>

int main(){
  
 int vetor[4], i = 1, maior, menor, a;
 for(; i<=5; i++){
   printf("Digite o %d numero inteiro: ", i);
   scanf("%d", &vetor[i]);
     if(vetor[i]< menor){
       menor = vetor[i];
     }
     if (vetor[i]> maior){
       maior = vetor[i];
     }    
   }
 printf("\nO maior e %d", maior);
 printf("\nO menor e %d", menor);
}
