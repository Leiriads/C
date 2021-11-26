#include <stdio.h>
#include <stdlib.h>
#include <locale.h> /* acentuação pt.br*/
#include <string.h> //strings
/*
13)	Uma empresa deseja contar quanto veículo são de determinada marca, 
receba a marca e o nome do veículo e apresente ao final do programa quantos são da marca FIAT.
*/

char carro[50];
char fiat[50]="FIAT";
int i,contador;

main(){

for(i=1;i<=5;i++){

printf ("\n Digite a marca do carro em letra maiuscula. \n \n");
gets(carro);


if(strcmp(carro,fiat)){
	printf("\n-----------\n");
}else{
	printf("\n Fiat detectado\n");
	contador++;
}

}

printf (" a marca FIAT foi detectada %d vezes.",contador);


return 0;
}




 

  

