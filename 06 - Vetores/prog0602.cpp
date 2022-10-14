#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 602 - Escreva um programaque realize a leitura dos salarios pagos a um individuo durante um ano.
Em seguida, o programa deverá mostrar os valores mensais e o total anual;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float sal[13]; // 12 meses, 0 + 12 meses
	float total;
	int i;
	for(i=1; i<13; i++){  //reescrevendo o codigo para começar indice 1 a 12
		printf("  Digite o salário do mês %d: ",i);
		scanf("%f",&sal[i]);
	}
	putchar('\n');
	puts("  Mês	     Valor"); //mostrar os valores mensais e calcula o total
	for(i=1, total=0.0; i<12; i++){
		printf("  3%d\t%9.2f\n",i+1,sal[i]);
		total+=sal[i];
	}
	printf("\n  Total Anual: %9.2f\n",total);
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

