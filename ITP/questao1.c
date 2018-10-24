#include <stdio.h>
#include <stdlib.h>
int main(){
	char letras[3];
	FILE *ptr= fopen("permuta.txt", "w");
	printf("Digite as 3 letras: \n");
	fgets(letras, 3, stdin);
	getchar();
	if(ptr==NULL){
		printf("Erro!\n");
		return -1;
	}else{
		for (int i = 0; i < 3; i++)
		{
			for (int l = i+1; l < 3; l++)
			{
				for (int j = l+1; j < 3; j++)
				{
					if(i!=j||i!=l||l!=i){
						printf("%i%i%i\n",i,l,j);
						fprintf(ptr, "%c%c%c\n",letras[i],letras[l],letras[j]);
					}
				}
			}
		}
	}
	fclose(ptr);
	return 0;
}
