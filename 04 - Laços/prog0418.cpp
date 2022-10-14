#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Escreva um programa que solicite ao usuário um número. em seguida escreva todos os números inteiros a partir desse numero,
exeto os multiplos de 3. quando encontrar o primeiro multiplo de 10 a execução termina.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, n;
	printf("\n  Digite um número: ");
	scanf("%d",&n);
	for(i=n; ; i++){  //laço infinito
		if(i%10==0)  //multiplo de 10
			break;
		else
			if(i%3==0)  //multiplo de 3
			continue;
		printf("  %d\n",i);		
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

