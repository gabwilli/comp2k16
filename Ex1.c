#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void calculadora(float a, char op, float b,float*resultado){
    
    if(op == '+'){
          *resultado = a + b;      
    }
        
    else if(op == '-'){
          *resultado = a - b;      
    }
    
    else if(op == '*'){
          *resultado = a * b;      
    }
    
    else if(op == '/'){
          *resultado = a / b;      
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    float resultado,a, b;
    char op;
    
    printf("Insira o primeiro n�mero: ");
    scanf("%f",&a);
    fflush(stdin);
    
    printf("Insira o operador (Divis�o = /) (Soma = +) (Subtra��o = -) (Multiplica��o = *): ");
    scanf("%c",&op);
    fflush(stdin);
    
    printf("Insira o segundo n�mero: ");
    scanf("%f",&b);
    fflush(stdin);
    
    calculadora(a,op,b,&resultado);
    printf("\nResultado de: %.2f %c %.2f = %.2f\n", a, op, b, resultado);

    system("Pause");
    return 0;
}
