#include <stdio.h>
#include <stdlib.h>
#include <locale.h> /* acentuação pt.br*/

/*setlocale(LC_ALL,"portuguese_brazil");/ acentuação pt.br
	9)	Crie um programa que realize a conversão de graus Célcius para Fahrenheit e para graus Kelvin. A fórmula para conversão: 
    C = 5/9 (F-32)   |   K = C + 273       
*/

float celsius,fahrenheit,kelvin;
main() {
	
setlocale(LC_ALL,"portuguese_brazil");

printf ("\n Digite o valor em Celsius : \n");
scanf ("%f",&celsius);

fahrenheit=(celsius*1.8)+32;
kelvin = celsius+274;

printf ("\n Convertido em Fahrenheit : %0.2f",fahrenheit); 
printf ("\n");  
printf ("\n Convertido em Kelvin : %0.2f",kelvin); 

	return 0;
}