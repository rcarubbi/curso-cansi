#include <stdio.h>
#include <string.h>


void addString(char* vetor[])
{
     int size = sizeof(vetor);
     
} 

void getdynamic(char** data)
{
       
       char letra;
       int tamanhoString = 1;
       
       *data = (char *)malloc(tamanhoString * sizeof(char));
       
       do
       {
                  letra = getche();         
                  if (letra == '\r')
                  {
                        (*data)[tamanhoString-1] = '\0';
                        break;
                  }
                  else
                  {
                      (*data)[tamanhoString-1] = letra;
                      tamanhoString++;
                      *data = (char *)realloc(*data, tamanhoString * sizeof(char));
                  }
          
       }while(*data != NULL);    

}

void ExecuteExample1()
{
    char *input1;
    printf("Digite uma string\n");
    getdynamic(&input1);
    
    printf("\nString Digitada: %s\n", input1);
    free(input1);
    getch();   
}

void addItem(char*** vetor, char* item)
{
     static int qtNomes;
     **vetor = (char *)malloc(qtNomes * strlen(item) * sizeof(char));
     
     
}

void ExecuteExample2()
{
     char *item;
     char **vetor;
     do
     {
       free(item);
       printf("Digite um nome:\n");     
       getdynamic(&item);
       addItem(&vetor, item);
       
     } while(item[0] != NULL);
     
}

int main(int argc, char *argv[])
{
    printf("Exemplo 1:\n");
    ExecuteExample1();
    printf("Exemplo 2:\n");
    ExecuteExample2();
}


