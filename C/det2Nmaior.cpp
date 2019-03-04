#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main () 
{
setlocale(LC_ALL, "Portuguese");

float n1, n2;

printf("digite o primeiro numero   ");
scanf ("%f",&n1);
printf("digite o segundo numero    ");
scanf("%f",&n2);

if (n1>n2) {printf ("o primeiro numero é maior que o segundo");}
if (n1<n2) {printf ("o segundo numero é maior que o primeiro");}

return 0;
}
