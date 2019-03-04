#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main () 
{
setlocale(LC_ALL, "Portuguese");

float n1, n2, n3;

printf("digite o primeiro numero   ");
scanf ("%f",&n1);
printf("digite o segundo numero    ");
scanf("%f",&n2);
printf ("digite o terceiro numero  ");
scanf ("%f",&n3);

if (n1>n2 && n3) {printf ("o primeiro numero é o maior");}
if (n2>n1 && n3) {printf ("o segundo numero é o maior");}
if (n3>n1 && n2) {printf ("o terceiro numero é o maior");}
return 0;
}
