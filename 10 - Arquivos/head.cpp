#include<stdio.h>  //..
#include<stdlib.h>  //..
#include<locale.h>
#define MAX_LIN 80
#define SINAL '-'


/* Mostra erros e termina o programa;*/

void Erro_Fatal(int num_erro, char *string){
	switch(num_erro){
	case 1:  //mostra a sintaxe
		fprintf(stderr, "Sintaxe:\n\nhead [-n] [Arq]\n\n");
		break;
	case 2:  //erro de abertura no arquivo
		fprintf(stderr, "Imp. Abrir o Arquivo '%s'\n",string);
		break;	
	}	
	exit(num_erro);
}
int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	FILE *fp = stdin;  //stdin por padrão
	char s[MAX_LIN+1]; //String,,, Max_len+1... não esquecer o \0
	int i=0;  //nenhuma linha foi processada ainda
	int n_lins = 10;  //10 linhas, por padrão
	switch(argc){
		case 1:
			break;
		case 2:
			if(argv[1][0]==SINAL)
				n_lins = atoi(argv[1]+1);
			else
				if((fp=fopen(argv[1], "r"))==NULL)
					Erro_Fatal(2, argv[1]);
				break;	
		case 3:
			if(argv[1][0]!=SINAL)
				Erro_Fatal(1, "");
			else{
				n_lins = atoi(argv[1]+1);
				if((fp=fopen(argv[2],"r"))==NULL)
					Erro_Fatal(2, argv[2]);
			}
			break;	
		default: Erro_Fatal(1, "");
	}
	while(fgets(s,MAX_LIN+1,fp)!=NULL && i++<n_lins)
		printf(s);  //ou fputs(s,stdout);
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

