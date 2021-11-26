#include <stdio.h>
#include <stdlib.h>
#include <locale.h> /* acentuação pt.br*/
/*
4)	Crie um programa que converta ano luz para Km, 
*/


main(){
setlocale(LC_ALL,"portuguese_brazil");

double x,resultado;
float anoluz;



x=9460730777119.56; // valor retirado da internet

printf (" \n Digite quantos anos deseja converter para km \n ");
scanf ("\n %f",&anoluz);

resultado=anoluz*x;

printf (" %0.2f Ano luz equivale a :  %0.2f Km de distância",anoluz,resultado);


return 0;
}