#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1

int main(int argc, char *argv[])
{
    printf("Tabela E\n");
    printf("Falso e Falso = %s\n", FALSE && FALSE? "Verdadeiro":"Falso");
    printf("Falso e Verdadeiro = %s\n", FALSE && TRUE? "Verdadeiro":"Falso");
    printf("Verdadeiro e Falso = %s\n", TRUE && FALSE? "Verdadeiro":"Falso");
    printf("Verdadeiro e Verdadeiro = %s\n", TRUE && TRUE? "Verdadeiro":"Falso");
    
    printf("\n\nTabela Ou\n");
    printf("Falso ou Falso = %s\n", FALSE || FALSE? "Verdadeiro":"Falso");
    printf("Falso ou Verdadeiro = %s\n", FALSE || TRUE? "Verdadeiro":"Falso");
    printf("Verdadeiro ou Falso = %s\n", TRUE || FALSE? "Verdadeiro":"Falso");
    printf("Verdadeiro ou Verdadeiro = %s\n", TRUE || TRUE? "Verdadeiro":"Falso");
    
    printf("\n\nTabela nao\n");
    printf("Nao Falso = %s\n", !FALSE? "Verdadeiro":"Falso");
    printf("Nao Verdadeiro = %s\n", !TRUE? "Verdadeiro":"Falso");
   
    
    getch();
}
