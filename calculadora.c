#include <stdio.h>

int main (){

    float a, b;

    char comando;
    char resposta;

    do {
        printf("VOCÊ DESEJA INICIAR A CALCULADORA?\n s PARA SIM\n n PARA NAO\n");
        scanf(" %c", &resposta);
        printf("--------------------------------------------------------------\n");

        if (resposta == 's') {

            printf("INSIRA NUMERO -> COMANDO -> NUMERO\n + ADIÇÃO\n - SUBTRAÇÃO\n * MULTIPLICAÇÃO\n / DIVISÃO\n");
            scanf ("%f %c %f", &a, &comando, &b);

            switch (comando)
            {
            case '+':
                printf("=%.2f\n", a+b);
                break;
            
            case '-':
                printf("=%.2f\n", a-b);
                break;
            
            case '*':
                printf("=%.2f\n", a*b);
                break;
            
            case '/':
                if (b == 0) 
                    printf("IMPOSSIVEL DIVIDIR POR 0!\n");

                    else 
                    printf("=%.2f\n", a/b);
                
                
                break;

            default:
                break;
            

            }
        printf("--------------------------------------------------------------\n");

        }
    
    }

    while (resposta != 'n'); {
        printf("OK!\n");
        printf("--------------------------------------------------------------\n");

    }




            return 0;
        }