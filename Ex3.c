#include <stdio.h>
#include <stdlib.h>

int funcao(int n, int m,int *A,int *B,int *C){
	
	int i, ward1 = 0, ward2 = 0, ward3 = 0;
	
	for(i=0;i<(n+m);i++){
		if(ward1%2 == 0){
			C[ward1] = A[ward2];
			ward1 ++;
			ward2 ++;
		}
		else{
			C[ward1] = B[ward3];
			ward1 ++;
			ward3 ++;
		}
	}
}

int main(){
	
	int n, m, C[100], i, A[100], B[100];
	
	printf("Insira o tamanho do vetor A (<100): ");
	scanf("%d",&n);	
	
	printf("Insira o tamanho do vetor B (<100): ");
	scanf("%d",&m);
	
	printf("\nInsira os elementos do vetor A: \n");
	for(i=0;i<n;i++){
		printf("Insira o valor do elemento %d: ",i+1);
		scanf("%d",&A[i]);
	}
	
	printf("\nInsira os elementos do vetor B: \n");
	for(i=0;i<m;i++){
		printf("Insira o valor do elemento %d: ",i+1);
		scanf("%d",&B[i]);
	}
	
	funcao(n, m, A, B, C);
	
	printf("Os elementos do vetor C sao: \n");
	for(i=0;i<(n+m);i++){
		printf("%d ",C[i]);
	}
	
	system("pause");
	return 0;	
}
