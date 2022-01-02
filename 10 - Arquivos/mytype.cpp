#include<stdio.h>
#include<stdlib.h>  //para a função exit()
#include<locale.h>

/* ;*/

int main(int argc, char*argv[])
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	FILE *fp;
	int ch; //inteiro para ler os caracteres
	if(argc!=2){  //testar a linha de comando 
		printf("Sintaxe: \n\n%s Arquivo\n\n",argv[0]);
		exit(1);  //termina o programa
	}
	fp=fopen(argv[1], "r");
	if(fp==NULL){
		printf("Impossivel abrir o arquivo %s\n",argv[1]);
		exit(2);
	}
	while((ch=fgetc(fp))!=EOF)  //...enquanto(ftec for diferente de EOF)faça, os paraenteses são para forçar que a atribuição seja reaizada.
		putchar(ch);  //ler os caracteres um a um, e os coloca na tela
	fclose(fp);
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

