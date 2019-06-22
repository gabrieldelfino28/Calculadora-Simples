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
	puts("[2] - para Subtração");
	puts("[3] - para Divisão");
	puts("[4] - para Multiplicação");
	puts("[5] - para Sair\n");
	scanf("%i", &opcao);
	
	switch(opcao){
		case 1: 
		puts("Você selecionou Soma\n");
		rotsoma();
		break;
		
		case 2:
		puts("Você selecionou Subtração\n");
		rotsubtra();
		break;
		
		case 3:
		puts("Você selecionou Divisão\n"); 
		rotdivis();
		break;
		
		case 4:
		puts("Você selecionou Multiplicação\n");
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
	printf("\nO Resultado da Subtração e: %.1f\n\n", R);
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
	printf("\nO Resultado da Divisão e: %.1f\n\n", R);
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
	printf("\nO Resultado da Multiplicação e: %.1f\n\n", R);
	system("PAUSE");
	return 0;	
}
