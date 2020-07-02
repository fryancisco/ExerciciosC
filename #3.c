#include <stdio.h> 

int main(){ 
  int par = 0, imp = 0, val, i;
  for(i=0; i<=10; i++){
    printf("Digite um numero: ");
    scanf("%d", &val);
    if(val % 2 == 0){
      par++;
    }else{
      imp--;
    }
  }
  printf("\n%d pares", par);
  printf("\n%d impares", imp);
}
