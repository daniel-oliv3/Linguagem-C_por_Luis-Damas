#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Escreva um programa que mostre uma string na tela pela ordem em que escrita e pela ordem contraria;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char s[100];
	char *ptr = s; //aponta para o primeiro caractere de s
	printf("\nDigite uma string: ");
	gets(s);
	if(*ptr=='\0')  
		return 0; // ou return 0 se der erro de compilação
		//string vazia
		//imprime a string normalmente
	while(*ptr!='\0')
		putchar(*ptr++);
	putchar('\n');	
	//imprime a string ao contrario
	ptr--;  //por causa do '\0'
	while(ptr>=s)  //enquanto ptr for maior ou igual que &s[0]
		putchar(*ptr--);
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

