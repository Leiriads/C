#include <stdio.h>
#include <stdlib.h>
#include <locale.h> /* acentuação pt.br*/

/* 12)	Dados três valores distintos, fazer um algoritmo que, após a leitura destes dados coloque-os em ordem crescente.  

*/

int i,x,auxiliar,vetor[10];

main() {

	setlocale(LC_ALL,"portuguese_brazil");

	for (i=1;i<4;i++)  // comando de repetiçao que vai ler valores
	{
		printf("Digite o valor da posição %d :",i); 
		scanf ("%d",&vetor[i]);
	}


	for (i=1;i<4;i++)  
	{
		for (x=i+1;x<4;x++)	// comando para ordenaçao crescente
		{
			if (vetor[i]>vetor[x])  // se o vetor no indice i for maior(crescente) que o vetor no indice x
			{
				auxiliar=vetor[i];   // variavel auxiliar recebe o vetor no indice i
				vetor[i]=vetor[x];   //vetor i  recebe vetor x
				vetor[x]=auxiliar;		//vetor x recebe auxiliar			
			}		
		
		}
		
	}

	printf("\n Em ordem crescente :\n");
	
	for (i=1;i<4;i++)  //comando para exibir na tela
	{
		printf ("\n O Valor na posição %d agora é %d",i,vetor[i]);
	}

//------------------------------------------------------------------------------------------------

	




	return 0;
}