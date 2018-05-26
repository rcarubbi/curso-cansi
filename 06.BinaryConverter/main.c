#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

#define BUFFER 64
#define TRUE 1
#define FALSE 0





int main(int argc, char *argv[])
{
  char entrada[BUFFER];  
  char saida[BUFFER];
  int decimalNumber;

  CharToOem("Digite um número binário:\n", saida);

  do
  {
       printf(saida);
       scanf("%s", &entrada);     
  } while(!ValidarEntrada(entrada));
  

  decimalNumber = ConvertBinToDec(entrada);
  CharToOem("Número decimal:%d", saida);
 
  printf(saida, decimalNumber);
  
  getch();

}



int ValidarEntrada(char entrada[])
{
    int iChar;
    for (iChar = 0; iChar < strlen(entrada); iChar++)
    {
        if (entrada[iChar] != '0' && entrada[iChar] != '1') 
        {
           return FALSE;
        }
    }
    return TRUE;
}

int ConvertBinToDec(char binaryNumber[])
{
    int iDigit;
    int bit;
    int expoente = 0;
    int result =0;
    for (iDigit = strlen(binaryNumber)-1; iDigit>=0 ; iDigit--)
    {
        char bitChar = binaryNumber[iDigit];
        bit = atoi(&bitChar);
        result+= bit * pow(2, expoente);
        expoente++;
    }
    return result;
}
 
