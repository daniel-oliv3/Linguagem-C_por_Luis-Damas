#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 19. 1	Escreva um programa que indique o número de dias existentes em um mês (fevereiro = 25 dias);

19.1	Usando apenas a instrução de teste if-else.

*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int mes;  //declarando uma variavel do tipo inteira de nome "mes".
	printf("\n  Digite um número <1 á 12>: ");  //printf impressão formatada, imprime na tela a string "Digite um nú....".
	scanf("%d",&mes);  //função generica scanf faz a leitura do teclado, e envia o que o usuario digitou para o &endereço de memoria da variavel mes.
	system("cls"); // limpa a tela
	if(mes==1){  //se(mes for igual a 1)faça, execute a linha a baixo
		printf("  Janeiro = 31 dias\n");  //imprime na tela
	}else{  // caso contrario, faça
		if(mes==2){  //se(mes for igual a 2)faça, ecxecute a linha a baixo
			printf("  Fevereiro = 28 dias\n");  //...
		}else{
			if(mes==3){
				printf("  Março = 31 dias\n");
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
													printf("\n  O número tem que estar entre 1 e 12!\n\a");	
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
	return 0;  //retorna 1 a quem a chamou, nesse caso a função principal
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

