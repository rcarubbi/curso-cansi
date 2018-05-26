#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char nota;
    int contadorA = 0,
        contadorB = 0,
        contadorC = 0,
        contadorD = 0,
        contadorE = 0,
        contadorF = 0;
    int iNota;
        
    for (iNota = 1; iNota<=10;iNota++)
    {
        printf("Digite uma nota:");
        nota = getche();
        
        switch(nota)
        {
              case 'a':
              case 'A':   
                   ++contadorA;                            
                   break;
              case 'b':
              case 'B':
                   ++contadorB;
                   break;
              case 'c':
              case 'C':
                   ++contadorC;
                   break;
              case 'd':
              case 'D':
                   ++contadorD;
                   break;
              case 'e':
              case 'E':
                   ++contadorE;
                   break;              
              case 'f':
              case 'F':
                   ++contadorF;
                   break;      
              default:
                   iNota--;
                   printf("\nNota incorreta, digite novamente!");
                   break;
        }    
        printf("\n");
    }
    
    printf("\nTotal de cada nota:\n A:%d\n B:%d\n C:%d\n D:%d\n E:%d\n F:%d\n",
    contadorA,
    contadorB,
    contadorC,
    contadorD,
    contadorE,
    contadorF);
    
    getch();
}
