#include <stdio.h> 

int main(){
    
    //criar variaveis
    int myNum = 15;     //inteiro
    float myFloatNum = 5.99; //flutuante
    char myLetter = 'D';        //caractere

    //printar variaveis
    printf ("%d\n", myNum);
    printf ("%.2f\n", myFloatNum);
    printf ("%c\n", myLetter);

    printf ("My number is %d and my letter is %c\n", myNum, myLetter);

    return 0;
}