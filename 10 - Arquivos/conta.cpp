#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

#define MENOS '-'
#define MENOS_L "-1"
#define MAX_LIN 80

void Erro_Fatal(int num_erro, char *string);

/* ;*/

int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int mostra_linhas=0;  //por padão não mostra
	int n_linha=0;  //nº da linha que estamos processando
	FILE *fp=stdin;
	char s[MAX_LIN+1];
	switch(argc){
		case 1:
			break;
		case 2:
			if(stricmp(argv[1],MENOS_L)==NULL)
				mostra_linhas=1;
			else
				if((fp=fopen(argv[1],"r"))==NULL)
					Erro_Fatal(2, argv[1]);
				break;
		case 3:
			if(argv[1][0]!=MENOS)
				Erro_Fatal(3, argv[1]);  //flag invalido
			if(stricmp(argv[1],MENOS_L)!=0)
				Erro_Fatal(3, argv[1]);
			mostra_linhas=1;
			if((fp=fopen(argv[2],"r"))==NULL)
				Erro_Fatal(2, argv[2]);
			break;
		default:
			Erro_Fatal(1, "");									
	}
	while(fgets(s,MAX_LIN+1,fp)!=NULL){
		s[strlen(s)-1]='\0';  //tira o \n
		if(mostra_linhas)
			fprintf(stdout,"%d\n",++n_linha,strlen(s));
		else
			printf("%d\n",strlen(s));	
	}
	fclose(fp);	
	system("Pause");
	return 0;
}

void Erro_Fatal(int num_erro, char *string){
	switch(num_erro){
		case 1:  //mostra a sintaxe
			fprintf(stderr, "Sintaxe:\nconta [-1] [Arq]\n\n");
			break;
		case 2:  //erro de abertura no arquivo
			fprintf(stderr,"Imp. Abrir o Arquivo '%s'\n",string);
			break;
		case 3:
			fprintf(stderr,"Opção \"%s\" Inválida\n",string);
			break;		
	}
	exit(num_erro);
}

/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

