#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	system("COLOR 0C");
	setlocale(LC_ALL, "Portuguese");
	int opcao;
	int rotsoma();
	int rotsubtra();
	int	rotdivis();
	int rotmultip();
	
	
while(opcao!=5)	{
	
	system("CLS");
	puts("\t\t\t\tCalculadora Simples\t\t\t\t\n");
	puts("Escolha as Seguintes opcoes: ");
	puts("[1] - para Soma");
	puts("[2] - para Subtra��o");
	puts("[3] - para Divis�o");
	puts("[4] - para Multiplica��o");
	puts("[5] - para Sair\n");
	scanf("%i", &opcao);
	
	switch(opcao){
		case 1: 
		puts("Voc� selecionou Soma\n");
		rotsoma();
		break;
		
		case 2:
		puts("Voc� selecionou Subtra��o\n");
		rotsubtra();
		break;
		
		case 3:
		puts("Voc� selecionou Divis�o\n"); 
		rotdivis();
		break;
		
		case 4:
		puts("Voc� selecionou Multiplica��o\n");
		rotmultip();
		break;
		
		case 5:
		printf("\n\n");
		opcao=5;
		break;
	}
}
	system("PAUSE");	
	return 0;
}

int rotsoma(){
	float A,B,R;
	puts("Digite o 1o Valor: ");
	scanf("%f",&A);
	puts("Digite o 2o Valor: ");
	scanf("%f",&B);
	R=A+B;
	printf("\nO Resultado da Soma e: %.1f\n\n", R);
	system("PAUSE");
	return 0;	
}

int rotsubtra(){
	float A,B,R;
	puts("Digite o 1o Valor: ");
	scanf("%f",&A);
	puts("Digite o 2o Valor: ");
	scanf("%f",&B);
	R=A-B;
	printf("\nO Resultado da Subtra��o e: %.1f\n\n", R);
	system("PAUSE");
	return 0;	
}

int rotdivis(){
	float A,B,R;
	puts("Digite o 1o Valor: ");
	scanf("%f",&A);
	puts("Digite o 2o Valor: ");
	scanf("%f",&B);
	R=A/B;
	printf("\nO Resultado da Divis�o e: %.1f\n\n", R);
	system("PAUSE");
	return 0;	
}

int rotmultip(){
	float A,B,R;
	puts("Digite o 1o Valor: ");
	scanf("%f",&A);
	puts("Digite o 2o Valor: ");
	scanf("%f",&B);
	R=A*B;
	printf("\nO Resultado da Multiplica��o e: %.1f\n\n", R);
	system("PAUSE");
	return 0;	
}
