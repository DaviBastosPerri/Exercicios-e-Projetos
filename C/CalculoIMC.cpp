#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main () 
{
setlocale(LC_ALL, "Portuguese");

float p, h, imc;

printf("qual sua altura?     ");
scanf ("%f",&h);
printf ("qual seu peso?      ");
scanf("%f",&p);
imc = p/(h*h);
printf ("imc= %f",imc);}
