#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Escreva um programa que calcule o perimetro e a area de uma circunferencia;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float raio, perimetro;  //precis�o simples
	double Pi = 3.1415927, area;  //precisao dupla
	printf("\n  Digite o raio da circunfer�ncia: ");
	scanf("%f",&raio);
	area=Pi*raio*raio;
	perimetro=2*Pi*raio;
	printf("\n  �rea = %f\n  Perimetro = %f\n",area,perimetro);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/

