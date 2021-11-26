#include <stdio.h>
#include <stdlib.h>
#include <locale.h> /* acentuação pt.br*/

/*setlocale(LC_ALL,"portuguese_brazil");/ acentuação pt.br
	6)	Faça um programa que calcula os gastos com combustível em uma viagem. O programa deve solicitar ao usuário a distância a ser percorrida em Km,
	 o consumo do carro em Km/litro e o preço do litro do combustível. Como resposta o programa deverá informar qual o valor em R$ a ser gasto com combustível 
	 na viagem. */


float distancia,kmlitro,preco,resultado;


main() {
	
	setlocale(LC_ALL,"portuguese_brazil");
   
    printf("\n Qual a distancia a ser percorrida em Km ? \n ");
    scanf("\n %f",& distancia);
    
    printf("\n Quantos Km por litro seu carro faz ? \n ");
    scanf("\n %f",& kmlitro);
    
    printf("\n Qual o preço do combustivel ? \n ");
    scanf("\n %f",& preco);
	
	resultado=(preco*kmlitro)*distancia;
	
	printf("\n O valor gasto em R$ é : ? \n %0.2f",resultado);
	printf("\n");

	return 0;
}