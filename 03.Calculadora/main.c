#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define BUFFER 128

int main(int argc, char *argv[])
{
  char opcao;
  char saida[BUFFER];
  float n1, n2, result;
  
  do
  { 
       system("CLS");
       n1 = 0;
       n2 = 0;
       result = 0;
       opcao = '0';
       
       printf("Valor de n1:\n");
       scanf("%f", &n1);
       
       printf("Valor de n2:\n");
       scanf("%f", &n2);
       
       CharToOem("Selecione a opera��o desejada:\n(1) Soma\n(2) Subtra��o\n(3) Multiplica��o\n(4) Divis�o\n(0) Sair\n", saida);
       printf(saida);
      
       opcao = getch();
       
      
           switch(opcao)
           {
              case '1':
                   
                   result = n1 + n2;
                   printf("Resultado %f", result);
           
                   break;
              case '2':   
                   
                   result = n1 - n2;
                   printf("Resultado %f", result);
                  
                   break;
              case '3':       
                    
                   result = n1 * n2;
                   printf("Resultado %f", result);
                  
                   break;
              case '4':
                   result = n1 / n2;
                   printf("Resultado %f", result); 
                
                   break;
              case '0':
                   printf("Obrigado");
                   break;
              default:
                    CharToOem("\nOp��o inv�lida", saida);
                    printf(saida);
                 
           }     
           getch();
    
       
  } while(opcao != '0');
  
}

