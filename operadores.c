/*

Operator	Example	    Same As
=	        x = 5	    x = 5	
+=	        x += 3	    x = x + 3	
-=	        x -= 3	    x = x - 3	
*=	        x *= 3	    x = x * 3	
/=	        x /= 3	    x = x / 3	
%=	        x %= 3	    x = x % 3	
&=	        x &= 3	    x = x & 3	
|=	        x |= 3	    x = x | 3	
^=	        x ^= 3	    x = x ^ 3	
>>=	        x >>= 3	    x = x >> 3	
<<=	        x <<= 3	    x = x << 3

Para importar a biblioteca para valores booleanos
#include <stdbool.h>

declarado como "bool"

*/

//teste para operadores e boleanos, (retornará 1 se verdadeiro e 0 se falso)

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main (){

    int a, b;

    scanf ("%d", &a);
    scanf ("%d", &b);

    printf ("%d\n", a > b);

}
