#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

/* que junta (concatena) a string orig com a string dest;*/

char *strcat(char *dest, char *orig){
	strcpy(dest+strlen(dest),orig);
	return dest;
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char string1[100], string2[100];
	printf("\n  Digite a string de origem: ");
	gets(string1);
	printf("  Digite a string de destino: ");
	gets(string2);
	printf("%s\n",strcpy(string2, string1));
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

