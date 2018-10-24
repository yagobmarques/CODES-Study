#include <stdio.h>
#include <string.h>
struct pessoa{
	char nome[200];
	int idade;
};
void alfa(struct pessoa individuos[5]){
	struct pessoa aux;
	for (int i = 0; i < 5; i++)
	{
		for (int l = i; l < 5; l++)
		{
			if(i!=l){
				if(strcmp(individuos[i].nome,individuos[l].nome)==1){
					aux=individuos[i];
					individuos[i]=individuos[l];
					individuos[l]=aux;

				}
			}
		}
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%s de idade %i\n",individuos[i].nome, individuos[i].idade);
	}
}
void num (struct pessoa individuos[5]){
	struct pessoa aux;
	for (int i = 0; i < 5; i++)
	{
		for (int l = 0; l < 5; l++)
		{
			if(individuos[i].idade<individuos[l].idade){
				aux=individuos[i];
				individuos[i]=individuos[l];
				individuos[l]=aux;
			}
		}
	}

	for (int i = 0; i < 5; i++)
	{
		printf("%s de idade %i\n",individuos[i].nome, individuos[i].idade);
	}
}

int main(){
	struct pessoa individuos[5];
	int controle;
	for (int i = 0; i < 5; i++)
	{
		printf("=======Pessoa %i: \n", i+1);
		printf("Nome: ");
		fgets(individuos[i].nome,200,stdin);
		printf("Idade: ");
		scanf("%i", &individuos[i].idade);
		getchar();
	}
	printf("Digite 1 para mostrar em ordem alfabetica, ou 2 para ordem de nascimento: ");
	scanf("%i", &controle);
	if(controle==1){
		alfa(individuos);
	}
	else{
		num(individuos);
	}
	return 0;
}
