#include <stdio.h>
#include <stdlib.h>

struct d_string { //estrutura que recebe as 5 string
char string[100];
    }d[5]; //d[i] vetor que permite 5 string diferentes


int main(){
    char letra;
    int i;
    int calcC=0;


    printf("\n _______________________________________________________________ \n");
	printf("Insira 5 palavras\n");
	for (i = 0; i < 5; i++) { //ciclo que permite inserir 5 palavras
			printf ("Insira a palavra %i:  \n", i + 1);	
			fgets(d[i].string, 100, stdin);
			system("cls");}
            
    printf("Digite uma letra:\n"); //insere uma letra para ver se ele está nas palavras
    scanf("%c",&letra);

    for(i=0; i < 40; i++ ){
        for(int g=0; g<40; g++){
        if(letra==d[i].string[g]){
            calcC= calcC+1;}
        } //contador 
    }

     printf("o numero de vezes que ' %c ' aparece: %i\n",letra,calcC );

    for(i=0; i < 5; i++ ){
        switch(d[i].string[0]){
            case 'a':
            printf("%s/n",d[i].string);
            case 'e':
            printf("%s",d[i].string);
            case 'i':
            printf("%s",d[i].string);
            case 'o':
            printf("%s",d[i].string);
            case 'u':
            printf("%s",d[i].string);
            break;
        }
    }} //for e switch que permite mostrar qual palavra é vogal
