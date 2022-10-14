#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*    Escreva um programa que solicite ao usuario um número e um caracrere. 
e em seguida, tera que preencher n linhas, cada uma delas com n caracreres;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i, j, n;
	char ch;
	printf("\n  Digite um número: ");
	scanf("%d",&n);
	printf("  Digite um caractere: ");
	scanf(" %c",&ch);  //não esquecer o espaço em branco antes do %c para retirar o <ENTER> que ficou no buffer do teclado, depois de introduzido o inteiro.;
	system("cls"); //limpa a tela.
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			putchar(ch);  //imprime um caractere.
		}
		putchar('\n'); //quebra de linha.
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

