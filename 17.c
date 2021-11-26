#include <stdio.h>
#include <stdlib.h>
#include <locale.h> /* acentuação pt.br*/

/* 17)Receba o nome do aluno e as notas do 4 bimestre e apresente a média anual do aluno, classificando de 0 à 5: D, 5 a 7: C; de 7 a 9: B e 9 à 10: A.   

*/

int i;
float aux,media,nota[4];
char nome[20];classe;

main() {

	setlocale(LC_ALL,"portuguese_brazil");

	printf ("Digite seu nome:");
	scanf ("%s",&nome);

	for (i=1;i<=4;i++){
		printf ("\n Digite sua nota no %d bimestre : ",i);
		scanf ("%f",&nota[i]);
	}
		media = (nota[1]+nota[2]+nota[3]+nota[4])/4;

	if(media <=5){
		classe='D';
		printf ("\nSua média anual é : %0.2f classe %c ",media,classe);
 		}else{
 			if(media <=7){
 				classe='C';
			 	printf ("\nSua média anual é : %0.2f classe %c ",media,classe);
			 }else{
			 	if(media <=9){
			 		classe='B';
				 	printf ("\nSua média anual é :%0.2f classe %c ",media,classe);
				 }else{
				 	if(media >=10){
				 		classe='A';
					 	printf ("\nSua média anual é : %0.2f classe %c ",media,classe);
					 }
				 }
			 }
		 }



	return 0;
}