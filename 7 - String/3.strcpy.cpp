#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* strcpy - essa função copia a string ORIG para a string DEST.;*/

char *strcpy(char *dest, char *orig){
	int i;
	for(i=0; orig[i]!='\0'; i++){
		dest[i]=orig[i]; //destino recebe origem
	}
	dest[i] = '\0';
	return dest;
}

//outra forma de emplementar a função

char *strcpy(char *dest, char *orig){
	int i;
	for(i=strlen(orig); i>=0; i--){  //laço ao contrario para variar
		dest[i]=orig[i];
	}
	return dest;
}

//outra forma de emplementar a função

char *strcpy(char *dest, char *orig){
	while(dest[i]=orig[i]){
		i++;
	}
	return dest;
}

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	
	
	system("Pause");
	return 0;
}


/*
  Faculdade: FUCAPI
  Aluno: Daniel Oliveira de Souza
  Curso: Engenharia da Computação
  Turno: Noturno
*/

