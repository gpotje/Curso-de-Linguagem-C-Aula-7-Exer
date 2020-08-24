#include <stdio.h>
#include <locale.h> 


main(){
	setlocale(LC_ALL,"Portuguese");
	
	int teste;
	float n1,n2;
	
	printf("Escolha uma opção:\n");
	
	printf("++===============================++ \n");
	printf("||1:Soma                         || \n");
	printf("||2:Subtração                    || \n");
	printf("||3:Divisão                      || \n");
	printf("||4:Multiplicação                || \n");
	printf("++===============================++ \n");
	scanf("%i",&teste);


	printf("digite o numero 1 \n");
	scanf("%f",&n1);
	
	printf("digite o numero 2 \n");
	scanf("%f",&n2);

	
	switch(teste)
	{
		case 1:
			printf("A soma entre  %.2f e %.2f = %.2f \n ",n1,n2,n1+n2);
			break;
		case 2:
			printf("A Subtração entre  %.2f e %.2f = %.2f \n",n1,n2,n1-n2);
			break;
		case 3:
			printf("A Divisão entre  %.2f e %.2f = %.2f \n",n1,n2,n1/n2);
			break;
		case 4:
			printf("A Multiplicação entre %.2f e %.2f = %.2f \n",n1,n2,n1*n2);
			break;
		default:
				printf("Erro!! \n caracter digitado não e valido");
			break;
	}
	
	
}
