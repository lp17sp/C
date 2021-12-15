#include <stdio.h>
#include <math.h>

int main()
{
    int A;
    printf("Digite o lado de um triangulo:\n");
    scanf("%i",&A);

    int B;
    printf("Digite o lado de um triangulo:\n");
    scanf("%i",&B);

    int C;
    printf("Digite o lado de um triangulo:\n");
    scanf("%i",&C);

    int n=1;

    if ( (C<(A+B)) && (B<(A+C)) && (A<(B+C)) && ((B-C)<A) && ((A-C)<B) && ((A-B)<C)){
        printf("Esse dados comprovam que é um triangulo\n");
        n=n+1;}
    else{ printf("Nao e um triangulo\n");}  

    if(n==2){
        if (A!=B && C!=B && C!=A){
            printf("Esse triangulo e escaleno");}
        else{
            if(A==B && C==B && C==A){
                    printf("Esse triangulo e Equilatero ");}
            else{
                if(A==B && B!=C || A==C && B!=C || A!=C && B==C ){
                    printf("Esse triangulo e Isosceles ");
            }
        }
        }}
    




}    
