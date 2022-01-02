#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>

#define NUMS 49  	    //total de nºs do jogo
#define MIN_APOSTA 6 	//aposta minima - 6 nºs
#define NUM_LIN 7       //nº de nºs apres. por linha no volante

/*Escreva um programa que permita gerar uma jogada para um tipo de sena, indicando os números a apostar
os quais deverão ser criados aleatoriamente. ;*/

void Inic_Random(); 	 //declaração das funçoes
void Inic(int v[NUMS]);
int Ler_Ns_Aposta();
void Gerar(int *v, int n);
void Apresentar(int res[]);

/*Inicia o gerador de nºs aleatorios com um nº que depende da hora que se executa a função*/

void Inic_Random(){
	long int ultime;
	//time(&ultime);
	srand((unsigned)ultime);
}

void Inic(int v[]){  	//inic. com zero o vetor de controle dos nºs selecionados
	int i;
	for(i=0; i<NUMS; i++)
		v[i]=0;
}

//lê o nº de numeros a apostar. aceita valores entre MIN_APOSTA e NUMS. aceita o valor ZERO para indicar que se quer terminar o prog

int Ler_Ns_Apostar(){
	int n;
	do{
		printf("Quantos nºs quer apostar ( 0 - terminar): ");
		scanf("%d",&n);
	}while((n<MIN_APOSTA || n>NUMS) && n!=0);
return n;	
}

/*Gera n numeros aleatorios e coloca a respectiva posição do vetor com o valor 1 que indica que esse nº foi selecionado*/

void Gerar(int *v, int n){
	int i, indice;
	for(i=1; i<=n; i++){
		indice=rand()%NUMS;   //devolve nº aleatorio entre 0 e NUMS-1
		if(v[indice]==0)      //não foi selecionado
			v[indice]=1;      
		else				  //este nº ja tinha sido selecionado
			i--;			  //logo decrementa-se o contador para voltar a
	}						  //calcular mais uma vez o i-esimo nº aleatorio
}

//apresenta o formato do volante colocando XX nos nºs selecionados para aposta.

void Apresenta(int res[]){
	int i;
	for(i=0; i<NUMS; i++){
		if(res[i]==0)
			printf(" %2d",i+1);
		else
			printf(" XX");
		if((i+1)%NUM_LIN==0) putchar('\n');		
	}
	putchar('\n');
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int vetor[NUMS];
	int n_nums;  //nº de numeros para jogar no jogo 6..49
	Inic_Random();
	while(1){
		Inic(vetor);
		if((n_nums=Ler_Ns_Apostar())==0) break;
		Gerar(vetor, n_nums);  //gerar os nºs a apostar
		Apresenta(vetor);
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

