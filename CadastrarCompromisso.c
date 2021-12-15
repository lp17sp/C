#include <stdio.h>
#include <stdlib.h>

int main(){
struct Horario{ //estrutura que recebe os dados 
int hora;
int minutos;
int segundos;
int vi; //variaveis inteiras
}; //d[i] vetor que permite 5 produtos diferentes

struct Data{
    int dia;
    int mes;
    int ano;
    int vi; //variaveis inteiras
};

struct Compromisso{
    char string[50];
    *Horario=&Horario;
    *Data=&Data;
}d[3];

int n;
printf("Quantos compromissos quer cadastrar? \n");
scanf("%i",n);



}
