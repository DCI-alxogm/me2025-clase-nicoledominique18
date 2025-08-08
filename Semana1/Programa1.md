/*Programa de impresión de 5 números flotantes y el valor de las siguientes funciones:
f(x)=x^2; f(x)=log(x+1); f(x)=exp(x)+cos(x) */

#include<stdio.h> #include<math.h>

int main()
{
float a, b, c, d, e;
a=3.1416; b=45.6577; c=2.222; d=0.3456; e=4568.098;
printf("Números originales: \n%f, \n%f, \n%f, \n%f, \n%f\n\n Cuadrado de los números.\n", a, b, c, d, e);

/*Arreglo y funciones*/
floatx[5]={a, b, c, d, e};

float cuadrado[5];
for(int c=0; c<5; c++)
{cuadrado[c]=x[c]*x[c]; printf("%f \n", cuadrado[c]);}

float logaritmo[5];
printf("\n log(x+1)\n");
for(int c=0; c<5; c++)
{logaritmo[c]=log(x[c]+1); printf(\n%f ", logaritmo[c]);}

float exponente[5];
printf(\n \n exp(x)+cos(x)\n");
for(int c=0; c<5; c++)
{exponente[c]=exp(x[c]+cos(x[c])); printf("\n\n %f ", exponente[c]);}
}
