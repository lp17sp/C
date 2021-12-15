#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("Digite um valor:");
    scanf("%i",&n);
     int m;
    printf("Digite outro valor:");
    scanf("%i",&m);
    
    int g = m + n;
    int h = n * (m*m);
    int l = (n*n)-(m*m);
    int z = sqrt((n*n)+(m*m));
    double o = sin(n-m);
    printf("A soma dos numeros: %i\n",g);
    printf("O produto do primeiro numero pelo quadrado do segundo: %i\n",h);
    printf("O quadrado do primeiro numero menos o quadrado do segundo: %i\n",l);
    printf("A raiz quadrada da soma dos quadrados: %i\n",z);
    printf("O seno da diferenca do primeiro pelo segundo numero: %i\n", o);
    
    }

