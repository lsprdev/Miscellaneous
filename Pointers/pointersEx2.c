#include <stdio.h>

int main(){

    int a = 1;
    printf("%d\n", a);

    int *prt = &a;
    printf("%d\n", prt);
    printf("%d\n", *prt);

    int *prt2 = &a;
    printf("%d\n", prt);
    printf("%d\n", *prt);
    printf("%d\n", *prt2);

    *prt = 2;

    printf("%d\n", a);
    printf("%d\n", *prt);
    printf("%d\n", *prt2);

    return 0;
}