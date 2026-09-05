#include<stdio.h>
int main(){

    int senhaCorreta =2233;
    int senha;
    printf("digite a senha:");
    scanf("%d", &senha);
    
    while ( senha != senhaCorreta){
        printf("senha incorreta! tenta novamente:");
        scanf("%d",&senha );

        printf("acesso permitido!\n");

        return 0;
    }


}