#include <stdio.h>
#include <stdlib.h>
#include <locale.h> /* acentuação pt.br*/
/*
26)	 Para calcular um frete de caminhão, o gerente da empresa primeiro obtém o
volume que a carga vai ocupar e através dele estimar o peso e assim calcular o
valor do frete.
Calcule o frete multiplicando o volume da mercadoria por 300kg/m³;
Utilize a fórmula: ALTURA x LARGURA x COMPRIMENTO x (Quantidade de
volumes) x 300 (FATOR).
Ex: 1 m x 1m x 1m x 1 x 300 = 300 kg/ m³
Para cálculo: 1 kg / m³ será cobrado R$ 0,20


*/
float a,l,c,v,resultado,frete,preco=0.20;

main(){
setlocale(LC_ALL,"portuguese_brazil");
printf (" Bem vindo ao caminhão do frete \n");
printf (" insira abaixo os valores para efetuar o calculo do frete.\n");
printf (" \n Primeiro vamos calcular o volume.\n");
printf (" Digite a altura \n");
scanf ("%f",&a);
printf (" Digite a largura \n");
scanf ("%f",&l);
printf (" Digite o comprimento \n");
scanf ("%f",&c);
v = (a*l*c);

frete=v*300;

resultado=(frete*0.20);
printf (" Seu frete ficou no total de : \n ");
printf ("%.2f R$ \n",resultado);
printf (" Obrigado , volte sempre!");
	
return 0;
}