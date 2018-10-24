#include <stdio.h>
int tetranacci (int n){
	if(n==1||n==2||n==3){
		return 0;
	}
	if(n==4){
		return 1;
	}
	else{
		return tetranacci(n-1)+tetranacci(n-2)+tetranacci(n-3)+tetranacci(n-4);
	}
}
int main(){
	int n;
	printf("Digite a quantidade de numeros: \n");
	scanf("%i", &n);
	for (int i = 0; i < n; i++)
	{
		printf("%i ",tetranacci(i+1));
	}

	return 0;
}
