#include <stdio.h>
main(){
  char ch; 
  printf ("Digite um caracter qualquer: ");
  scanf ("%c", &ch); 
  printf (" codigo ASCII: %d", ch);//quando voc� coloca %d, o programa entende que voc� quer escrever a variavel na forma de um inteiro, que nesse caso seria um inteiro correspondente ao caracter digitado e guardado na variavel
 return 0;}
