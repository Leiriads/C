#include <stdio.h>
#include <stdlib.h>
#include <locale.h> /* acentuação pt.br*/

/*20)	Faça um algoritmo que leia 10 nomes e imprima os 10.

*/

char nome[10][50];
int i;

main() {

	setlocale(LC_ALL,"portuguese_brazil");

	
	for (i=1; i<=10; i++) {

		printf ("\n Digite um nome : \n");
		gets (nome[i]);   //gets vai pegar nomes compostos.
	}
	for (i=1; i<=10; i++) {

		printf ("\n Nome :");
		printf ("%s \n",nome[i]);
	}
	
	return 0;
}