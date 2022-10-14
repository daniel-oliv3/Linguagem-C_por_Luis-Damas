#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 10.	Escreva um programa que solicite um número ao usuário até que o valor deste esteja entre os valores 1 e 100;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, num;
	printf("\n  Digite um número: ");
	scanf("%d",&num);
	system("cls");
	if(num>=1 && num<=100){
		printf("\n  O número %d está no intervalo entre 1 e 100!\n",num);
	}else{
		printf("\n  O número incorreto!\a\n");
	}
	putchar('\n');
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

