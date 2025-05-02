#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    // validacao se realmente e um triangulo 
    //a + b > c
    //a + c > b
    //b + c > a
    int a, b, c;

    //a = 1;
    //b = 5;
    //c = 5;

    printf("\n+--------------------------------+");
    printf("\n|VERIFICANDO UMA FORMA GEOMETRICA|");

    //pedindo pro usuario escolher o tamanho dos lados

    // lado a 
    printf("\n+--------------------------------+");
    printf("\n|    Digite o primeiro lado : ");
    scanf("%d", &a);
    printf("+--------------------------------+");

    // lado b
    printf("\n|    Digite o segundo lado : ");
    scanf("%d", &b);
    printf("+--------------------------------+");

    // lado c
    printf("\n|    Digite o terceiro lado : ");
    scanf("%d", &c);

    // verificando condicao pra que a forma seja um traingulo
    if ((a + b > c) && (a + c > b) && (b + c > a)) {

        // se for triangulo mesmo coemecar a verificar qual o tipo de triangulo
        if ( (a == b) && (b == c) ) {
            printf("+--------------------------------+");
            printf("\n| Isto e um triangulo equilatero |");
            printf("\n+--------------------------------+");
        } else if ((a == b) || (a == c) || (b == c)) {
            printf("+--------------------------------+");
            printf("\n| Isto e um triangulo isosceles |");
            printf("\n+--------------------------------+");
        } else {
            printf("+--------------------------------+");
            printf("\n| Isto e um triangulo escaleno |");
            printf("\n+--------------------------------+");
        }
    } else {
        printf("\n+--------------------------------+");
        printf("\n|     Isto nao e um triangulo !  |");
        printf("\n+--------------------------------+");
    }

    // >---- Vinicius Henrique Mafra de Matos , matricula : 2025 0283 1528 -----<
    
    return 0;
}