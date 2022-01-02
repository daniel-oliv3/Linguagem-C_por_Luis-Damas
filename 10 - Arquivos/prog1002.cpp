#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Escreva um programa que mostre na tela do se computador apenas os alunos que obtiveram aprovação e 
respectivas notas(notas >= 5) na disciplina a que o arquivo corresponde.;*/

int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	FILE *fp;
	char nome[100];
	int nota;
	if(argc!=2){    //testa a linha de comando
		printf("Sintaxe: \n\n%s Arquivo\n\n",argv[0]);
		exit(1);    //termina o programa
	}
	if((fp=fopen(argv[1],"r"))==NULL){
		printf("Impossivel abrir o arquivo %s\n",argv[1]);
		exit(2);
	}
	while(fscanf(fp,"%s %d",nome,&nota)!=EOF)
		if(nota >= 5)
			printf("%s %d",nome,nota);
	fclose(fp);		
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

