#include <stdio.h>
#include <stdlib.h>
#include <locale.h> /* acentuação pt.br*/

/*22)Crie um programa que receba o valor da cotação em Dólar e Euro, também valor em reais a ser convertido, apresente os valores da conversão nas respectivas moedas. 

*/

float i,cotdollar,coteuro,valord,valore,valor,europarareal,dollarparareal;
float europaradollar,europarareal;
int menu;




main() {

	setlocale(LC_ALL,"portuguese_brazil");


printf ("\n Digite um valor \n");
scanf (" %f",&valor);		

printf ("\nDigite a cotação do Dollar \n");
scanf (" %f",&cotdollar);	

printf ("\n Digite a cotação do Euro \n");
scanf (" %f",&coteuro);	

valord=valor;
valore=valor;

dollarparareal  = valord/cotdollar;   //5.59
europarareal = valore/coteuro;    // 6.50



printf("\n %0.2f reais em dollar  é : %0.2f",valor,dollarparareal);
printf("\n");
printf("\n %0.2f reais em euro é : %0.2f",valor,europarareal);
printf("\n");
printf("\n %0.2f Real em Real é : %0.2f",valor,valor);


//-----------------------------






	
return 0;
}

