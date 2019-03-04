#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main () 
{
setlocale(LC_ALL, "Portuguese");

float anoatual, datadenascimento, idade;

printf("qual ano você está?");
scanf ("%f", &anoatual);
printf ("qual a data de nascimento da pessoa?");
scanf ("%f", &datadenascimento);
idade = anoatual - datadenascimento;
printf ("idade=%f\n",idade);
return 0;
}
