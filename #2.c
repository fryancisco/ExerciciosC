#include <stdio.h> 
int main(){ 
  float vetor[4], maior, menor; 
  int i = 1; 
  for(; i<=4; i++){ 
    printf("Digite o %d peso: ", i); 
    scanf("%f", &vetor[i]); 
    if(vetor[i]< menor){
      menor = vetor[i]; 
    }
    if (vetor[i]> maior){
      maior = vetor[i]; 
    } 
  } 
  printf("\nO maior peso e %.1f", maior);
  printf("\nO menor peso e %.1f", menor);
}
