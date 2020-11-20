#include <stdio.h>

void main(){
    
    int age;
    
    
    char name[60];
    printf("Type your name:");
    gets(name);
    
    printf("Now, type your age:");
    scanf("%d", &age);
    
    printf("Your name is %s, and your age is %d", name, age);
    
    
    
    
    
    
    
    return 0;
    
}