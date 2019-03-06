//Um fazendeiro observou uma chuva de meteoros na noite passada e que saber se alguns
//desses meteoros caíram na sua propriedade. Sua fazenda é um terreno retangular e ele
//conhece a latitude e longitude dos vértices do retângulo. O fazendeiro também sabe que
//o IMPE disponibiliza na Internet a latitude e longitude da caída de cada um dos meteoros.
//Você consegue ajudar o fazendeiro a determinar quantos dos meteoros caíram na fazenda
//e, para aqueles meteoros que caíram na fazenda, qual deles caiu mais próximo da casa do
//fazendeiro cuja latitude e longitude é conhecida?

# include <stdlib.h>
# include <stdio.h>
# include <math.h>

int main(){
	
float x1, x2, x3, x4, y1, y2, y3, y4, xc, yc, distx, disty, area, latm, lonm, meteoros, contador = 0, qmet = 0, distcm = 0, menordist = 9999999; 

printf("***** VERTICES *****\n\n      V3----V4\n      |      |\n      |      |\n      |      |\n      V1----V2\n");
printf("\n\nVertice inferior esquerda (V1):\n\n");
printf("Digite a Latitude: ");
scanf("%f", &x1);
printf("Digite a Longitude: ");
scanf("%f", &y1);
printf("\n\nVertice inferior direita (V2):\n\n");
printf("Digite a Latitude: ");
scanf("%f", &x2);
printf("Digite a Longitude: ");
scanf("%f", &y2);
printf("\n\nVertice superior esquerda (V3):\n\n");
printf("Digite a Latitude: ");
scanf("%f", &x3);
printf("Digite a Longitude: ");
scanf("%f", &y3);
printf("\n\nVertice superior direita (V4):\n\n");
printf("Digite a Latitude: ");
scanf("%f", &x4);
printf("Digite a Longitude: ");
scanf("%f", &y4);


if (((x3 != x1) || (x2 != x4)) || ((y3 != y4) || (y2 != y1)))
{
	printf("\nAlguma vertice esta errada\n");
	return 0;
}


distx = abs(x1 - x2);
disty = abs(y1 - y3);
area = distx * disty;


printf("\n\nA area do Terreno eh %.0f\n\n", area);
printf("***** CASA *****");
printf("\n\nLatitude da casa: ");
scanf("%f", &xc);
printf("Longitude da casa: ");
scanf("%f", &yc);


if (((yc > y3) || (yc < y1)) || ((xc > x2) || (xc < x1)))
{
printf("\n\nA casa esta fora do terreno\n\n");
return 0;
}


printf("\n\n***** METEOROS *****\n\nQuantos meteoros o IMPE disponibilizou? ");
scanf("%f", &meteoros);
printf("\n\n------------------------------------------\n\n");


while (meteoros > contador)
{
printf("\nLatitude do meteoro: ");
scanf("%f", &latm);
printf("Longitude do meteoro: ");
scanf("%f", &lonm);


if ((lonm > y3 || lonm < y1) || (latm > x2 || latm < x1))
{
printf("\n\nO meteoro nao caiu no terreno\n\n");
}


else 
{
printf("\n\nO meteoro caiu no seu terreno\n");
distcm = sqrt(((latm - xc) * (latm - xc)) + ((lonm - yc) * (lonm - yc)));
printf("Distancia: %.3f", distcm);
printf("\n\n------------------------------------------\n\n");
qmet ++;


if (distcm < menordist)
{
	menordist = distcm;
}
}
contador ++; 
}
printf("\nCairam %.0f meteoros no seu terreno\n", qmet);


if (menordist == 0)
{
	printf("O meteoro mais proximo caiu exatamente na sua casa\n");
}


else
{
printf("O meteoro mais proximo da sua casa caiu a uma distancia de %.3f\n", menordist);
}

}
