#include <stdio.h>
#include <stdlib.h>
#include <locale.h> /* acentuação pt.br*/

/*setlocale(LC_ALL,"portuguese_brazil");/ acentuação pt.br
	7)	Faça um programa que solicita ao usuário um número inteiro com três dígitos e exibe o número invertido (ex: usuário digitou 136, programa exibirá 631 */


int numero,unidade,dezena,centena,invertido;


main() {
	
	setlocale(LC_ALL,"portuguese_brazil");

    printf("\n Digite um numero de 3 digitos. \n ");
    scanf("\n %d",& numero);
    
    unidade = numero %10;	
    dezena = (numero %100)/10;
    centena = numero/100;
	
	invertido = unidade*100 + dezena*10 + centena;	
	printf ("\n o numero digitado foi : %d \n",numero);
	printf ("\n");
	printf("\n O valor invertido é %d \n",invertido);
	
	return 0;
}