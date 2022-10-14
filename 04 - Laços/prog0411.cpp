#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Qual a saida desse programa?;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i;
	for(i=1; i<=100; i=i+1){
		if(i==30){
			break;
		}else{
			printf("%2d\n",2*i);
		}
	}
	printf("FIM DO LAÇO\n");
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

