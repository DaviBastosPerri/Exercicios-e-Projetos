#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main ()
{
float m=0, n=0, numero, qdn;

printf("quantos numeros vc quer ler?\n");
scanf("%f", &qdn);
while (n < qdn)
{
printf("digite um numero   ");
scanf("%f", &numero);
if (numero < 0){m=m+numero;}
n=n+1;
}

printf("a soma de todos os numeros negativos eh %.2f", m);
return 0;
}
