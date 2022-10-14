#include<stdio.h>

main(){
	int x;
	switch(x){
		case 1:
			printf("um\n");
			break;
		case 2:
			printf("dois\n");
			break;
		default:  //não existe else dentro de switch, o comando correto e default
			printf("nem um em outro\n");		
	}
}


