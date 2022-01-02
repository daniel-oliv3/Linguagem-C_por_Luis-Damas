#include<stdio.h>
#include<stdlib.h>  // por causa da função exit()
#include<locale.h>

/* ;*/

int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	FILE *fin, *fout;
	int ch;
	if(argc!=3){  //testar a linha de comando
		printf("Sintaxe: \n\n%s Origem Destino\n\n",argv[0]);
		exit(1); //termina o programa
	}
	fin=fopen(argv[1],"rb");  //abrindo arquivo de origem
	if(fin==NULL){
		printf("Impossivel abrir o arquivo %s\n",argv[1]);
		exit(2);
	}
	if((fout=fopen(argv[2], "wb"))==NULL){  //abrindo o arquivo de destino
		printf("Impossivel criar o arquivo %s\n",argv[2]);
		exit(3);
	}
	while((ch=fgetc(fin))!=EOF)
		fputc(ch, fout);
	fclose(fin);
	fclose(fout);
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

