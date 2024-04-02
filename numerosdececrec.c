#include <stdio.h>

int main () {
    // declaração de variaveis: n = opcao do ususario; a = primeiro numero; b = segundo numero; c = terceiro numero//
    
    int n;
    float a,b,c;

    //prog para a insercao dos valores//

    printf("Insira o primeiro numero: \n");
    scanf("%f", &a);
    printf("Insira o segundo numero: \n");
    scanf("%f", &b);
    printf("Insira o terceiro numero: \n");
    scanf("%f", &c);
    printf("Escolha a forma de visualizacao: \n1-Ordem Crescente   2-Ordem Decrescente  3-Com o maior no meio \n");
    scanf("%i", &n);

    //switch de opcoes:// 
    switch(n) {

        //case 1 - ordem crescente
        case 1:

            // Onde o valor A é o maior
            if (a > b && a > c && b > c){
                printf("%f - %f - %f", c,b,a);
            } else if (a > b && a > c && c > b){
                printf("%f - %f - %f", b,c,a);
            }
            
            // Onde o valor B é o maior
             else if (b > a && b > c && a > c){
                printf("%f - %f - %f", c, a, b);
            } else if (b > a && b > c && c > a){
                printf("%f - %f - %f", a, c, b);
            } 
            
            // Onde o valor C é o maior
             else if (c > a && c > b && b > a){
                printf("%f - %f - %f", a, b, c);
            } else if (c > a && c > b && a > b){
                printf("%f - %f - %f", b, a, c);
            }

        break;

        //case 2 - Ordem Decrescente
        case 2:

            //Onde A é o menor valor 
            if (a < b && a < c && b < c){
                printf("%f - %f - %f", c, b, a);
            } else if (a < b && a < c && c < b){
                printf("%f - %f - %f", b, c, a);
            } 

            //Onde B é o menor valor 
            else if (b < a && b < c && a < c){
                printf("%f - %f - %f", c, a, b);
            } else if (b < a && b < c && c < a){
                printf("%f - %f - %f", a, c, b);
            }

            //Onde C é o menor valor 
            else if (c < a && c < b && a < b){
                printf("%f - %f - %f", b, a, c);
            } else if (c < a && c < b && b < a){
                printf("%f - %f - %f", a, b, c);
            }

        break;

        //case 3 - O maior valor no meio
        case 3:

            // Onde o valor A é o maior
            if (a > b && a > c && b > c){
                printf("%f - %f - %f", c, a, b);
            } else if (a > b && a > c && c > b){
                printf("%f - %f - %f", b, a, c);
            }
            
            // Onde o valor B é o maior
             else if (b > a && b > c && a > c){
                printf("%f - %f - %f", c, b, a);
            } else if (b > a && b > c && c > a){
                printf("%f - %f - %f", a, b, c);
            } 
            
            // Onde o valor C é o maior
             else if (c > a && c > b && b > a){
                printf("%f - %f - %f", a, c, b);
            } else if (c > a && c > b && a > b){
                printf("%f - %f - %f", b, c, a);
            }
        break;

        default:
            printf("Opcao Invalida!");
        break;
    }
}   