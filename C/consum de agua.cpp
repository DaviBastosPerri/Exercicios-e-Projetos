#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main () 
{
 float preco, consumo;
 printf ("qual o consumo?    ");
 scanf("%f",&consumo);
 if(consumo <= 10) preco = 7;
 if (consumo> 10 && consumo <=30) preco = (consumo - 10)+7;
 if (consumo > 30 && consumo <=100) preco = (consumo - 30)*2+27;
 if (consumo >100) preco = (consumo - 100)*5+167;
 printf ("voce deve pagar %.2f\n", preco);

 return 0;
}
 
