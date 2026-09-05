#include<stdio.h>
 int main(){

    int numeroSecreto= 26;
    int palpite;
    int tentativas = 0; 

    printf(" jogo de adivinhacao\n");
    printf(" tente adivinhar o numero secreto entre 1 e 100!\n");
    printf("digite seu palpite:");

    while(palpite != numeroSecreto){
        if(palpite < numeroSecreto){
            printf("o numero secreto e maior do que %d\n" , palpite);
        }else{
            printf("o numero secreto e menor do que %d\n" , palpite);
    }
} 
    
      printf("tente novamente:");
      scanf("%d", &palpite);
      print("voce acerto o numero secreto %d , numeroSecreto");
      printf("total de tentativa");


      return 0;
      
}