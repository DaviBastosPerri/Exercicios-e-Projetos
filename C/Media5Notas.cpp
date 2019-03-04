#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main ()
{
float nota1, nota2, nota3, nota4, nota5, media;
printf ("digite a nota 1    ");
scanf ("%f",&nota1);
printf ("digite a nota 2    ");
scanf ("%f",&nota2);
printf ("digite a nota 3    ");
scanf ("%f",&nota3);
printf ("digite a nota 4    ");
scanf ("%f",&nota4);
printf ("digite a nota 5    ");
scanf ("%f",&nota5);

media = (nota1+nota2+nota3+nota4+nota5) /5;

printf ("media=%f\n",media);

return 0;
}

