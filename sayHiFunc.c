#include <stdio.h>
#include <stdlib.h>

void sayHi(char namef[]){
    printf("Hi, %s\n", namef);
}

int main(){
    char name[20];

    printf("Qual seu nome? ");
    scanf("%s", name);

    sayHi(name);
    
    return 0;
}


