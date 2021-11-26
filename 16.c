#include <stdio.h>
#include <stdlib.h>
#include <locale.h> /* acentuação pt.br*/

/*16)	Imprima os números primos até 200.  
*/


main() {

setlocale(LC_ALL,"portuguese_brazil");
int numero,numerousuario,i,x,contresto=0;
printf("\n Este programa mostra os numeros primos.\n ");
//Caso o usuario queira  digitar o numero limite para saber se o numero é primo basta apagar as 2 barras na linha 15 e 16  e apagar a linha 18 inteira !!!! :)
//printf ("\n Digite ate quantos quer descobrir se o numero é primo :\n"); 
//scanf("%d",&numerousuario);

numerousuario=200;

while(x<=numerousuario){

x+=1; // é igual a x=x+1
numero=x;
	for (i=1;i<=numero;i++){
		if (numero%i ==0){
			contresto++;
		}
	
	}

	if(contresto==2){
		printf("\n %d  Primo",numero); //mostrando na tela o numero que é primo
		contresto=0; //zerando contador de resto
		
	}else{
		contresto=0; //zerando contador de resto
	}

}


	return 0;
}