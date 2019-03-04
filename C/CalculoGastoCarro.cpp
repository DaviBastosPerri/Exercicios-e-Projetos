#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
float ndv, pc, lg
, g;

while(ndv > 0)
{
printf("----------------------------------\n");
printf("qual a numeracao do veiculo?\n");
scanf("%f",&ndv);
if(ndv <= 0){return 0;} // essa linha foi acrescentada para parar o algoritmo assim que o valor 0 for digitado.
printf("quantos litros o veiculo gastou?\n");
scanf("%f",&lg);
printf("qual o preco do combustivel?\n");
scanf("%f",&pc);
g = lg*pc;
printf("carro: %.0f  ", ndv);
printf("gasto: R$%.2f\n", g);
}
return 0;

}
