#include <stdio.h>

int main (int argc, char** argv[]){
	
	float custo_consumidor, custo_fabrica, comissao_distribuidor, impostos;
	
	printf("Insira o custo de fabrica: ");
	scanf("%f", &custo_fabrica);
	
	comissao_distribuidor = custo_fabrica*0.28;
	impostos = custo_fabrica*0.45;
	custo_consumidor = custo_fabrica+comissao_distribuidor+impostos;
	
	printf("\n\nO Custo do Consumidor e: R$ %.2f", custo_consumidor);
	
	return 0;
	 
}
