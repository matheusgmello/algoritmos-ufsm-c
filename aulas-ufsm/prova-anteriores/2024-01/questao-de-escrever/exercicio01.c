/*
Um turista chegou a uma casa de câmbio querendo trocar seu dinheiro, 
deparou-se com um funcionário novo com pouca prática na conversão de moedas. 
Para ajudá-lo, crie uma função para fazer a conversão de reais R$ para uma das outras moedas sem que ele "passe a perna" no cliente. nem eu seu chefe. 
A funcao deve receber uma valor monetario em reais e o codigo ('e' para estaleca, 'c' para cartoleta) 
da moeda para conversao, Para isso sabe-se que: CT$ 1,00 = R$ 4,00 e ES$ 1,00 = R$ 2,00. O valor convertido deve ser apresentado.
*/ 
#include <stdio.h>

void converteMoeda(float valor, char codigo){
	
	float novoValor;
	
	if (codigo == 'e' || codigo == 'E'){
		novoValor = valor / 2.00;
	} else if(codigo == 'c' || codigo == 'C'){
		novoValor = valor / 4.00;
	} else {
		printf("opcao invalida");
	}
	
	printf("o valor convertido eh: %.2f", novoValor);
}

int main(){
	
	float valor = 10.00;
	char opc = 'c';
	
	converteMoeda(valor, opc);
	
	return 0;
}