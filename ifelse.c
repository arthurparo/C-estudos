#include <stdio.h>

int main(){

    float horas;

    printf("Que horas são? \n");
    scanf ("%f", &horas);

    if (horas > 18)
        printf ("Como agora são %.2f horas, então boa noite.\n", horas);

        else
        printf("Como agora são %.2f horas, então bom dia. \n", horas);

        /* No caso do else if
        
        if (condition1) {
         // block of code to be executed if condition1 is true
}    else if (condition2) {
  // block of code to be executed if the condition1 is false and condition2 is true
} else {
  // block of code to be executed if the condition1 is false and condition2 is false
}
        
    
        */

/*
#include <stdio.h>

int main() {

    int num;

    scanf("%d", &num);

    if (num > 0) {

        printf("POSITIVO\n");
    }
        else if (num < 0) {

            printf ("NEGATIVO\n");
               }
                else printf ("ZERADO\n");
                
                return 0;
        }
    */
    
}