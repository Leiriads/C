#include <stdio.h>
#include <stdlib.h>
#include <locale.h> /* acentuação pt.br*/

/* 18)Escrever algoritmo par ler os valores inteiros para as variáveis J e K, trocar os valores de modo que J passe a ter o valor de K e K passe a ter o valor 
    original de J. Exibir os valores originais de J e K e os valores após a troca.  

*/

int J,K,aux_J,aux_K;



main() {

	setlocale(LC_ALL,"portuguese_brazil");

	printf ("\n Digite um valor para J : ");
	scanf ("%d",&J);
	
	printf ("\n Digite um valor para K : ");
	scanf ("%d",&K);
	
	aux_J=K;
	aux_K=J;
	
	printf ("\n===============================");
	printf ("\n antigo valor de J é : %d  ",J);
	printf ("\n antigo valor de K é : %d  ",K);
	printf ("\n===============================");
	printf ("\n o novo valor de J é : %d ",aux_J);
	printf ("\n o novo valor de K é : %d ",aux_K);
	printf ("\n===============================");
	



	return 0;
}