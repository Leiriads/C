#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* 23)	Uma empresa concederá um aumento de salário aos seus funcionários, variável de acordo com o cargo, conforme a tabela abaixo. Faça um programa que 
leia o salário e o código do cargo de um funcionário e calcule o seu novo salário. Se o cargo do funcionário não estiver na tabela, ele deverá, então, receber 
15% de aumento. Mostre o salário antigo, o novo salário e a diferença entre ambos. 
*/

 int codigo;
 float salario;
 float s1,s2,s3,s4,final,result;
main() {
	setlocale(LC_ALL,"portuguese_brazil");
	//system("chcp 1252 > nul");
    printf("---------------------------------\n");
    printf("Digite o salario do funcionario!\n");
    scanf("%f",&salario);
    printf("Digite o codigo do cargo !\n");
    printf("---------------------------------\n");
    printf ("Códigos : 101 , 102 , 103  \n");
	printf ("Qualquer outro valor será considerado codigo padrão! \n");
    printf("---------------------------------\n");
    scanf("%d",&codigo); 
        
      
switch (codigo){
	case 101 :
		printf("\nSeu acréscimo na empresa é de 5 % %\n");
      	s1=(salario*0.05);
      	printf("\n");
      	final=(s1+salario);
      	
      	printf("Seu salario inicial : %0.2f \n",salario);
		printf("Quanto ganhou de bonus : %0.2f ",s1);
      	printf("\n");
      	printf("O salario com Acréscimo fica: %0.2f",final);
	break;
	
	case 102 :
		printf("\nSeu acréscimo na empresa é de 7,5 % %");
      	s2=(salario*0.075);
      	printf("\n");
      	final=(s2+salario);
      	printf("Seu salario inicial : %0.2f \n",salario);
		printf("Quanto ganhou de bonus : %0.2f ",s2);
      	printf("\n");
      	printf("O salario com Acréscimo fica: %0.2f",final);
		
	break;
	
	case 103 :
		printf("\nSeu acréscimo na empresa é de 10 % %");
      	s3=(salario*0.10);
      	printf("\n");
      	final=(s3+salario);
      	printf("Seu salario inicial : %0.2f \n",salario);
		printf("Quanto ganhou de bonus : %0.2f ",s3);
      	printf("\n");
      	printf("O salario com Acréscimo fica: %0.2f",final);
	break;
	
	default:
		printf("\nSeu acréscimo na empresa é de 15 % %");
      	s4=(salario*0.15);
      	printf("\n");
      	final=(s4+salario);
      	printf("Seu salario inicial : %0.2f \n",salario);
		printf("Quanto ganhou de bonus : %0.2f \n",s4);
      	printf("O salario com Acréscimo fica: %0.2f",final);
    break;
}
      
    
	return 0;
}