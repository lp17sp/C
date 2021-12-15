#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *F(char *str){
    int con=0;
    int tam=0;
    tam = strlen(str);
    int i=0;
    char  a='a';
    char b='b';
    char c='c';
    char d='d';
    char e='e';
    char f='f';
    char g='g';
    char h ='h';
    char ii='i';
    char j='j';
    char k='k';
    char l='l';
    char m='m';
    char n='n';
    char o='o';
    char p='p';
    char q='q';
    char r='r';
    char s='s';
    char t='t';
    char u='u';
    char v='v';
    char w='w';
    char x='x';
    char y='y';
    char z='z';
    for(i=0; i<tam; i++){
        if(str[i]==a){
            con=con +1;}
        printf("A string tem %i letra a\n", con);
        con = 0;
        if(str[i]==b){
            con=con +1;}
        printf("A string tem %i letra b\n", con);
        con = 0;
        if(str[i]==c){
            con=con +1;
        }
        printf("A string tem %i letra c\n", con);
        con = 0;
        if(str[i]==d){
            con=con +1;
        }
        printf("A string tem %i letra d\n", con);
        con = 0;
        if(str[i]==e){
            con=con +1;}
        printf("A string tem %i letra e\n", con);
        con = 0;
        if(str[i]==f){
            con=con +1;}
        printf("A string tem %i letra f\n", con);
        con = 0;
        if(str[i]==g){
            con=con +1;}
        printf("A string tem %i letra g\n", con);
        con = 0;
        if(str[i]==h){
            con=con +1;}
        printf("A string tem %i letra h\n", con);
        con = 0;
        if(str[i]==ii){
            con=con +1;}
        printf("A string tem %i letra i\n", con);
        con = 0;
        if(str[i]==j){
            con=con +1;}
        printf("A string tem %i letra j\n", con);
        con = 0;
        if(str[i]=k){
            con=con +1;}
        printf("A string tem %i letra k\n", con);
        con = 0;
        if(str[i]==l){
            con=con +1;}
        printf("A string tem %i letra l\n", con);
        con = 0;
        if(str[i]==m){
            con=con +1;}
        printf("A string tem %i letra m\n", con);
        con = 0;
        if(str[i]==n){
            con=con +1;}
        printf("A string tem %i letra n\n", con);
        con = 0;
        if(str[i]==o){
            con=con +1;}
        printf("A string tem %i letra o\n", con);
        con = 0;
        if(str[i]==p){
            con=con +1;}
        printf("A string tem %i letra p\n", con);
        con = 0;
        if(str[i]==q){
            con=con +1;}
        printf("A string tem %i letra q\n", con);
        con = 0;
        if(str[i]==r){
            con=con +1;}
        printf("A string tem %i letra r\n", con);
        con = 0;
        if(str[i]==s){
            con=con +1;}
        printf("A string tem %i letra s\n", con);
        con = 0;
        if(str[i]==t){
            con=con +1;}
        printf("A string tem %i letra t\n", con);
        con = 0;
        if(str[i]==u){
            con=con +1;}
        printf("A string tem %i letra u\n", con);
        con = 0;
        if(str[i]==v){
            con=con +1;}
        printf("A string tem %i letra v\n", con);
        con = 0;
        if(str[i]==w){
            con=con +1;}
        printf("A string tem %i letra w\n", con);
        con = 0;
        if(str[i]==x){
            con=con +1;}
        printf("A string tem %i letra x\n", con);
        con = 0;
        if(str[i]==y){
            con=con +1;}
        printf("A string tem %i letra y\n", con);
        con = 0;
        if(str[i]==z){
            con=con +1;}
        printf("A string tem %i letra z\n", con);
        con = 0;
    }
}

int main(void){
    void *F(char *str);
    char string1[]="";
    printf("Digite uma palavra:");
    scanf("%s", string1);
   F(string1); //Passa o parâmetro para a função acima

    return 0;
} 
//Infelizmente eu não consegui raciocinar direito devido a fatores externos e tentei fazer o código manualemnte desde vetores ao printf, o que fugiu do proposito do programa
//cógigo funciona parcialmente
