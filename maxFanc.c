#include <stdio.h>

int maxNum(int n1f, int n2f){
    int result;
    if(n1f > n2f){
        result = n1f;
    } else{
        result = n2f;
    }
    return result;
}

int main(){
    int n1, n2;

    printf("Digite um número: ");
    scanf("%d", &n1);
    printf("Digite outro número: ");
    scanf("%d", &n2);

    printf("O mair número é: %d\n", maxNum(n1, n2));
    
    return 0;
}