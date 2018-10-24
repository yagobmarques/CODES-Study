#include <stdio.h>

int verifica_perfeito(int n){
	int cont=n, soma=0;
	for (int i = 1; i < cont; i++)
	{
		if(n%i==0){
			soma=soma+i;
		}
	}
	if (soma==cont){
		printf("%i ", soma);
	}
	return 0;

}
void intervalo (int n1, int n2){
	for (int i = n1; i < n2; i++)
	{
		if(i!=0){
		verifica_perfeito(i);
		}
		/*if(verifica_perfeito(i)==0){
			printf("%i ", i);
		}*/
	}
}
int main(){
	int n1, n2;
	printf("Digite o primeiro numero do intervalo(inclusive): \n");
	scanf("%i", &n1);
	printf("Digite o ultimo numero do intervalo(inclusive): \n");
	scanf("%i", &n2);
	intervalo(n1,n2);
	return 0;
}
