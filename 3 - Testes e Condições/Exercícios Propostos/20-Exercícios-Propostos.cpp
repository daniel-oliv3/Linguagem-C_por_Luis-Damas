#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 20.	Escreva um programa que leia uma data e verifique se é valido ou não..;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int data;
	printf("\n  Digite uma data dd/mm/aaaa: ");
	scanf("%d",&data);
	if(data==2017){
		printf("  Seja bem vindo!\n");
	}else{
		printf("  Data incorreta!");
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

