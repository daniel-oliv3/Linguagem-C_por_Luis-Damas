#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Escreva um programa que solicite ao usu�rio um n�mero. em seguida escreva todos os n�meros inteiros a partir desse numero,
exeto os multiplos de 3. quando encontrar o primeiro multiplo de 10 a execu��o termina.;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, n;
	printf("\n  Digite um n�mero: ");
	scanf("%d",&n);
	for(i=n; ; i++){  //la�o infinito
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
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/

