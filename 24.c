#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* 24)	Os jogadores fazem cadastro no time 1 ou time 2, quando terminar o cadastro
apresentar os nomes dos jogadores de cada time, caso um dos times tenha menos jogadores que outros, solicitar o cadastro e exibir os jogadores cadastrados.

*/

int timeopc,op,time,i=0,j,k,jogadorescont1=0,jogadorescont2=0;
char time1[10][50]; //linha / coluna vai até 49 letras pq tem o /0 q indica o final da string
char time2[10][50];
int loop=1,loop2=1;
char valida,resetmenu='m';
int quantia1=0,quantia2=0; //contador de jogador cadastrado


void mostrarcadastrado() {
	printf("\n INTEGRANTES DO TIME 1 : \n");

	printf("\n jogadores cadastrados ",jogadorescont1);
	for(j=0; j<=10; j++) {
		printf ("\n JOGADOR : %s",time1[j]);
	}
	printf("\n");
	printf("\n INTEGRANTES DO TIME 2 : \n");
	printf ("\n jogadores cadastrados ",jogadorescont2);
	for(k=0; k<=10; k++) {
		printf ("\n JOGADOR : %s",time2[k]);
	}

}





main() {
	setlocale(LC_ALL,"portuguese_brazil");
	quantia1=0;
	quantia2=0;
do{
		resetmenu='m';
system ("cls");
		printf ("======================");
		printf("\n - 1 Escolha time 1 \n - 2 Escolhe time 2  \n - 3 Mostra os jogadores  \n - 4 para sair \n");
		printf ("======================\n");
		scanf ("%d",&time);


switch(time){

		case 1 :

			printf("\n Time 1");

			while(loop>=1) {
				loop=1;
				printf("\n Digite seu nome : \n ");
				scanf ("%s",&time1[i]);
				quantia1++;
				loop++;
				printf("\n Deseja continuar ? (s/n) \n");
				scanf("%s",&valida);


				if(valida=='s'|| valida=='S') {
					loop=1;
					i++;
					jogadorescont1++;
					resetmenu=='m';
				} else {
					break;
				

				}

			}
		break;
//===================================================================================================	
		case 2: 
			printf("\n Time 2");
//---------------------------------------------
			while(loop2>=1) {
				loop2=1;
				printf("\n Digite seu nome : \n ");
				scanf ("%s",&time2[i]);
				quantia2++;
				loop++;
				printf("\n Deseja continuar ? (s/n) \n");
				scanf("%s",&valida);


				if(valida=='s'|| valida=='S') {
					loop2=1;
					i++;
					jogadorescont2++;
					resetmenu=='m'; //'m' o loop continua
				} else {
					break;
				
				}

			}
		break;
//===================================================================================================
		case 3: 
		
			if(quantia1 != quantia2) {
				printf ("\n =========================================================================");
				printf ("\n  Os 2 times não tem o mesmo numero de jogadores , cadastre novamente ");
				printf ("\n =========================================================================\n");
				mostrarcadastrado();
				if (quantia1 < quantia2) {
					printf ("\n =========================================================================");
					printf (" \n O time 1 possui jogador a menos , cadastre mais integrantes ! ");
					printf ("\n =========================================================================\n");
					printf("\n");
					system ("pause");
				} else {
					printf ("\n =========================================================================");
					printf(" \n O time 2 possui jogador a menos , cadastre mais integrantes !");
					printf ("\n =========================================================================\n");
					system ("pause");
					printf("\n");
				}


			} else {
				mostrarcadastrado();
				printf ("\n ==============================");
				printf("\n     Um bom jogo a todos !!!! ");
				printf ("\n ============================== \n");
				system("pause");
				return 0;

			}


		break;

		case 4 : 
			printf("\n -----------------------------------------\n ");
			printf (" Obrigado por usar o topper seleção v3.490");
			printf("\n -----------------------------------------\n");
			system ("pause");
			return 0;
		break;

		default :
			printf("-------------------------");
			printf("\n Erro opção inválida .");
			printf("-------------------------");
		break;
		







}//chave do switch
}while(resetmenu='m');
	return 0;
}