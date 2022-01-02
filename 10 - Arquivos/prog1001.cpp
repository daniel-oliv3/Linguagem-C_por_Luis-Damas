#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* ;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	FILE *fp;
	char s[100];
	puts("  Introduza o nome do arquivo: ");
	gets(s);
	fp=fopen(s, "r"); //abrindo arquivo. modo leitura
	if(fp==NULL)  //verifica se a abertura foi deita com sucesso
		printf("Impossivel abrir o arquivo %s\n",s);
	else{
		printf("Arquivo %s aberto com sucesso!!!\n",s);
		fclose(fp);
	}
	putchar('\n');	
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

