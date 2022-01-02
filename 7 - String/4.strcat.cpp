#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* strcat - coloca a string ORIG imediatamente apos o final da string DEST;*/

char *strcat(char *dest, char *orig){
	int i, len;
	for(i=0, len=strlen(dest); orig[i]!='\0'; i++, len++){
		dest[len]=orig[i];
	}
	dest[len]='\0';
	return dest;
}

//ou

char *strcat(char *dest, char *orig){
	int i, len;
	for(i=0, len=strlen(dest); orig[i]!='\0'; i++){
		dest[len+i]=orig[i];
	}
	dest[len+i]='\0';
	return dest;
}

//ou

char *strcat(char *dest, char *orig){
	int i=0, len=strlen(dest);
	while(dest[i+len]=orig[i]){
		i++;
	}	
	return dest;
}

//ou 

char *strcat(char *dest, char *orig){
	int i=0, len=strlen(dest);
	while(dest[len++]=orig[i++]){
		;
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

