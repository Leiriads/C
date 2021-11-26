#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
/*
-----------Alunos--------------

GABRIEL LEIRIA EPIFANIO RODRIGUES 
MARCELO MARQUES MEYER 

------------------------------*/

int menu;//variavel usada na seleção do menu inicial
char ncli[30];
char gsco[50];
int filme, gene, valloc, dataent;
int geneesco;
int continua, contador,usucad;//usucad contador de usuario cadastrado.
float quantidadepreco,precofilme,valorfilme; //¹ contador de quantos filmes tem no carrinho/ ² variavel para atribuir o (valor * quantidade) / ³ valor fixo do filme R$ linha 186

									 
float juros,calculo,multa,multabase;//variaveis para calcular a multa de atraso linha 214,215,216,217

//procedimento cadastro
//-------------------------------------------------------------------------------
void cadastrop() {
	
	printf ("Bem vindo(a) ao cadastro de Cliente \n");
	printf("\n");
	printf("Qual Nome do Cliente \n");
	printf("\n");
	scanf("%s",&ncli);
	usucad=1;
	printf("\n");
	printf("**Cliente Cadastrado ! \n");
	system("pause");

}
//procedimento aluguel
//-------------------------------------------------------------------------------
void aluguelp() {
	if (usucad== 0){    //se contador de usuario for igual a 0 significa que ele nao pode alugar sem se cadastrar.
		printf("\n");
		printf("------------------------------\n");
		printf("Primeiro Cadastre um usuário.\n");
		printf("------------------------------\n");
		printf("\n");
		system ("pause");
	}
	else     //se não for igual a 0 ele vai poder alugar avontade.
	{
	do {  
		system ("cls");
		printf("Qual Genero ? :\n");
		printf("1-Guerra : 2-Romence : 3-Comédia\n");
		scanf("%d",&gene);
		system("cls");
		printf("%s",&ncli);
		printf(" Qual Filme Deseja escolher\n\n");
		switch(gene) {
			case 1:
				printf("1 - A Lista de Schindler\n");
				printf("2 - O Resgate do Soldado Ryan\n");
				printf("3 - Bastardos Inglórios\n");
				scanf("%d",&geneesco);
				switch(geneesco) {
					case 1:
						printf("\nFilme escolhido foi");
						printf(" A Lista de Schindler");
						gsco[50] = "A_Lista_de_Schindler";
						quantidadepreco = quantidadepreco+1; //Quantidade de filme no carrinho

						break;
					case 2:
						printf("\nFilme escolhido foi");
						printf(" O Resgate do Soldado Ryan");
						gsco[50] = "O_Resgate_do_Soldado_Ryan";
						quantidadepreco = quantidadepreco+1;

						break;
					case 3:
						printf("\nFilme escolhido foi");
						printf(" Bastardos Inglórios");
						gsco[50] = "Bastardos_Inglórios";
						quantidadepreco = quantidadepreco+1;

						break;
				}
				break;
			case 2:
				printf("1 - Um Lugar Chamado Notting Hill\n");
				printf("2 - Closer\n");
				printf("3 - Uma Linda Mulher\n");
				scanf("%d",&geneesco);
				switch(geneesco) {
					case 1:
						printf("\nFilme escolhido foi");
						printf(" Um Lugar Chamado Notting Hill");
						gsco[50] = "Um Lugar Chamado Notting Hill";
						quantidadepreco = quantidadepreco+1;

						break;
					case 2:
						printf("\nFilme escolhido foi");
						printf(" Closer");
						gsco[50] = "Closer";
						quantidadepreco = quantidadepreco+1;

						break;
					case 3:
						printf("\nFilme escolhido foi");
						printf(" Uma Linda Mulher");
						gsco[50] = "Uma Linda Mulher";
						quantidadepreco = quantidadepreco+1;

						break;
				}
				break;

			case 3:
				printf("1 - Eu, Eu Mesmo & Irene\n");
				printf("2 - A Missy Errada\n");
				printf("3 - Família do Bagulho\n");
				scanf("%d",&geneesco);
				switch(geneesco) {
					case 1:
						printf("\nFilme escolhido foi");
						printf(" Eu, Eu Mesmo & Irenel");
						gsco[50] = "Eu, Eu Mesmo & Irenel";
						quantidadepreco = quantidadepreco+1;

						break;
					case 2:
						printf("\nFilme escolhido foi");
						printf(" A Missy Errada");
						gsco[50] = "A Missy Errada";
						quantidadepreco = quantidadepreco+1;

						break;
					case 3:
						printf("\nFilme escolhido foi");
						printf(" Família do Bagulho");
						gsco[50] = "Família do Bagulho";
						quantidadepreco = quantidadepreco+1;

						break;
				}
				break;

			default:
				printf("Opção Invalida...\n\n\n");
		}



		printf("\n");
		printf("\nTecle 'S' se deseja adicionar mais um filme ao seu carrinho.\n");
		printf("\n");
		printf("Pressione qualquer Tecla para SAIR\n");
		continua = getch();
		system ("cls");

	} while (continua == 's');	
		
		
	}





}
//procedimento caixa
//------------------------------------------------------------------------------
void caixap() {

	if (quantidadepreco <= 0) {  //se o contador for menor ou igual a 0 significa que não foi alugado nenhum filme. Então o caixa nao vai "abrir"
		printf ("----------------------------------------- \n");
		printf ("Erro nenhum produto no carrinho !\n");
		printf ("\n");
		printf ("----------------------------------------- \n");
		system ("pause");
	} else {
		printf("\n ");
		printf("\n%s",&ncli);
		printf(" Deverá entregar o filme na ");
		time_t mytime;
		mytime = time(NULL);
		struct tm tm = *localtime(&mytime);

		printf ("Data: %d/%d/%d/\n", tm.tm_mday + 2, tm.tm_mon + 1, tm.tm_year + 1900);
		printf ("\n");
		printf ("----------------------------------------- \n");
		printf ("Seu carrinho contém %1.0f",quantidadepreco);
		if (quantidadepreco <= 1) {
			printf (" Filme \n");
		} else {
			printf (" Filmes \n");
		}
		printf("\n");

		valorfilme=15;//atribuindo o valor do filme a 15 conto
		printf ("O valor de cada filme é 15 R$ ! \n");
		printf ("\n");
		precofilme = (quantidadepreco*valorfilme); //quantidade de filme * preço
		printf ("----------------------------------------- \n");
		printf ("O preço a pagar pela locação é : %0.2f", precofilme);
		printf (" R$");
		
		printf ("\nA multa por ");
		printf ("%1.f",multa);
		printf (" dia de atraso é : %0.2f", calculo * quantidadepreco);
		printf (" R$");
		printf ("\nO preço a pagar pela locação é : %0.2f", precofilme + calculo * quantidadepreco);
		printf (" R$");
		printf ("\n");
		printf ("----------------------------------------- \n");
		usucad=0; //resetando o usuario cadastrado após finalizar a venda.
		system ("pause");
		quantidadepreco = 0;//resetando o contador de filmes após a venda.


	}




}

