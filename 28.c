#include <stdio.h>
#include <stdlib.h>
#include <locale.h> /* acentuação pt.br*/
/*
28)Imprima a seguinte saída:
*/
int i,j;
main(){
setlocale(LC_ALL,"portuguese_brazil");
	for (i=1; i<=10;i++){
		printf(" 0");
	}
	printf("\n");
	
	for (i=2 ; i<5 ;i++){
		printf(" 0");
			for (j=2; j<10;j++){
				printf("  ");
			}
			printf(" 0 \n");
	}
	for (i=1;i<=10;i++){
		printf(" 0");
	}
return 0;
}