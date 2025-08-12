#include <stdio.h>
#include <math.h>

int main ()
{
  float resultados[5];
  int indx;
  int numeros [5];
  numeros [0]=1;
  numeros [1]=2;
  numeros [2]=3;
  numeros [3]=4;
  numeros [4]=5;
  
  printf("x \t x²\t log(x+1) \t exp(x)+cos(x) \n");

  for (indx=0; indx<5; indx++)
  {
    //printf("%d %d\n", numeros[indx], numeros[indx]%2);
    if(numeros[indx]%2==0)
    {
      //resultados[indx]=log10(numeros[indx]+1);
      printf("x=%d\n log(x+1)=%f\n", numeros[indx], resultados[indx]=log10(numeros[indx]+1));
    } else{
      //resultados[indx]=exp(numeros[indx])+cos(numeros[indx]);
      printf("x²=%d exp(x)+cos(x)=%f\n", numeros[indx]*numeros[indx], resultados[indx]=exp(numeros[indx])+cos(numeros[indx]));
    }

    printf("Resultados\n");
    for(indx=0; indx<5; indx++)
    {
      printf("%f\n", resultados[indx]);
    }
    //printf("%f %f %f %f \n", numeros[indx], numeros[indx]*numeros[indx], log10(numeros[indx]+1), exp(numeros[indx])+cos(numeros[indx]));
  }
  float suma;
  suma=3.141592653+3.141592653;
  printf("\nSuma de pi:\n");
  printf("Pi+Pi=%0.7", suma);
