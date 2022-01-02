#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Int Abs(int x)
Devolve o valor absoluto de x.
Abs(-5)  ------> 5
Abs(5)   ------> 5
;*/

int Abs(int x){
	if(x>=0)
		return x;
	else
		return -x;	
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int numero;
	printf("\n  Digite um número inteiro: ");
	scanf("%d",&numero);
	system("cls");
	printf("\n  O valor Absoluto de %d é: %d\n",numero,Abs(numero));
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

