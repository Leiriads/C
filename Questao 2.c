#include <stdio.h>
#include <stdlib.h>
#include <locale.h> /* acentuação pt.br*/

/*setlocale(LC_ALL,"portuguese_brazil");/ acentuação pt.br
	2)	Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas: 
	a) Para homens: (72.7*h) - 58	
    b)  Para mulheres: (62.1*h) - 44.7 
    (h = altura) */

float peso,altura,calculo;
char sexo;

main() {
	
	setlocale(LC_ALL,"portuguese_brazil");
   
    printf("\n Qual a sua altura ?\n ");
    scanf("\n%f",& altura);
    
   	printf("\n Qual seu sexo Homen (h) ou Mulher (m) ? \n");
    scanf("\n%c",&sexo);
	
	if (sexo =='h'){
		
	calculo = (72.7 * altura) - 58;	
	printf("\n  homen O seu peso ideal é de : %0.2f \n",calculo);
	}else{
	calculo = (62.1 * altura) - 44.7;	
	printf("\n mulher O seu peso ideal é de : %0.2f \n",calculo);	
	}
	printf("\n");
	system("pause");
	
	return 0;
}