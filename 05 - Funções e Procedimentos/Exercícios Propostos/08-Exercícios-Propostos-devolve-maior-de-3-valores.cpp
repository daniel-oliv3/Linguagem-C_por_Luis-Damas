#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 8.	[Exercício de Exame]
float Max(float x, float y, float w)
Devolve o maior dos valores x, y, w.
;*/

float Max(float x, float y, float w){
	float maior;
	if(x>y && x>w){
		maior=x;
	}else{
		if(y>x && y>w){
			maior=y;
		}else{
			if(w>x && w>y){
				maior=w;
			}
		}
	}
	return maior;
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float num1=0, num2=0, num3=0, resp=0;
	printf("\n  Digite o 1º número: ");
	scanf("%f",&num1);
	printf("  Digite o 2º número: ");
	scanf("%f",&num2);
	printf("  Digite o 3º número: ");
	scanf("%f",&num3);
	system("cls");
	resp=Max(num1, num2, num3);
	printf("\n  O maior número é: %.2f\n",resp);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

