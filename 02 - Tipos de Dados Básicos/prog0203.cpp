#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* ;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int num1, num2;
	printf("  Digite dois números: ");  //para escrita
	scanf("%d %d",&num1,&num2); //para leitura 
	printf("  O resultado de %d + %d = %d\n",num1,num2,num1+num2);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

