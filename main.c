#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){

    //declarando as variaveis

   int resultado, numero1, numero2;;
   char op = '0';

   do{
        numero1 = numero2 = resultado = 0;

        // imprimindo as opções da nossa calculadora
        printf("Bem vindo a Calculadora em C. - INGRIDCS\n");
        printf("Oque voce deseja fazer:\n");
        printf("(1) somar\n");
        printf("(2) subtrair\n");
        printf("(3) multiplicar\n");
        printf("(4) dividir\n");
        printf("(0) sair do programa\n");

        printf("\nInforme a operacao\n");
        printf(">>");
        op = getche();
        printf("\n");

        if(op!= '0') {
        printf("Digite o primeiro numero");
        scanf("%d", &numero1);

        printf("Digite o segundo numero\n");
        scanf("%d", &numero2);


         if(op == '1'){
            resultado = numero1 + numero2;
            } else {
         if(op== '2'){
            resultado = numero1- numero2;
            } else {
         if (op== '3'){
            resultado = numero1 * numero2;
            }else {
         if(op== '4'){
            resultado = numero1 / numero2;
             }
           }
         }
       }
      }
            //mostra o resultado na tela
           printf("\nO resultado eh: %d\n", resultado);

           printf("\n Pressione uma tecla para realizar uma nova operacao:");
           getch();

           system("cls"); //limpar a tela

             }while(op != '0');


      return 0;
 }
