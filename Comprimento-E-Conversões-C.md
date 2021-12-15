#include <stdio.h>
#include <math.h>


int main(){

int p,v,c;


int l,k,o,g,galao,litro,milha,km,jarda,m;

float lk= l*0.45;
float kl=k*2.20;
float og=o*28.35;
float go=g*0.035274;

float galaolitro= galao*3.78541;
float litrogalao=litro*0.264172; 

float milhakm= milha*1.60934;
float kmmilha=km*0.621371;
float jardam=jarda*0.9144;
float mjarda=m*1.09361;

char a;
printf("Escolha um tipo de conversao entre: \n Peso (digite p) \n Volume (digite v) \n e Comprimento (digite c)\n");
scanf("%c",&a);

if(a=='p'){
     printf("Escolha um tipo de conversao entre: \n Libra para Kilo (digite 1) \n  Kilo para Libra (digite 2) \n Onca para Grama (digite 3) \n Grama para Onca(digite 4) \n");
     scanf("%i",&p);}

//entrada para peso

 if (p==1){
         printf("Digite um valor em libras para ser convertido em kilo\n");
         scanf("%f",&l);
         printf("O valor em kilos: %f",lk);}
if(p==2){printf("Digite um valor em kilo para ser convertido em Libra\n");
         scanf("%f",&k);
         printf("O valor em Libras: %f",kl);}
if(p==3){printf("Digite um valor em onca para ser convertido em Grama\n");
         scanf("%f",&o);
         printf("O valor em Gramas: %f",og);}
if(p==4){printf("Digite um valor em Gramas para ser convertido em Oncas\n");
         scanf("%f",&g);
         printf("O valor em Oncas: %f",go);}

// menu de peso e e conversões

if(a=='v'){
     printf("Escolha um tipo de conversao entre: \n Galao para Litro (digite 1) \n Litro para Galao(digite 2) \n");
     scanf("%i",&v);}

// entrada para volume

if(v==1){printf("Digite um valor em Galao para ser convertido em Litro\n");
         scanf("%f",&galao);
         printf("O valor em litros: %f",galaolitro);}
if(v==2){printf("Digite um valor em Litros para ser convertido em Galao\n");
         scanf("%f",&litro);
         printf("O valor em Galao: %f",litrogalao);}

// menu de volume e conversões

if(a=='c'){
     printf("Escolha um tipo de conversao entre: \n Milha para Km (digite 1) \n Km para Milha (digite 2) \n Jarda para Metro (digite 3) \n Metros para Jarda (digite 4) \n");
     scanf("%i",&c);}

//entrada para cumprimento

if(c==1){printf("Digite um valor em Milhas para ser convertido em Km\n");
         scanf("%f",&milha);
         printf("O valor em KM: %f",milhakm);}
if(c==2){printf("Digite um valor em KM para ser convertido em Milhas\n");
         scanf("%f",&km);
         printf("O valor em Milha: %f",kmmilha);}
if(c==3){printf("Digite um valor em Jardas para ser convertido em Metros\n");
         scanf("%f",&jarda);
         printf("O valor em Metros: %f",jardam);}
if(c==4){printf("Digite um valor em Metros para ser convertido em Jardas\n");
         scanf("%f",&m);
         printf("O valor em Jardas: %f",mjarda);}

//menu de comprimento e conversões

}