//procedimento devolução / multa
//-------------------------------------------------------------------------------
void devolucaop() {
	printf ("Bem vindo (a) ao calculo de devolução \n");
	printf ("\n");
	printf ("Quantos dias após o vencimento o filme foi devolvido? \n");
	scanf ("%f",& multa);
	if (multa > 0) {
		printf("\n");
		printf("Após o prazo estipulado, a multa é de 10 R$ \n");
		printf("\n");
		printf ("Acréscimo de 2,50 R$ Ao dia.\n");
		
		multabase = 10; //multa base em 10 R$ passou de 1 dia sem devolver ja é taxado , e acrescenta 2,50 ao dia
		juros = 2.5;
		calculo = multabase + (multa*juros);
		
		printf("\n");
		printf ("-------------------------------------- \n");
		printf ("Multa de : %0.2f" , calculo);
		printf (" R$ ");
		printf (" por filme alugado\n");
		printf ("-------------------------------------- \n");
		printf("\n");
		system("pause");
	} else {
		printf ("------------------------------------------------------------ \n");
		printf ("Obrigado por devolver a tempo ! pegue seu pirulito na saida.\n");
		printf ("------------------------------------------------------------ \n");
		printf("\n");
		system("pause");
	}



}

//-------------------------------------------------------------------------------
//aqui começa o "programa"  como o inicio do visualg
//-------------------------------------------------------------------------------

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese_brazil");  //sempre colocar isso para printf em pt-br !!!!

	do {   //No (do…while) o bloco de comandos é executado pelo menos uma vez de forma obrigatória, independente do resultado da expressão lógica.
		system ("cls");
		printf("----------------------------\n");
		printf ("Bem vindo a Locadora topzera \n");
		printf ("\n");
		printf (" 1 - Cadastro Cliente \n");
		printf (" 2 - Aluguel de filmes \n");
		printf (" 3 - Devolução  \n");
		printf (" 4 - Caixa \n");
		printf (" 5 - Sair \n");
		printf ("\n");
		printf("----------------------------\n");
		printf ("Selecione uma opção. \n");
		scanf ("%d",& menu);

		system("cls");
		switch (menu) {         //estrutura escolha para selecionar as opções.
			case 1:
				cadastrop();

				break;

			case 2:             //cada caso chama um procedimento.
				aluguelp();

				break;

			case 3:
				devolucaop();

				break;
			case 4:
				caixap();

				break;

			case 5:
				printf ("-------------------------\n");
				printf ("Obrigado e volte sempre! \n");
				printf ("-------------------------\n");
				exit (0);

				break;

			default:        //qualquer número digitado diferente dos listados , printa essa mensagem de erro.
				printf ("\n");   
				printf ("---------------------\n");
				printf ("Erro opção inválida \n");
				printf ("---------------------\n");
				printf ("\n");
				system("pause");
		}

	} while (menu);

	return 0;
}