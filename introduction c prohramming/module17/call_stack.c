#include<stdio.h>

void hello(){
    printf("hello\n");
    mello();
}

void mello(){
    printf("mello\n");
    gello();
}

void gello(){
    printf("gello\n");
}

int main(){
    printf("main function\n");
    hello();
    return 0;
}