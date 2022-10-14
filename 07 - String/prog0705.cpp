#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#define DIM 20
#define SEP_NOME ", "


/* 705 Escreva um programa que leia nomes e sobrenomes de pessoas e os mostre na tela na formato
Sobrenome, nome. o programa deve terminar quando nomes vazio for introduzido.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char nome[DIM+1], sobreNome[DIM+1], completo[2*DIM+1];
	while(1){
		printf("\nNome: ");
		gets(nome);
		if(strlen(nome) == 0){
			break;  //termina o programa
		}
		printf("Sobrenome: ");
		gets(sobreNome);
		putchar('\n');
		strcpy(completo, sobreNome); //copia o sobrenome
		strcat(completo, SEP_NOME); //juntar o separador
		strcat(completo, nome); //juntar o prim. nome
		puts(completo);
	}
	
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

