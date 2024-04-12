#include <stdio.h>
int main() {

    //Determinação de variaveis - Variables determination
    float tempgc, tempfc;

    //Inserção dos valores - Insert values
    printf("Insira a temperatura em graus Celsius. \n");
    scanf("%f", &tempgc);

    // Conversão para Fahrenheit Celsius - Conversion for Fahrenheit Celsius
    tempfc = tempgc*1.8+32;

    //Exibição do resultado para o usuario - Result exibition for user
    printf("Temperatura em graus Celsius: %f | Temperatura em Fahrenheit Celsius: %f", tempgc, tempfc);
}