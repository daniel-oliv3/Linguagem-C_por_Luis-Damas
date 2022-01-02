#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* 601 - Escreva um programaque realize a leitura dos salarios pagos a um individuo durante um ano.
Em seguida, o programa deverá mostrar os valores mensais e o total anual;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	float sal[12]; // 12 meses
	float total;
	int i;
	for(i=0; i<12; i++){
		printf("  Digite o salário do mês %d: ",i+1);
		scanf("%f",&sal[i]);
	}
	putchar('\n');
	puts("  Mês	     Valor"); //mostrar os valores mensais e calcula o total
	for(i=0, total=0.0; i<12; i++){
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

