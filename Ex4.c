#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int dist(int n, int *X, int *Y, float *d){
	 
	int i, sub = 0, quadrado = 0, result = 0;
	
	for(i=0;i<n;i++){
		sub = X[i] - Y[i];
		result = result + pow(sub,2);
	}
	
	*d = sqrt(result);
}

int leitura(int n){
	
	int i, X[100], Y[100];
	float d = 0;
	
	printf("\nDigite os valores do vetor X: \n");
	for(i=0;i<n;i++){
		printf("Insira o valor do elemento %d: ",i+1);
		scanf("%d",&X[i]);
	}
	
	printf("\nDigite os valores do vetor Y: \n");
	for(i=0;i<n;i++){
		printf("Insira o valor do elemento %d: ",i+1);
		scanf("%d",&Y[i]);
	}
	
	dist(n, X, Y, &d);
	
	printf("A distancia entre os vetores e: %.3f\n", d);
}

int main(){
	
	int m, i, n;
	
	printf("Insira o numero de pares de vetores: ");
	scanf("%d",&m);
	
	printf("Insira o tamanho dos vetores : ");
	scanf("%d",&n);	
	
	for(i=0;i<m;i++){
		leitura(n);
	}
	
	system("Pause");
	return 0;
}
