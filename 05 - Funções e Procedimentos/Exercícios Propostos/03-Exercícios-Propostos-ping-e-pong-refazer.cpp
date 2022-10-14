#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* ;*/

void Ping(int i){
	switch(i){
		case 1:
		case 2: 
		case 3: while(i--)
					printf("\n  %d\n",--i);
				break;
		case 25: Pong(3);
				break;
		default: printf("\nJá Passei em C\n");
				Pong(123);				
	}
}

void Pong(int x){
	int j=0;
	switch(x){
		case 1:
		case 2: Ping(x);
		case 3: j=5;
				j++;
				return;
		default: printf("\nVou Sair");			
	}
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	Pong(2);
	
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

