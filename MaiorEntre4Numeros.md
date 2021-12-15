#include <stdio.h>
#include <math.h>

int main(){
    int a; 
    printf("Digite um valor:\n");
    scanf("%i",&a);

    int b;
    printf("Digite um valor:\n");
    scanf("%i",&b);

    int c;
    printf("Digite um valor:\n");
    scanf("%i",&c);

    int d;
    printf("Digite um valor:\n");
    scanf("%i",&d);

    int media = (d+a+c+b)/4;
    printf("A media entre eles e: %i\n", media);

    if (a>b && a>c && a>d){printf("%i o maior numero entre os 4\n",a);}
    if (b>a && b>c && b>d){printf("%i o maior numero entre os 4\n",b);}
    if (c>a && c>b && c>d){printf("%i o maior numero entre os 4\n",c);}
    if (d>a && d>b && d>c){printf("%i o maior numero entre os 4\n",d);}

    if (a<b && a<c && a<d){printf("%i o maior numero entre os 4\n",a);}
    if (b<a && b<c && b<d){printf("%i o maior numero entre os 4\n",b);}
    if (c<a && c<b && c<d){printf("%i o maior numero entre os 4\n",c);}
    if (d<a && d<b && d<c){printf("%i o maior numero entre os 4\n",d);}

    return 0;
}

//a,b,c,d são as variaveis
//os if são as condicionais para chegar no resultado
//media é uma variavel com o total por 4 das outras variaveis


// Processo de Compilação

// É a forma como o computador muda uma o código para linguagem da máquina e assim poder ler o código, se o código tiver com erro não poderá ser transformada e apresentará erro. Erro de Compilação.e.
