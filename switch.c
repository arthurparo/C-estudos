/*#include <stdio.h>

 EXEMPLO
int main (){

    int day;

printf ("What day in the week are u?\n");
    scanf("%d", &day);

switch (day) {
  case 1:
    printf("Monday\n");
    break;
  case 2:
    printf("Tuesday\n");
    break;
  case 3:
    printf("Wednesday\n");
    break;
  case 4:
    printf("Thursday\n");
    break;
  case 5:
    printf("Friday\n");
    break;
  case 6:
    printf("Saturday\n");
    break;
  case 7:
    printf("Sunday\n");
    break;
}

The SWITCH expression is evaluated once
The value of the expression is compared with the values of each CASE
If there is a match, the associated block of code is executed
The BREAK statement breaks out of the switch block and stops the execution
The DEFAULT statement is optional, and specifies some code to run if there is no case match

}
*/

#include <stdio.h>

int main() {

    int option;

    printf ("INSIRA O QUE VOCE QUER:\n    1-SACAR\n 2- DEPOSITAR\n 3- NADA\n");

    scanf("%d", &option);

    switch (option)
    {
    case 1:
        printf("VOCE SACOU\n");
        break;
    case 2:
        printf("VOCE DEPOSITOU\n");

    default:
        printf("TENHA UM BOM DIA ENTÃO\n");
        break;
    }




}