#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 19. 1	Escreva um programa que indique o n�mero de dias existentes em um m�s (fevereiro = 25 dias);

19.1	Usando apenas a instru��o de teste if-else.

*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int mes;  //declarando uma variavel do tipo inteira de nome "mes".
	printf("\n  Digite um n�mero <1 � 12>: ");  //printf impress�o formatada, imprime na tela a string "Digite um n�....".
	scanf("%d",&mes);  //fun��o generica scanf faz a leitura do teclado, e envia o que o usuario digitou para o &endere�o de memoria da variavel mes.
	system("cls"); // limpa a tela
	if(mes==1){  //se(mes for igual a 1)fa�a, execute a linha a baixo
		printf("  Janeiro = 31 dias\n");  //imprime na tela
	}else{  // caso contrario, fa�a
		if(mes==2){  //se(mes for igual a 2)fa�a, ecxecute a linha a baixo
			printf("  Fevereiro = 28 dias\n");  //...
		}else{
			if(mes==3){
				printf("  Mar�o = 31 dias\n");
			}else{
				if(mes==4){
					printf("  Abril = 30 dias\n");
				}else{
					if(mes==5){
						printf("  Maio = 31 dias\n");
					}else{
						if(mes==6){
							printf("  Junho = 30 dias\n");
						}else{
							if(mes==7){
								printf("  Julho = 31 dias\n");
							}else{
								if(mes==8){
									printf("  Agosto = 31 dias\n");
								}else{
									if(mes==9){
										printf("  Setembro = 30 dias\n");
									}else{
										if(mes==10){
											printf("  Outubro = 31 dias\n");
										}else{
											if(mes==11){
												printf("  Novembro = 30 dias\n");
											}else{
												if(mes==12){
													printf("  Dezembro = 31 dias\n");
												}else{
													printf("\n  O n�mero tem que estar entre 1 e 12!\n\a");	
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	putchar('\n');  //quebra de linha
	system("Pause");  // pausa a tela
	return 0;  //retorna 1 a quem a chamou, nesse caso a fun��o principal
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computa��o
  Turno: Noturno
*/

