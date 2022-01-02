#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>   //strlen


/* ;*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	
	//1º) suponha a seguinte declaração
	char s[] = "Exame";
	char **pps;  //ponteiro para ponteiro para char
	char *ps;  //ponteiro para char
	
	ps = s;  //ps = &s[0]
	pps = &ps;
	
	printf("ps = %c\n",*ps);  //resposta, primeiro elemento do vetor s, 'E'
	printf("pps = %d\n",&ps);
	
	putchar('\n');
	
	/*3º) quais os parametros que se devera colocar em cada printf de tal forma que se obtenha a saida pretendida, 
	sendo o primeiro parametro sempre definido com base em s, o segundo com base em ps e o terceiro com base em pps?.*/
	printf("%c, %c, %c.\n",s[0], *ps, **pps);
	printf("%c, %c, %c.\n",s[1], *(ps+2), *(*pps+3));
	printf("%c, %c, %c.\n",*(s+4), ps[4], (*pps)[4]);
	printf("%d, %d, %d.\n",strlen(s), strlen(ps), strlen(*pps));
	
	putchar('\n');

	
	//4º) qual a saida da seguinte instrução
	
	printf("%d, %d, %d.\n",&s[0], &ps, &pps);

	putchar('\n');
	
	//Exercicios propostos
	//suponha o seguinte esquema que corresponde a declaração que se segue:
	
	char s2[] = "Maria", *ptr1 = s2;
	
	printf("Usados s2\n");
	printf("	%c\n",s2[2]);
	printf("	%d\n",&s2[0]);
	printf("	%d\n",&s2[1]);
	printf("	%d\n",&s2[2]);
	
	printf("Usados ptr1\n");
	printf("	%c\n",(ptr1[2]));
	printf("	%d\n",&ptr1[0]);
	printf("	%d\n",&ptr1[1]);
	printf("	%d\n",&ptr1[2]);
	
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

