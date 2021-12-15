#include <stdio.h>
#include <stdlib.h>

struct d_livros { //estrutura que recebe os dados dos produtos  
	
char nome_livro[30];
int ano_livro;
char autor_livro[15];}d[5];

int main(){
    //variaveis abaixo
    int res;
    int i;
    int cod;
    char nome;
    char autor;

do {
          //MENU DO PROGRAMA
    printf("_______________________________________________________________ \n");
    printf("                          Painel de Busca \n");
	printf("_______________________________________________________________ \n");
	printf ("Insira 1 -> Cadastrar Livros\n");
	printf ("Insira 2 -> Buscar por ano \n");
	printf ("Insira 3 -> Buscar por autor \n");
	printf ("Insira 4 -> Buscar por nome \n");
	printf ("Insira 5 -> Saida\n");
	printf("_______________________________________________________________ \n");


    printf ("Digite um numero que corresponde ao seu desejo na tabela de menu: ");
	scanf ("%i", &res);
	system("cls"); 

    
if ( res == 1) {
	printf ("\ncadastramento do produto: \n");
						
	for (i = 0; i < 5; i++) { //ciclo
			printf ("Insira o ano do livro %i:  ", i + 1);	
			scanf ("%i%*c", &d[i].ano_livro);
			printf ("\n");
			printf ("Insira o autor do livro %i:  ", i + 1);
			fgets(d[i].autor_livro, 15, stdin);
			printf ("\n");
			printf ("Insira o nome do livro %i:  ", i + 1);
			fgets(d[i].nome_livro, 30, stdin);
			printf ("\n");
			printf("\n _______________________________________________________________ \n");
			system("cls");}}

      switch (res) {
		
case 2 :
        printf("\n _______________________________________________________________ \n");
	printf ("\n Insira o ano do livro:  ");
	scanf ("%i", &cod);
	printf ("\n");
			
	for(int g=0; g<6; g++ ){if(cod==d[g].ano_livro[0]){ 
			
	printf("_______________________________________________________________ \n");
	printf ("Nome do livro: %s \n", d[g].nome_livro);
	printf ("Autor do livro: %s \n", d[g].autor_livro);
    }}
	break;

//ano do livro por meio do ciclo for e printa o conteudo abaixo

case 3:
	printf("\n _______________________________________________________________ \n");
	printf ("\n Insira o nome do livro:  ");
	scanf("%c", nome);
	printf ("\n");
			
	for(int g=0; g<6; g++ ){if(nome==d[g].ano_livro){ 
			
	printf("_______________________________________________________________ \n");
	printf ("Ano do Livro: %i \n", d[g].ano_livro);
	printf ("Autor do livro: %s \n", d[g].autor_livro);
    }}
	break;

case 4:
	printf("\n _______________________________________________________________ \n");
	printf ("\n Insira o autor do livro:  ");
	scanf("%c",autor);
	printf ("\n");
			
	for(int g=0; g<6; g++ ){if(autor==d[g].ano_livro){ 
			
	printf("_______________________________________________________________ \n");
	printf ("Ano do Livro: %i \n", d[g].ano_livro);
	printf ("Nome do Livro: %s \n", d[g].nome_livro);
    }}
	break;
case 5: 
	system("cls"); //LIMPAR A TELA
	break;
			
default:            // Em caso de erro no menu
	printf("Nao vale\n");
	break;}	

} while (res != 5);


return 0;
}

// nao consegui resolver interligar minha entrada com minha struct em parte do codigo, mas o menu esta funcional
