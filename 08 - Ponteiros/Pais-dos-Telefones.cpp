#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Pais dos Telefones;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	
	
	int joao=789, ana=456, pedro=321, *samad; //samad e um ponteiro.
	//exemplo 1
	samad=&joao;  //samad recebe o endere�o de memoria de jo�o
	//printf("  Samad %d\n",samad);
	
	printf("\n\nEXPRESS�O -------- VALOR\n");
	
	printf("  Jo�o --------- %d\n",joao);  //valor armazenado na variavel joao
	printf("  &Jo�o	-------- %d\n",&joao);  //endere�o de memoria de jo�o
	printf("  SAMAD -------- %d\n",samad);  //samad aponta para o endere�o de memoria de jo�o, "valor de samad"
	printf("  &SAMAD -------- %d\n",&samad);  //endere�o de memoria de samad
	printf("  *SAMAD --------- %d\n",*samad);  //valor apontado por samada
	
	//Exemplo 2
	putchar('\n');
	putchar('\n');
	
	int v[3]={10,20,30}; //vetor com 3 inteiros
	int *ptr;  //ponteiro para inteiro
	
	ptr = v;  //passa a apontar para o 1� elemento
	printf("%d %d\n",v[0],*ptr); //10	10
	
	ptr = &v[2];
	printf("%d %d\n",v[2],*ptr); //30	30
	
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/

