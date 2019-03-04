# include <stdlib.h>
# include <stdio.h>
# include <math.h>

int main (){
int x;
// ler x	
	printf("digite um valor:");
	scanf("%d", &x);
	// determinar se x é par
	if(x%2==0){
	printf("x=%d e par, foi calculado; %d",
	x, x*x);}
	else {printf("x=%d e impar, foi calculado: %d",
	 x, x+2 ); }
	
	 
	 // mostrar o total
	
	 
	return 0;
}
