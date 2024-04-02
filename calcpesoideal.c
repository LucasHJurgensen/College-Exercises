#include <stdio.h>
int main () {
    int op;
    float h, pesoid;

    printf("Digite a sua altura: ");
    scanf("%f", &h);
    printf("Qual e o seu sexo? \n1-Masculino    2-Feminino \nInsira a resposta: ");
    scanf("%i", &op);
    switch (op){
        case 1:
            pesoid = (72.7*h)-58; 
            printf("Seu peso ideal e: %f", pesoid);
        break;
        case 2: 
            pesoid = (62.1*h)-44.7;
            printf("Seu peso ideal e: %f", pesoid);
        break;
        default:
            printf("Opcao invalida");
        break;
    }

}
