#include <stdio.h>
#include <stdlib.h>
#include <locale.h> /* acentuação pt.br*/

/*19)	Escrever um algoritmo para ler três números inteiros que seriam lados de um triângulo e imprimir o tipo de triângulo 
(equilátero, isósceles, escaleno, retângulo ou não formam um triângulo).  

*/

int x,y,z;

main() {

	setlocale(LC_ALL,"portuguese_brazil");


	printf ("\nQual o valor de X ? \n");
	scanf("%d",& x);
	printf ("\nQual o valor de Y ? \n");
	scanf("%d",& y);
	printf ("\nQual o valor de Z ? \n");
	scanf("%d",& z);

	if (((x+y)>z) && ((z+x)>y) && ((z+y)>x)) {
		if ((x==y) && (y==z)) {
			printf(" Triângulo Equilátero , todos os lados são iguais ");
		} else {
			if((x!=y) && (y!=z)) {
				printf (" Triângulo Escaleno , todos os lados são diferentes ");
			} else {
				printf (" Triângulo Isóceles , comprimento de dois lados são iguais");
			}
		}

	} else {
		printf ("erro isso nao é um triangulo");
	}


	return 0;
}