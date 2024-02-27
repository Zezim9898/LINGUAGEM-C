#include <stdio.h>
#include <locale.h>

int main(){
	
	//DEFINI플O DE VARIAVEIS
	int operacao ;
	float x, y, z ;
	
	//MUDANDO O IDIOMA PARA PORTUGUES
	setlocale(LC_ALL,"Portuguese");
	
	//EXIBINDO AS OPERA합ES DISPONIVEIS
	printf("CALCULADORA - EM - C: \n");
	printf(" 1 - ADI플O \n");
	printf(" 2 - SUBTRA플O \n");
	printf(" 3 - MULTIPLICA플O \n");
	printf(" 4 - DIVIS홒  \n");
	
	//SOLICITANDO AO USUARIO UMA DAS OP합ES ACIMA
	printf("SELECIONE QUAL OPERA플O DEJESA REALIZAR:");
	scanf("%i", &operacao);
	switch(operacao)
	{
		
	//OPERA플O DE ADI플O
	case 1:
		printf("\nVoc� selecionou Adi豫o!\n");
		printf("Digite O Primeiro N�mero: \n");
		scanf("%f", &x);
		printf("Digite O Segundo N�mero: \n");
		scanf("%f", &y);
		z = x + y ;
		printf("%.1f + %.1f = %.1f", x, y, z);
		break;
	
	//OPERA플O DE SUBTRA플O
	case 2:
		printf("\nVoc� selecionou Subtra豫o!\n");
		printf("Digite O Primeiro N�mero: \n");
		scanf("%f", &x);
		printf("Digite O Segundo N�mero: \n");
		scanf("%f", &y);
		z = x - y ;
		printf("%.1f - %.1f = %.1f", x, y, z);
		break;
	
	//OPERA플O DE MULTIPLICA플O
	case 3:
		printf("\nVoc� selecionou Multiplica豫o!\n");
		printf("Digite O Primeiro N�mero: \n");
		scanf("%f", &x);
		printf("Digite O Segundo N�mero: \n");
		scanf("%f", &y);
		z = x * y ;
		printf("%.1f x %.1f = %.1f", x, y, z);
		break;
	
	//OPERA플O DE DIVIS홒
	case 4:
		printf("\nVoc� selecionou Divis�o!\n");
		printf("Digite O Primeiro N�mero: \n");
		scanf("%f", &x);
		printf("Digite O Segundo N�mero: \n");
		scanf("%f", &y);
		if(y == 0){
			printf("Denominador Invalido!");
		}
		else
		{
		z = x / y ;
		printf("%.1f / %.1f = %.2f", x, y, z);	
		}
		break;
	
	//CASO O N�MERO QUE O USUARIO DIGITAR SEJA INVALIDO
	default:
		printf("Op豫o Invalido!");
		break;
	}
	return 0;
}