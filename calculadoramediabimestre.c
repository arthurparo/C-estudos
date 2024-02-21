/*
Desenvolver um programa que receba a nota dos 4 bimestres de um aluno e informar se ele está de recuperação ou nao
Caso esteja o programa devera informar qual a nota necessaria para o aluno passar

*/

#include <stdio.h>

int main (){

    int mTotal, aux, mInst;
    int op;

    //do {
        printf("\n Insira a media da instituiçao(notas 0 a 100): ");
        scanf("%d", &mInst);

        printf("\n Insira a nota do primeiro bimestre: ");
        scanf("%d", &aux);
        mTotal+=aux;

        printf("\n Insira a nota do segundo bimestre: ");
        scanf("%d", &aux);
        mTotal+=aux;

        printf("\n Insira a nota do terceiro bimestre: ");
        scanf("%d", &aux);
        mTotal+=aux;

        printf("\n Insira a nota do quarto bimestre: ");
        scanf("%d", &aux);
        mTotal+=aux;
        
        printf("Sua média é %d", mTotal/4);

    //} while ()
    {
    
    }
    

    
}