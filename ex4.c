#include<stdio.h>

int main(){
int numero;
int soma=0;

printf ("digite intereiro(0 para encerrar )");
scanf("%d" &numero);
 
 while(numero != 0){
    soma= numero;
    printf ("digite outro numero intereiro para encerrar:");
    scanf("%d" , &numero);

 } 
      return 0;

      
}