#include <stdio.h>
#include <stdlib.h>
#include <locale.h> /* acentuação pt.br*/

/* 15)	Imprima os números pares até 100.

*/

int x;

main() {

	setlocale(LC_ALL,"portuguese_brazil");

	printf ("\n Mostrando os numeros pares até 100 : \n \n");
	
	x=2;
	
	while (x<=100)   //enquanto
	{
		printf ("%d \n",x);
		x+=2; // é igual a x=x+2	
	}

	return 0;
}