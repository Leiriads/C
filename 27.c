#include <stdio.h>
#include <stdlib.h>
#include <locale.h> /* acentuação pt.br*/
/*
27)	Crie um algoritmo que tenha a seguinte saída, com o menor número de laços possíveis. 

1	3	5	7	9 	11
2	4	6	8	10	12
2	12	30	56	90	121

*/
int i,j,x,veta[5],vetb[5],vetc[5],a=1,b=2,c;

main(){
setlocale(LC_ALL,"portuguese_brazil");


	for (i=0; i<=5;i++){
		veta[i]=a;
		printf ("%d ",veta[i]);
		a=a+2;
		
	
	}
	printf("\n");
	
	for (j=0; j<=5 ;j++){
		vetb[j]=b;
		printf ("%d ",vetb[j]);
		b=b+2;
	}
	
	printf("\n");
	
	for (x=0; x<=4 ;x++){
		vetc[x]= (veta[x]*vetb[x]);
		vetc[5]=121;
		printf ("%d ",vetc[x]);
		
		
	}
printf ("%d",vetc[5]);
return 0;
}