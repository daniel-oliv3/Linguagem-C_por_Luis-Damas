#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*11 - qual a saida do seguinte programa?

mostra os 29 primeiros numeros pares;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int i;
	for(i=1; i<=100; i=i+1){
		if(i==60){
			break;
		}else{
			if(i % 2 == 1){ // se( i for ímpar) faça
				continue;
			}else{
				printf("%2d\n",i);
			}
		}
	}
	printf("FIM DO LAÇO\n");
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

