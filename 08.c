#include <stdio.h>
#include <stdlib.h>
#include <locale.h> /* acentuação pt.br*/

/*setlocale(LC_ALL,"portuguese_brazil");/ acentuação pt.br
	8)	Faça um programa que solicita ao usuário uma quantidade de segundos, converte em horas, minutos e segundos e exibe na tela.*/


float numero,segundos,minutos,horas;


main() {
	
	setlocale(LC_ALL,"portuguese_brazil");

    printf("\n Digite uma quantidade em segundos \n ");
    scanf("\n %f",& numero);
    
    segundos= numero ;	
    minutos = numero/60;
    horas = numero/3600;
	
	printf ("\n o numero digitado foi : %0.2f ",segundos);
	printf (" segundos.\n");
	printf ("\n Convertendo ==============  \n");
	printf ("\n");
	printf ("\n Segundos : %0.2f",segundos);
	printf ("\n Minutos : %0.2f ",minutos);
	printf ("\n Horas : %0.6f ",horas);
	
	return 0;
}