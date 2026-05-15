#include <stdio.h>

typedef int (*BinOp)(int, int);

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }

int compute(int a, int b, int(*fp)(int, int)) {
    if(fp == NULL) {
        printf("NULL pointer\n");
        return -1;
    } else {
        return fp(a, b);
    }
}

int main(void) {
    int a = 10, b = 5;
     
    printf("%d\n", compute(a, b, add));
    printf("%d\n", compute(a, b, sub));
    printf("%d\n", compute(a, b, mul));
    printf("%d\n", compute(a, b, NULL));
    
}
