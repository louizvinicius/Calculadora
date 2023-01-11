#include <iostream>
#include <string.h>

/*Variaveis Globais*/
float num,num1,resp;
char i;

void tela(){

printf("\n\t**CALCULADORA**\n\n");
	printf("Digite com espacos: ");
	scanf("%f %s %f",&num,&i,&num1);
		
	}

void calculo(){
	
	if(i == '+'){
		resp = num+num1;
			printf("\nResultado: %.1f",resp);
	}	
	
		if(i=='-'){
			resp = num-num1;
				printf("\nResultado: %.1f",resp);
	}
	
	if(i=='*'){
		resp = num*num1;
			printf("\nResultado: %.1f",resp);
	}
	
		if(i=='/'){
			resp = num/num1;
				printf("\nResultado: %.1f",resp);
	}
	

}


int main() {

int fim = 0;
int op;

	while(!fim){
	
tela();
calculo();

	printf("\n\n\t Para sair, digite 0.\n \tPara continuar digite 1\n");
		scanf("%d",&op);
		
	if(op == 0){
		printf("\n\tSaindo...");
			fim = 1;
	}else{
		
	}

}

return 0;
}