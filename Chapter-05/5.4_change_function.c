#include<stdio.h>

int change(int a);

int main(){
    int b = 22;
    int c = 0;
    c = change(b);
    printf("b is %d\n", b);
    printf("c is %d\n", c);
    return 0;
}

int change(int a){
    a = 77;
    return a;
}