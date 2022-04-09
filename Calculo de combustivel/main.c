#include <stdio.h>
#include <stdlib.h>

int calculo(float Vgas, float veta);
int main()
{
    printf("###### economy car ###### \n\n" );

    float precogasolina, precoetanol;

    printf("Qual eh o preco da gasolina? \n");
    scanf("%f", &precogasolina);

    printf("Qual eh o preco do etanol? \n");
    scanf("%f", &precoetanol);

    int resultado = calculo(precogasolina, precoetanol);

    if(resultado == 0){
        printf("Compensa abastecer com gasolina \n");
    }

    else if(resultado == 1){
            printf("Compensa abastecer com etanol \n");
    }
    else{
        printf("Sao equivalentes. tanto faz. \n");
    }

    system("pause");
    return 0;

    //FUNCAO
}
   int calculo(float Vgas, float veta){
     if((Vgas * 0.70) < veta){

     //compensa abastecer com gasolina
     return 0;}

   else if((Vgas * 0.70) > veta){

     //compensa abastecer com etanol
   return 1;}

   else {
        //valores equivalentes
    return 2;
   }
   }
