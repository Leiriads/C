#include <stdio.h>
#include <stdlib.h>
#include <locale.h> /* acentuação pt.br*/
/*
21)	 Receba a palavra que o usuário digitar e atribua os seguintes valores 5 para vogais e 10 para consoantes, apresente o resultado do valor da palavra digitada. 
*/
char palavra[10];
int i,valor=0;

main(){
setlocale(LC_ALL,"portuguese_brazil");

printf (" Digite uma palavra para calcular o seu preço \n");
printf (" Valores : 5 R$ vogais  10 R$ consoantes \n");
scanf ("%s",&palavra[i]);
i=0;
while(palavra[i] != '\0'){       //esse \0 é o final do vetor entao o enquanto palavra i for diferente do final do vetor faça , no final tem o i++ pra varrer os vetores
	printf ("%d = %d\n",i,palavra[i]);
	
	if(palavra[i]=='a'||palavra[i]=='A'||palavra[i]=='e'|| palavra[i]=='E'||palavra[i]=='i'|| palavra[i]=='I'||palavra[i]=='o'|| palavra[i]=='O' ||palavra[i]=='u'|| palavra[i]=='U'){
		valor=valor+5;
	}else{
		valor=valor+10;
	}
	i++;
}
printf ("\n Sua palavra vale %d R$",valor);

	
return 0;
}