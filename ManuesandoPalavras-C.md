#include <stdio.h>
#include <string.h>
int main(void){
    char palavra1[15];
    char palavra2[15];
    char palavra3[15];

    printf("Insira uma palavra:");
    scanf("%s",&palavra1);

    printf("Insira uma palavra:");
    scanf("%s",&palavra2);

    printf("Insira uma palavra:");
    scanf("%s",&palavra3);

    char a;

    printf("Digite 'a' para exibir as Strings em ordem alfabetica. \n Digite 'b' para exibir as Strings em ordem crescente da quantidade de caracteres. \n Digite 'c' para os caracteres serem exibibidos na ordem reversa \n");
    scanf("%s",&a);


    if(a=='a' || a=="A"){ 
        int g1,g2,g3=0;
        g1=strcmp(palavra1, palavra2); //g1>g2 1>2>3
        g2=strcmp(palavra2, palavra3);
        g3=strcmp(palavra1, palavra3);

        if(g1>g2){printf("%s\n",palavra1);printf("%s\n",palavra2); printf("%s\n",palavra3);}
        if(g3>g1){printf("%s\n",palavra3);printf("%s\n",palavra2); printf("%s\n",palavra1);}
        if(g2<g1){printf("%s\n",palavra2);printf("%s\n",palavra3); printf("%s\n",palavra1);}

         }


    if(a=='b' || a=="B"){
        int t1=0;
        int t2=0;
        int t3=0;
        t1=strlen(palavra1);
        t2=strlen(palavra2);
        t3=strlen(palavra3);

        if(t1>t2 && t2>t3){
            printf("\n %s, %s, %s",palavra3,palavra2, palavra1);
        }

        if(t2>t1 && t1>t3){
            printf("\n %s, %s, %s",palavra3,palavra1, palavra2);
        }

        if(t1>t3 && t3>t2){
            printf("\n %s, %s, %s",palavra2,palavra3, palavra1);
        }

        if(t2>t3 && t3>t1){
            printf("\n %s, %s, %s",palavra1,palavra3, palavra2);
        }

        if(t3>t1 && t1>t2){
            printf("\n %s, %s, %s",palavra2,palavra1, palavra3);
        }

         if(t3>t1 && t2>t1){
            printf("\n %s, %s, %s",palavra1,palavra2, palavra3);
        }}

    if(a=='c' || a=="C"){
        int i;
        int h;
        int f;
        for (i=10; i>=0; ++i){
            printf("%s",palavra1[i]);
        }
        for (f=10; f>=0; ++f){
            printf("%s",palavra2[f]);
        }
        for (h=10; h>=0; ++h){
            printf("%s",palavra3[h]);
        }}

}

