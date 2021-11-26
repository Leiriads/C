#include <stdio.h>
#include <stdlib.h>
#include <locale.h> /* acentuação pt.br*/

/*setlocale(LC_ALL,"portuguese_brazil");/ acentuação pt.br
	3)	Elabore um programa que leia um número. Se positivo armazene-o em A, se for negativo, em B. No final mostrar o resultado. */


int numero,i,p;


main() {
	
	setlocale(LC_ALL,"portuguese_brazil");
   
    printf("\n Digite um valor \n ");
    scanf("\n %d",& numero);
    
	if (numero%2 == 0){
	p=numero;	
	printf("\n  O numero é par e foi armazenado em P : %d \n",p);
	
	}else{
	i=numero;	
	printf("\n  O numero é impar e foi armazenado em I : %d \n",i);	
	
	}
	printf("\n");
	system("pause");
	return 0;
}