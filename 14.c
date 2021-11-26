#include <stdio.h>
#include <stdlib.h>
#include <locale.h> /* acentuação pt.br*/

/*14)	Receba 10 números e apresente na ordem crescente e na ordem decrescente. 

*/

int i,x,auxiliar,vetor[10];

main() {

	setlocale(LC_ALL,"portuguese_brazil");

	for (i=0;i<10;i++)  // comando de repetiçao que vai ler valores
	{
		printf("Digite o valor da posição %d :",i); 
		scanf ("%d",&vetor[i]);
	}


	for (i=0;i<10;i++)  
	{
		for (x=i+1;x<10;x++)	// comando para ordenaçao crescente
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
	
	for (i=0;i<10;i++)  //comando para exibir na tela
	{
		printf ("\n O Valor na posição %d agora é %d",i,vetor[i]);
	}

//------------------------------------------------------------------------------------------------
	printf("\n"); //pulando linha
	
for (i=0;i<10;i++)  
	{
		for (x=i+1;x<10;x++)	// comando para ordenaçao crescente
		{
			if (vetor[i]<vetor[x])  // se o vetor no indice i for menor (decrescente) que o vetor no indice x
			{
				auxiliar=vetor[i];   // variavel auxiliar recebe o vetor no indice i
				vetor[i]=vetor[x];   //vetor i  recebe vetor x
				vetor[x]=auxiliar;		//vetor x recebe auxiliar			
			}		
		
		}
		
	}
	
	printf("\n Em ordem decrescente :\n");
	
	for (i=0;i<10;i++)  //comando para exibir na tela
	{
		printf ("\n O Valor na posição %d agora é %d",i,vetor[i]);
	}






	return 0;
}