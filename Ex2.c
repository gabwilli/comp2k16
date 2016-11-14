#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int funcao(int n, int m, float *x, int*ward){
    int i;
 
    for(i=0;i<m;i++){
        if(x[i] == n){
            (*ward)++;
        }
    } 
}
    
int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int n, m, i, ward = 0;
    float x[100];
    
    printf("Insira um numero (0 < n <= 100): ");
    scanf("%d",&n);
    
    printf("Insira o numero de elementos do vetor: ");
    scanf("%d",&m);
    
    printf("Insira os elementos reais do vetor: \n");
    
    for(i=0;i<m;i++){
        printf("\nInsira o %dº número: ",i+1);
        scanf("%f",&x[i]);
    }
    
    funcao(n, m, x, &ward);
    printf("\nO numero inserido aparece %d vezes no vetor\n", ward);

    system("pause");
    return 0;
}
