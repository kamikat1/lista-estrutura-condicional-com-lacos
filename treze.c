// Construa um programa que dado quatro valores, A, B, C e D, o algoritmo imprima o maior e o menor valor.
//versao com laço
#include <stdio.h>
#include <stdlib.h>

int main()
{   int a, maior=0, menor=0, i;

    for(i=0; i<=4; i++){
        scanf("%i", &a);
        //pra isso acontecer só na 1a execução, senao toda vez q o programa entrar no laço elas vao receber o a
        if (i==0){
            maior=a;
            menor=a;
        }
        else if (a>maior){
            maior=a;
        }
        else if (a<menor){
            menor=a;
        }
    }
    printf("menor %i, maior %i", menor, maior);
    return 0;
}
