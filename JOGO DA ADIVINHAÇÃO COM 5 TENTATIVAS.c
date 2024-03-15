/******************************************************************************

ARTUR

*******************************************************************************/
#include <stdio.h>

int main()
{
    int segredo =11 , palpite , tentativa = 1;
    
    while ((tentativa <= 5) && (palpite != segredo)) {
        printf(" \n Tente adivinhar o numero (tentativa %d):", tentativa);
        scanf("%d" , &palpite);
        
        if (palpite > segredo)
        printf(" Digite um numero menor!");
        if (palpite < segredo)
        printf("Digite um numero maior!");
        
        tentativa += 1;
    }
        if (palpite == segredo) {
            printf("ACERTOU!");
        }
        else {
            printf("ERROU");
        }
    

    return 0;
}



