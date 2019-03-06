#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){


float p1, p2, p3, mp, rp,qedp=0, edp, medp, redp, e1, e2, e3, e4, me, re, acumulador, contador=0, notaf;

printf("---- CALCULADORA DE NOTAS UNIFACCAMP ----\n");
//notas das provas
printf("qual a nota da p1?\n");
scanf("%f",&p1);
printf("qual a nota da p2?\n");
scanf("%f",&p2);
printf("qual a nota da p3?\n");
scanf("%f",&p3);

mp=(p1+p2+p3)/3;

rp= 0.75*mp;

//notas dos eixos

printf("qual a nota do primeiro eixo?\n");
scanf("%f",&e1);
printf("qual a nota do segundo eixo?\n");
scanf("%f",&e2);
printf("qual a nota do terceiro eixo?\n");
scanf("%f",&e3);
printf("qual a nota do quarto eixo?\n");
scanf("%f",&e4);

me=(e1+e2+e3+e4)/4;

re= 0.125*me;

//notas dos edps

printf("quantos EDPs voce fez nessa materia?\n");
scanf("%f",&qedp);

while(qedp > contador)
{
printf("digite a nota do edp:\n");
scanf("%f",&edp);
acumulador = acumulador+edp;
contador = contador + 1;
}

medp=acumulador/qedp;

redp= 0.125*medp;

notaf=rp+re+redp;

printf("resultados:\n");
printf("provas: %.2f\n", rp);
printf("eixos: %.2f\n", re);
printf("edps: %.2f\n", redp);
printf("****** NOTA FINAL: %.2f ******\n", notaf);
if(notaf>=6){printf("****** APROVADO ******\n");}
else {printf("****** REPROVADO ******\n");}
printf("OBS: esse eh o calculo EXATO, o valor pode ser arredondado no site.\n");

system("pause");
return 0;
}
