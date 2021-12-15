#include <stdio.h>

int main(){
    int a;
    printf("Digite um valor em metros:");
    scanf("%i",&a);
    int b=a*10;
    int c=a*100;
    int d=a*1000;
    printf("O valor %i metros em dm, cm, Ml respectivamente: %i dm, %i cm, %i Ml", a,b,c,d);

}
