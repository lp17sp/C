#include <stdio.h>
#include <math.h>

int main(){
    float a;
    printf("Digite o valor do seus recebimentos mensais:\n");
    scanf("%f",&a);

    float  b;
    printf("Digite um valor inteiro que quer em emprestimo do banco:\n");
    scanf("%f",&b);

    int c;
    printf("Digite a quantidade de parcelas em que deseja pagar esse emprestimo mensalmente:\n");
    scanf("%i",&c);

    float d = b/c;
    int aa= 0;

// acima variaveis


    if (d>(0.15*a) || b>(10*a) || d<(0,01*b)){aa = aa + 1; printf("Sinto muito! Emprestimo negado!\n");} else{printf("Congratulations! Emprestimo aceito!\n");}

// acima o código que diz se é negado ou aceito o emprestimo 

    if(aa==0){
    if(d<(0,05)*a || b<(5*a)){printf("Seu perfil: Perfil VIP\n");}else{
    if(d>0,05*a && d<(0,10*a) || b>(5*a) || b>(6*a) || b>(7*a) || b>(8*a)){printf("Seu perfil: Perfil Normal\n");}else{printf("Seu perfil: Perfil de Risco\n");}}}

//se for aprovado, qual é o o perfil

    if(a==0 || b==0 || c==0 || d==0 || a<0 || b<0 || c<0 || d<0 ){

        printf("Digite o valor do seus recebimentos mensais:\n");
        scanf("%f",&a);
        printf("Digite um valor inteiro que quer em emprestimo do banco:\n");
        scanf("%f",&b);
        printf("Digite a quantidade de parcelas em que deseja pagar esse emprestimo mensalmente:\n");
        scanf("%f",&c);

        if (c>(0.15*a) || b>(10*a) || d<(0,01*b)){aa==aa+1; printf("Sinto muito! Emprestimo negado!");} else{printf("Congratulations! Emprestimo aceito!");}

    
    if(aa==0){
    if(d<(0,05)*a || b<(5*a)){printf("Seu perfil: Perfil VIP\n");}else{
    if(d>(0,05*a) && d<(0,10*a) || b>(5*a) || b>(6*a) || b>(7*a) || b>(8*a)){printf("Seu perfil: Perfil Normal\n");}else{printf("Seu perfil: Perfil de Risco\n");}}}}

 // se os resultados forem iguais ou menor que zero, necessario um funcao que volte como acima



    return 0;}
