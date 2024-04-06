#include<stdio.h>
 int main() {
    char op;
    int lt;
    float vdesc,vsdesc;

    printf("Deseja abastecer com qual combustivel: A-Alcool (R$3,39) G-Gasolina (R$5,39)\n");
    scanf("%c", &op);
    printf("Quantos litros voce deseja colocar?\n");
    scanf("%i", &lt);
    
    switch(op){
        
        case 'a':
        //Se for maior que 20 litros
         if (lt >= 20){
            //Valor sem desconto de 5%
            vsdesc = lt*3.39;

            //Valor com desconto 5%
            vdesc = vsdesc-(vsdesc*0.05);
            printf("Valor a ser pago com desconto de 5 por cento: %f", vdesc);
         }
         // Se for menor que 20 litros, desconto de 3%
          else {

            //Valor sem desconto de 3%
            vsdesc = lt*3.39;

            //Valor com desconto de 3%
            vdesc = vsdesc-(vsdesc*0.03);

            printf("Valor a ser pago com desconto de 3 por cento: %f", vdesc);
         }    
        break;

        case 'g':
        // Se a litragem for maior ou igual a 20 desconto de 6%
            if (lt >= 20){
                
                //Valor sem desconto de 6%
                vsdesc = lt*5.39;

                //Valor com o desconto de 6%
                vdesc = vsdesc-(vsdesc*0.06);

                printf("Valor a ser pago com o desconto de 6 por cento: %f", vdesc);
            }

            //Litragem menor que 20 litros, desconto de 4%
            else {

                //Valor sem desconto de 4%
                vsdesc = lt*5.39;
                
                //Valor com o desconto de 4%
                vdesc = vsdesc-(vsdesc*0.04);

                printf("Valor a ser pago com o desconto de 4 por cento: %f", vdesc);
            }
        break;

        default:
        printf("OPCAO INVALIDA!");
        break;
    }
 }