#include <stdio.h>

int main(void){
    int TempoS=0;
    float MassaI, MassaF=0;

    printf("Diga a massa do material (em g):\n");
    scanf("%f",&MassaI);

    MassaF=MassaI;
    while(MassaF>0.5){
        MassaF = MassaF/2;
        TempoS = TempoS + 50;
    }
    //cai pela metade a massa e a cada caida da massa, 50 segundos adicionados

    
    printf("Massa inicial igual a: %f\n", MassaI);
    printf("Massa inicial igual a: %f\n", MassaF);
    printf("Tempo de perda da massa foi: %i  segundos\n", TempoS);

}


