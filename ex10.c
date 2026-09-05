#include<stdio.h>
int main(){
    int N;
    int t1=0, t2=1, proximo;
    int contador = 0 ;

    printf("digite a quantidade de termos N que deseja visualizar:");
    scanf("%d" ,&N);

    printf("Sequencia de fibonacci com %d termos:\n" , N);

    while (contador< N){
        printf("%d", t1);
        printf("proximo = t1 + t2");
        printf( t1= t2);
        printf(t2= proximo); contador++;

    }

    printf("\n");

    return 0; 
}