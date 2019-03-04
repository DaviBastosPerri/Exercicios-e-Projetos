#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main () 
{
  int ano;
  printf("qual ano voce quer testar?     ");
  scanf("%d", &ano);
  
  if (ano % 4 == 0 && (ano % 400 == 0 || ano % 100 != 0)) {printf("esse ano e bissexto\n");}
  
  else {printf("esse ano nao e bissexto\n");}
  
  return 0;

}
