#include <stdio.h>
#include <stdlib.h>

#define QTALUNOS 10

int main(int argc, char *argv[])
{
    float notaAlunos[QTALUNOS];
    int iAluno;
    float notaTotal = 0;
    float mediaGeral = 0;
    for(iAluno = 0; iAluno < QTALUNOS; iAluno++)
    {
         printf("Digite a nota do aluno %d:", iAluno+1);           
         scanf("%f", &notaAlunos[iAluno]);          
         notaTotal+= notaAlunos[iAluno];
    }
    mediaGeral = notaTotal/QTALUNOS;
    printf("\nAluno\tNota\tStatus\n");
    
    for(iAluno = 0; iAluno < QTALUNOS; iAluno++)
    {
         printf("%d\t%2.2f\t%s\n", iAluno+1, notaAlunos[iAluno], notaAlunos[iAluno] >= mediaGeral? "Aprovado" : "Reprovado");
    }
    
    printf("Nota total: %2.2f\n", notaTotal);
    printf("Media geral: %2.2f\n", mediaGeral);
    
    getch();
}
