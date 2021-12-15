#include <stdio.h>
#include <stdlib.h>


int main(void){
    int notan,notag,notah,notaj,notak=0;
   struct Alunos{ char nome; float nota};

   struct Alunos n;
   struct Alunos g;
   struct Alunos h;
   struct Alunos j;
   struct Alunos k;

    printf("Insira um nome:");
    scanf("%s",&n.nome);
    printf("Insira a media do aluno:");
    scanf("%f",&n.nota);

    printf("Insira um nome:");
    scanf("%s",&g.nome);
    printf("Insira a media do aluno:");
    scanf("%f",&g.nota);

    printf("Insira um nome:");
    scanf("%s",&h.nome);
    printf("Insira a media do aluno:");
    scanf("%f",&h.nota);

    printf("Insira um nome:");
    scanf("%s",&j.nome);
    printf("Insira a media do aluno:");
    scanf("%f",&j.nota);

    printf("Insira um nome:");
    scanf("%s",&k.nome);
    printf("Insira a media do aluno:");
    scanf("%f",&k.nota);

    notag=g.nota;
    notah=h.nota;
    notaj=j.nota;
    notan=n.nota;
    notak=k.nota;

    float media = 0;
    media= (n.nota+g.nota+h.nota+j.nota+k.nota)/5;
    printf("A media da turma e: %f",media); //media

    if(g.nota>h.nota && g.nota>k.nota && g.nota>j.nota && g.nota>n.nota){printf("A maior nota é de %s",g.nome);}
    if(notah>notag && notah>notak && notah>notaj && notah>notan){printf("A maior nota é de %s",h.nome);}
    if(notan>notag && notan>notak && notan>notaj && notan>notah){printf("A maior nota é de %s",n.nome);}
    if(notaj>notag && notaj>notak && notaj>notah && notaj>notan){printf("A maior nota é de %s",j.nome);
    }
    if(notak>notag && notak>notah && notak>notaj && notak>notan){printf("A maior nota é de %s",k.nome);}
    //maior nota

    if(notah<notag && notah<notak && notah<notaj && notah<notan){printf("A menor nota é o %s",h.nome);}
    if(notan<notag && notan<notak && notan<notaj && notan<notah){printf("A menor nota é o %s",n.nome);}
    if(notaj<notag && notaj<notak && notaj<notah && notaj<notan){printf("A menor nota é o %s",j.nome);
    }
    if(notak<notag && notak<notah && notak<notaj && notak<notan){printf("A menor nota é o %s",k.nome);}
    //menor nota


}
