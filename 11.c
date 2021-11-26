#include <stdio.h>
#include <stdlib.h>
#include <locale.h> /* acentuação pt.br*/

/*11)	Uma empresa possui 50 vendedores que ganham por comissão sobre cada produto vendido. Cada vendedor em um determinado mês vendeu x produtos. 
A emprese deseja obter um relatório com o Nome, Total de vendas e o valor pago ao vendedor que vendeu mais e o vendedor que vendeu menos, a comissão da empresa é de 15%.
*/

int i,x,auxiliar,vetor[10];
char nome[3][50],auxiliarr[3][50];

int main(){
   // Seção de declarações das variáveis

   float total, perc[10], v[10];
   int i, pos1=0, pos2=0;
   char nome_vend[10][100]; //armazena o nome dos vendedores
   float  maior=0.0, menor=99999.9; 

   setlocale(LC_ALL, "Portuguese"); /*para o printf() mostrar palavras com acentuação*/

    // Área para inserir os dados de cada vendedor

   for(i=0;i<3;i++) /*a variável de controle 'i' começa contando em zero e vai até 9 */
   {
      printf("\n Informe o nome do %d ° vendedor: ",i+1);  /*i+1 é pra imprimir  desse jeito : 1° vendedor porque i começa em zero*/
      scanf("%s",nome_vend[i]); /*1° scanf*/
      printf("Informe o total das vendas do(a) %s: R$ ",nome_vend[i]);   /*A técnica que a gente utilizou no printf acima é para imprimir o total de vendas do vendedor com seu respetivo nome digitado  no 1° scanf*/
      scanf("%f",&v[i]);
      printf("Informe o percentual de comissao do %s:",nome_vend[i]);
      scanf("%f",&perc[i]);
      printf("\n");
   }

   for(i=0;i<3;i++){  //Maior dos salários(total+percentual)
      if(v[i]>maior){
      maior=v[i]*((perc[i]/100)+1);
      pos1=i;
      }
   }

   for(i=0;i<10;i++){  //Menor dos salários(total+percentual)
      if(v[i]<menor){
      menor=v[i]*((perc[i]/100)+1);
      pos2=i;
      }
   }   

   for(i=0;i<3;i++){  /*Impressão dos vendedores e seus respectivos salários+percentual de venda*/
      printf("Vendedor: %s ",nome_vend[i]);
      if(v[i]>0){
          total= v[i]*((perc[i]/100)+1);
          printf("\t\t Valor a receber: R$ %.2f .",total);
      }

      printf("\n");
   }

    for(i=0;i<3;i++){
      if(pos1==i){
      printf("\n O maior valor a receber : R$ %.2f ,quem vai receber é o %s .",maior,nome_vend[i]);
      }
   }

   for(i=0;i<3;i++){
      if(pos2==i){
      printf("\n O menor valor a receber: R$ %.2f ,quem vai receber é o %s .", menor,nome_vend[i]);
      }
   }      
return 0; }
