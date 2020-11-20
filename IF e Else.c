#include <stdio.h>

void main(){
    
    int a, b, x;
    
    printf("Digite o núemro para 'a':");
    scanf("%d", &a);
    
    printf("Digite o número para 'b':");
    scanf("%d", &b);
    
    x = a*b;
    
    printf("A multiplicação entre %d e %d é %d.", a, b, x);
    
    if (a != b){
        printf("\nOs números são diferentes.");
    } else {
        printf("Os números são iguais.");
    }
    
    
    return 0;
}