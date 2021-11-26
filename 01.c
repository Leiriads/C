#include <stdio.h>
#include <stdlib.h>
#include <locale.h> /* acentuação pt.br*/



float raio,area,pi;

main() {
	/*setlocale(LC_ALL,"portuguese_brazil");/ acentuação pt.br*/

	setlocale(LC_ALL,"portuguese_brazil");
    pi=3.14;
	
	printf("\n Qual o valor do raio ?: ");
	
	scanf("\n %f",& raio);
	
	area = (pi*(raio*raio));
	
	printf("\n  A area é igual a %0.2f ",area);
	
	system("pause");
	return 0;
}