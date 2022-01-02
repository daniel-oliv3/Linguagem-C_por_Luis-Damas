#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*     704 - Escreva um programa que leia nomes e os apresente 
na tela até que um nome vazio seja introduzido pelo operador;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char nome[100];
	while(1){ //laço infinito
		puts("nome: ");
		gets(nome);
		if(nome[0]=='\0'){ //se a string estiver vazia
			break;  //termine o laço
		}else{
			printf("  Nome introduzido: %s\n",nome);
		}
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

