#include <stdio.h>
#include <math.h>

int main()
{
  float a,b,c,d,e;
  a=3;
  b=4;
  c=5;
  d=7;
  
  //Impresión de resultados
  printf("e=(a+b)*c/d= %f \n",e=(a+b)*c/d);
  printf("e=((a+b)*c)/d= %f\n",e=((a+b)*c)/d);
  printf("e=a+(b*c)/d= %f\n",e=a+(b*c)/d);
  printf("e=a+b*c/d= %f\n",e=a+b*c/d);

  return 0;
}
