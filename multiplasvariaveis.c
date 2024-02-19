#include <stdio.h> 

int main(){

    //student data
    int studentID = 15, studentAge = 23;
    float studentFee = 75.25;
    char studentGrade = 'B';

    printf ("dados de um estudante\n");

    printf("Student id: %d\n", studentID);
    printf("Student age: %d\n", studentAge);
    printf("Student fee: %.2f\n", studentFee);
    printf("Student grade: %c\n", studentGrade);



    //area de um retangulo
    int largura = 4;
    int comprimento = 6;
    int area;

    printf("área de um retangulo\n");
    area = largura * comprimento;

    printf ("A área do retângulo eh %d\n", area);

    //conversao  de tipos de variaveis

    /*Exemplo
    Set the maximum possible score in the game to 500
    int maxScore = 500;

    The actual score of the user
    int userScore = 420;

    Calculate the percantage of the user's score in relation to the maximum available score.
    Convert userScore to float to make sure that the division is accurate
    float percentage = (float) userScore / maxScore * 100.0;

    Print the percentage
    printf("User's percentage is %.2f", percentage); */

    int num1 = 5, num2 = 2;
    float sum = (float) num1 / num2;
    printf("%.2f\n (declarando float na conta)", sum);


    //USAR const int/float/etc... para valores constantes.
    
return 0;
}