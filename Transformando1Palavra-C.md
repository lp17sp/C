#include <stdio.h>
#include <stdlib.h>


int main(void){
    char palavra1[10];
    char palavra2[10];
    int i=0;
    int sm=0; // soma letras modificadas

    printf("Insira uma palavra:");
    scanf("%s",&palavra1);

    while(palavra1[i] != '\0'){
        if(palavra1[i]>='a' && palavra1[i]<='z'){
            sm=sm + 1;
            palavra2[i]= toupper(palavra1[i]);
        ++i;
        }
        if(palavra1[i]>='A' && palavra1[i]<='Z'){
            sm=sm + 1;
            palavra2[i]= tolower(palavra1[i]);
        ++i;
        }

        
    }

    printf("%s\n",palavra2);
    printf("O numero de letras modificadas foi: %i\n", sm);
    
    
    }

    //As etapas: 1) definir a palavra 2) Transformar e contar se necessario em Maiuscula ou Minuscula
