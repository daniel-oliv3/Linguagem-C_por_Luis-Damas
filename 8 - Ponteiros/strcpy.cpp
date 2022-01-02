#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>

/*copia a string orig para a string dest ;*/

char *strcpy(char *dest, char *orig){
	char *temp=dest;
	while(*dest++ = *orig++)
		;
	return temp;	
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char orig[100], dest[100];
	printf("\n  Digite a string de origem: ");
	gets(orig);
	printf("  Digite a string de destino: ");
	gets(dest);
	putchar('\n');
	printf("  %s\n",strcpy(dest, orig));
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

