#include <stdio.h>
#include <math.h>

int main()
{
    int dia;
    printf("Diga o dia do seu nascimento:");
    scanf("%i",&dia);

    int mes;
    printf("Diga o mes do seu nascimento:");
    scanf("%i",&mes);

    int ano;
    printf("Diga o ano do seu nascimento:");
    scanf("%i",&ano);

    int diaatual;
    printf("Diga o dia em que estamos:");
    scanf("%i",&diaatual);

    int mesatual;
    printf("Diga o mes em que estamos:");
    scanf("%i",&mesatual);

    int anoatual;
    printf("Diga o ano em que estamos::");
    scanf("%i",&anoatual);

    printf("Seu aniversario: %i/%i/%i\n",dia,mes,ano);

    int aa = anoatual - ano; 


    if(aa>18){
        printf("Voce e de maior\n");
        printf("Voce tem %i anos\n", aa);}
    else{
        if (aa<18){
            printf("Voce e de menor\n");
            printf("Voce tem %i anos\n",aa-1 );}
        else{
            if (aa=18){ 
                if (mes<mesatual){
                    printf("Voce e de maior\n");printf("Voce tem %i anos\n", aa);}
                else{
                    if (mes> mesatual ){
                        printf("Vc e de menor\n");printf("Voce tem %i anos\n", aa-1);}
                    else{
                        if (mes<=mesatual){
                            if (dia<=diaatual){
                                printf("Voce e de maior\n");printf("Voce tem %i anos\n", aa);}
                            else{
                                printf("Voce e de menor\n");printf("Voce tem %i anos\n", aa-1);}
                                
                        }
                    }
                }    
                }
            }
        }}
    

