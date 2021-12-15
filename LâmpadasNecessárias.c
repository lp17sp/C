#include <stdio.h>
#include <math.h>


int main(){

    char b;
    printf("Digite o tipo de comodo:\n");
    scanf("%c",&b);

    int a;
    printf("Potencia da lampada em watts:\n");
    scanf("%i",&a);


    float h;
    printf("Digite a altura:\n");
    scanf("%f",&h);

    float l;
    printf("Digite a largura da casa:\n");
    scanf("%f",&l);

    float c;
    printf("Digite o comprimento da casa:\n");
    scanf("%f",&c);


    float v= c*l*h;

    float sa = ((v*8.5)/a);
    float  sb = ((v*11.3)/a);
    float sc = ((v*15.0)/a);
    float sd = ((v*18.8)/a);
    float se = ((v*22.0)/a);

    // Acima variaveis e comando de entrada
    
    if(b=='a'){printf("A quantidade necessaria de lampada e %f:", ceil(sa));}
    else{if(b=='b'){printf("A quantidade necessaria de lampada e %f:", ceil(sb));}
    else{if(b=='c'){printf("A quantidade necessaria de lampada e %f:", ceil(sc));}
    else{if(b=='d'){printf("A quantidade necessaria de lampada e %f:", ceil(sd));}
    else{if(b=='e'){printf("A quantidade necessaria de lampada e %f:", ceil(se));}else{printf("Erro no inicio! so pode letras entre 'a' e 'e' ");}}}}}

// código bruto sobre quantas lampadas são precisas
}
