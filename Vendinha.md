#include <stdio.h>
#include <stdlib.h>

struct d_produtos { //estrutura que recebe os dados dos produtos  
	
int cod_produto;
float valor;
char desc_produto[100];}d[5]; //d[i] vetor que permite 5 produtos diferentes


int main(){
	int cod;
	float total =0;
	int i;
    int res; //resposta
	float m; //media

do {
          //MENU DO PROGRAMA
	printf("_______________________________________________________________ \n");
	printf ("Insira 1 -> Cadastrar produto\n");
	printf ("Insira 2 -> Ver produtos cadastrados\n");
	printf ("Insira 3 -> Ver os Valores e descricao de cada produto'\n");
	printf ("Insira 4 -> Ver a Media dos produtos\n");
	printf ("Insira 5 -> Saida\n");
	printf("_______________________________________________________________ \n");


    printf ("Digite um numero que corresponde ao seu desejo na tabela de menu: ");
	scanf ("%i", &res);
	system("cls"); 


if ( res == 1) {
	printf ("\ncadastramento do produto: \n");
						
	for (i = 0; i < 5; i++) { //ciclo
			printf ("Insira o codigo do produto %i:  ", i + 1);	
			scanf ("%i%*c", &d[i].cod_produto);
			printf ("\n");
			printf ("Insira o valor do produto %i:  ", i + 1);
			scanf ("%f%*c", &d[i].valor);
			total = total + d[i].valor;
			printf ("\n");
			printf ("Insira a descricao do produto %i:  ", i + 1);
			fgets(d[i].desc_produto, 100, stdin);
			printf ("\n");
			printf("\n _______________________________________________________________ \n");
			system("cls");}}

//ciclo for que faz a leitura dos dados necessarios

    switch (res) {
		
case 2 :
		printf ("Produtos listados: \n");	
		for (int h= 0; h < 5; h++) {		
		printf ("Produto %i: \n codigo do produto:  %i  ||| Valor:  %4.2f  ||| descricao  %s \n\n", 
				h + 1, d[h].cod_produto, d[h].valor, d[h].desc_produto);}
		break;

//Apresenta o codigo dos produtos listados e a descricao

case 3: 
	printf("\n _______________________________________________________________ \n");
	printf ("\n Preco e descricao de codigo do produto\n");
	printf ("\n Insira o codigo do produto:  ");
	scanf ("%i", &cod);
	printf ("\n");
			
	for(int g=0; g<6; g++ ){if(cod==d[g].cod_produto){ 
			
	printf("_______________________________________________________________ \n");
	printf ("Valor do produto: %4.2f \n", d[g].valor);
	printf ("Descricao do produto: %s \n", d[g].desc_produto);
    }}
	break;
			
//ciclo for no case 3 que faz a leitura no codigo do profuto e se for igaual ao que eu inseri ele, manda o valor e a descricao

case 4:
	printf("\n _______________________________________________________________ \n");
	printf("\n A media dos produtos: %f\n", (total/5));	
	printf("\n _______________________________________________________________ \n");	
	break;	

//media dos produtos, usando a variavel total que recebe os valores lá em cima, e dividido por 5 dá a media quando solicitado
	
case 5: 
	system("cls"); //LIMPAR A TELA
	break;
			
default:            // Em caso de erro no menu
	printf("Nao vale\n");
	break;}	

} while (res != 5);


return 0;
}
