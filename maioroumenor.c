//programa para saber qual maior ou menor numero de uma lista inserida com n numeros naturais. quando o usuario digitar -1 o programa deve encerrar

#include <stdio.h>

int main(){

    int maior=0, menor=0, aux=0, i=0; //variavel i é um contador

    do
    {
        printf("\n Digite um número: ");
        scanf("%i", &aux);

        if (i==0){
            maior=aux;
            menor=aux;
            i++;

        } else if(aux==-1){
            break;
        } else if (aux>maior){
            maior = aux;
        } else if (aux<menor) {
            menor = aux;
        }
        

    } while (1); //1 na linguagem C significa verdadeiro
    

}