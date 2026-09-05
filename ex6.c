#include<stdio.h>
int main(){

   float nota;
   float somaNotas= 0.0;
   float notatotaldoaluno=0;


   printf("digite a nota do aluno de 0.0 a 10.0 o digete um numero negativo para encerrar:");
   scanf("%d" , &nota);

   while(nota >= 0.0){
    if(nota <= 10.0){ somaNotas = nota; notatotaldoaluno++;
   }else{
    printf("Nota invalida! digite um valor entre 0.0 e 10.0.\n");

}
  printf("digite novamente a nota\n");

  printf("imprima a nota final do aluno\n");

    return 0;
}