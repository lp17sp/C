#include <stdio.h>
#include <math.h>

int main(void){

    int ni=0;
    printf("Diga um numero inteiro:\n");
    scanf("%i",&ni);

    int r=0;
    printf("Diga um numero para a razão:\n");
    scanf("%i",&r);

    int a[10];
    int i=1;

    while(i<11){
        a[i]=(ni*pow(r,i-1)); //formula da PG
     
        i = i +1;
    }

    int g=10;
    int pares=0;
    while(g>0){
        printf("%i\n",a[g]);
        if(a[g]%2==0){pares= pares + 1;} //Contador de pares
        g=g-1;}

    printf("A quantidade de numeros pares nessa PG e: %i\n",pares);

}
