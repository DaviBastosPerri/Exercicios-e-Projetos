#include<stdio.h>
#include<stdlib.h>
#include <math.h>

int main (){
	int tempo1,tempo2,tempo3;
	printf ("qual o tempo do primeiro nadador?      ");
	scanf ("%f",&tempo1);
	
	printf ("qual o tempo do seguno nadador?        ");
	scanf ("%f",&tempo2);
	
	printf ("qual o tempo do terceiro nadador?      ");
	scanf ("%f",&tempo3);
	
	if (tempo1<tempo2&&tempo2<tempo3)
	printf ("primeiro nadador = medalha de ouro\n segundo nadador = medalha de prata\n terceiro nadador = medalha de bronze\n");
	
	 if (tempo1 < tempo3 && tempo3 < tempo2)
	printf ("primeiro nadador = medalha de ouro\n  terceiro nadador = medalha de prata\n segundo nadador = medalha de bronze\n");
	
	 if (tempo2 < tempo3 && tempo3 < tempo1)
	printf ("segundo nadador = medalha de ouro\n terceiro nadador = medalha de prata\n primeiro nadador = medalha de bronze\n");
	
	 if (tempo3 < tempo2 && tempo2 < tempo1)
	printf ("terceiro nadador = medalha de ouro\n segundo nadador = medalha de prata\n primeiro nadador = medalha de bronze\n");
	
	 if (tempo2 < tempo1 && tempo1 < tempo3)
	printf ("segundo nadador = medalha de ouro\n primeiro nadador\n = medalha de prata\n terceiro nadador = medalha de bronze\n");	
	
	 if (tempo3 < tempo1 && tempo1 < tempo2)
	printf ("terceiro nadador = medalha de ouro\n primeiro nadador = medalha de prata\n segundo nadador = medalha de bronze\n");
			
	return 0;
}
