#include <stdio.h>
#include <stdlib.h>
#include <locale.h> /* acentuação pt.br*/

/* 25)	As cartas do baralho possuem valores numéricos, de A = 1 até K = 13, 
leia a mão de um jogador com 5 cartas e apresente a maior e a menor carta, também apresente 
parabéns caso ele possua cartas iguais. 

*/

int i,x,auxiliar,vetor[6],vetorcompara[6],z,cont=0;


main(){

	setlocale(LC_ALL,"portuguese_brazil");

	for (i=1;i<=5 ;i++)  // comando de repetiçao que vai ler valores
	{
		printf("Insira abaixo suas cartas de 1 a 13 %d :",i); 
		scanf ("%d",&vetor[i]);
	}


	for (i=1;i<=5;i++)  
	{
		for (x=i+1;x<=5;x++)	// comando para ordenaçao crescente
		{
			if (vetor[i]>vetor[x])  // se o vetor no indice i for maior(crescente) que o vetor no indice x
			{
				auxiliar=vetor[i];   // variavel auxiliar recebe o vetor no indice i
				vetor[i]=vetor[x];   //vetor i  recebe vetor x
				vetor[x]=auxiliar;		//vetor x recebe auxiliar			
			}		
		
		}
		
	}

	
	
	for (i=1;i<=5;i++){  //comando para exibir na tela
	printf ("\n %d",vetor[i]);
	
	}
   printf ("\n");
   printf("\n Sua mão : :\n");

   	for (i=1;i<=5;i++){  //comando para exibir na tela
	
		for (z=i+1;z<=5;z++){
			if(vetor[i]==vetor[z]){
				printf ("\n Parabéns a carta %d se repete ",vetor[i]);
		 }
			
		}
	
	
		
		
	}
	

	printf ("\n");
	printf ("\n Menor carta : %d ",vetor[1]); //1 posição fica o menor
	printf ("\n");
	printf ("\n Maior carta : %d ",vetor[5]); //ultima prosiçao fica o maior
	printf ("\n");
//------------------------------------------------------------------------------------------------

	




	return 0;
}