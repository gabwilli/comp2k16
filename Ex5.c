#include <stdlib.h>
#include <stdio.h>

int sub(int *vet, int i, int m){
	
	
	printf("\nAs subsequencias sao: \n\n");
	for(i=0;i<m;i++){
		if(vet[i+1]> vet[i]){
			printf("%d", vet[i]);
		}
		else{
			printf("%d\n", vet[i]);
			puts("");
		}
	}
}

int main() {
	
	int m, i, vet[100];
	
	printf("Insira o tamanho do vetor: ");
	scanf("%d",&m);
	
	printf("\nDigite os elementos do vetor: \n");
	for(i=0;i<m;i++){
		printf("Elemento %d: ",i+1);
		scanf("%d",&vet[i]);
	}
	
	sub(vet,i,m);
	
	system("pause");
	return 0;	
}
