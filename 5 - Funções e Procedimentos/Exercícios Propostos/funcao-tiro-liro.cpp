#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* ;*/

void tiro(int x){
	switch(x){
		case 1: 
			printf("\nEste teste é mesmo fácil\n");
		case 2: 
			printf("\nAi de quem diga o contrário...\n");
			break;
		case 3:
			printf("\nEstou no Tiro é X = %d\n",x);
			liro(x++);
			break;
			printf("\nVou sair do tiro\n");
		default:
			printf("\nEntrei pelo default\n\a");
			liro(x);		
	}
}

void liro(int x){
	switch(x){
		case 2:
			return;
			printf("\nOlarailarilolela\n");
			break;
		case 3: 
			printf("\nEu percebo HIMALAIAS de C\n");
			break;
			printf("\nSou mesmo bom!!!\n");
			break;
		case 4:
			printf("\nNão percebo nada disto\n");
			liro(2);
			return;
		default:
			printf("\nAqui estou eu mais uma vez!\n");
			tiro(x--);			
	}
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	tiro(1);
	
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

