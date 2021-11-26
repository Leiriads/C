#include <stdio.h>
#include <stdlib.h>
#include <locale.h> /* acentuação pt.br*/

/*10)	As temperaturas da semana foram:
Temperatura 	Umidade
39ºC	        10%
45ºC 			14%
41ºC			12%
42ºC			9%
38ºC			7%
Apresente a média das temperaturas e umidade nesta semana.

*/

float temperatura,umidade,mediatemp,mediaumi,total,total2;
int contador;

main() {

	setlocale(LC_ALL,"portuguese_brazil");

	total=0;
	for (contador=1; contador<=5; contador++) {

		printf ("\n Digite o valor da temperatura : \n");
		scanf ("%f",&temperatura);
		total=total+temperatura;
	}
	mediatemp = total/5;
	
	for (contador=1; contador<=5; contador++) {

		printf ("\n Digite o valor da umidade : \n");
		scanf ("%f",&umidade);
		total2=total2+umidade;
	}
	mediaumi= total2/5;
	
	printf ("\n A média de temperatura é  : %0.2f",mediatemp);
	printf ("° Celsius");
	printf ("\n A média de umidade é: %0.2f",mediaumi);
	printf ("%  %");

	return 0;
}