#include <stdio.h>
#include <stdlib.h>
#include <locale.h> /* acentuação pt.br*/

/*setlocale(LC_ALL,"portuguese_brazil");/ acentuação pt.br
	3)	Elabore um programa que leia um número. Se positivo armazene-o em A, se for negativo, em B. No final mostrar o resultado. */

float numero,a,b;


main() {
	
	setlocale(LC_ALL,"portuguese_brazil");
   
    printf("\n Digite um valor \n ");
    scanf("\n %f",& numero);
    
	if (numero >=1){
	a=numero;	
	printf("\n  O numero é positivo e foi armazenado em A : %0.2f \n",a);
	}else{
	b=numero;	
	printf("\n  O numero é negativo e foi armazenado em B : %0.2f \n",b);	
	}
	printf("\n");
	system("pause");
	return 0;
}