#include <stdio.h>

int main(){

    //assim é criada uma string
    char nome[30];
    int idade;
    
    printf ("Qual seu nome?\n");

    /*

    Use the scanf() function to get a single word as input, and use fgets() for multiple words.

    we often use the fgets() function to read a line of text. Note that you must include the following arguments: the name of the string variable, sizeof(string_name), and stdin:
    */

    fgets (nome, sizeof(nome), stdin);

    printf ("Qual sua idade?\n");
    scanf ("%d", &idade);

    printf ("Meu jovem, você tem %d anos e seu nome é %s \n", idade, nome);


}