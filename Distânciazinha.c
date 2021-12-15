#include <stdio.h>
#include <math.h>

int main(){
    int py;
    printf("Atribua um p(y):");
    scanf("%i",&py);
     int px;
    printf("Atribua um p(x):");
    scanf("%i",&px);
    int d = sqrt((px-0)*(px-0)+(py-0)*(py-0));

    printf("A distancia entre eles:%i",d);
    }
    //Esse programa considera que os os dois pontos tem x0 e y0 setado em 0 
