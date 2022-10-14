#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 8 - Escreva um programa que apresente um menu com as opções cliente
,fornecedor, Encomendas e sair

o programa deve apresentar a opção escolhida pelo usuario ate que este deseje sair
;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char opcao;
	do{
		printf("\n   MENU  PRINCIPAL\n");
		printf("\n\n\tCliente");
		printf("\n\n\tFornecedores");
		printf("\n\n\tEncomendas");
		printf("\n\n\tSair");
		printf("\n\n\n\t\tOpção: ");
		scanf("%c",&opcao);
		fflush(stdin);  // limpa o buffer do teclado
		switch(opcao){
			case 'c':
			case 'C': puts("Opção CLIENTES"); break;
			case 'f':
			case 'F': puts("Opção FORNECEDORES"); break;
			case 'e':
			case 'E': puts("Opção ENCOMENDAS"); break;
			case 's':
			case 'S': break; //Não faz nada	
			default: puts("Opção Inválida!!!\a\n"); 
		}
		getchar(); //para a tela
		system("cls");
	}while(opcao != 's'  && opcao != 'S');
	putchar('\n'); // quebra de linha
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

