#include <stdio.h>
#include <math.h>

int main ()
{
  int n, i, a; float x, suma=0;
  printf("Ingrese el valor de x: ");
  scanf("%f", &x);
  printf("\nIngrese el número de términos: ");
  scanf("%d", &n);

  for(i=0; i<n+1; i++)
  {
    suma+=pow(x,i)/tgamma(i+1);
    printf("Aproximación %d = %f \n", i, suma);
  }

}
