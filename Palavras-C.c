#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *strdoublecopy(char *str){
    int i,n;  
    char str2[]="";
    for (n=0; str[n]!='\0'; n++){}  //ciclo for para saber o espaço do str
    *str2 = malloc(2*(n*sizeof(char))); //alocando espaco para a *str2
    strcpy(str2,str); 
    strcat(str2, str); // comando que junta as duas string
    printf("%s\n", str2);
}

int main(void){
    void *strdoublecopy(char *str);
    char string1[]="";
    printf("Digite uma palavra:");
    scanf("%s", string1);

   *strdoublecopy(string1); //Passa o parâmetro para a função acima

    return 0;
} 
