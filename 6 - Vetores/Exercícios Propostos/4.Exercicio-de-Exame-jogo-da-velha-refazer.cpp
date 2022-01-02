#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define DIM 3
#define ESPACO ' '

/* ;*/

void inic(char s[][DIM]){  //Omitir uma dimensão
	int i, j;
	for(i=0; i<DIM; i++)
		for(j=0; j<DIM; j++)
		s[i][j]=ESPACO; 
}

void mostra(char s[DIM][DIM]){  //ambas dimensoes
	int i, j;
	for(i=0; i<DIM; i++){
		for(j=0; j<DIM; j++)
			printf("%c  %c",s[i][j],j==DIM-1?' ':'|');
		if(i!=DIM-1) printf("\n-----------");
		putchar('\n');	
	}
}  

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char Velha[DIM][DIM];
	int posx, posy;
	char ch ='0'; //caractere para jogar
	int n_jogadas=0;
	
	inic(Velha);
	while(1){  //laço infinito
		mostra(Velha);
		printf("\nIntroduza a Posição de Jogo Linha Coluna: ");
		scanf("%d %d",&posx, &posy);
		posx--;
		posy--; //posi os indices do vetor começam em 0
		if(Velha[posx][posy]==ESPACO){  //Casa livre
			Velha[posx][posy] = ch = (ch == '0') ? 'X' : '0';
			n_jogadas++;
		}
		else
			printf("Posição já ocupada\nJogue Novamente!!!\n");
		if(n_jogadas==DIM*DIM)
			break; //acabar o programa	
	}
	mostra(Velha);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

