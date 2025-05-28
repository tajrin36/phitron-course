#include<stdio.h>
int main(){
    int password;
    while(scanf("%d",&password)){
        if(password != 1999){
            printf("Wrong\n");
        }else{
            printf("Correct");
            break;
        }
    }
    return 0;
}