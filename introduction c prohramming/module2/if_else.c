#include<stdio.h>
int main(){

    int taka;
    printf("Enter your amounts: ");
    scanf("%d",&taka);


    //! type-1(normal if-else)
    if(taka >= 100){
        printf("pizza khete parbo :) \n");
    }
    else{
        printf("pizza khete parbo na :( \n");
    }

    //! type-2(if-else ladder)
    if(taka >= 100){
        printf("pizza khabooo\n");
    }
    else if (taka >= 50){
        printf("fuchka khaboo\n");
    }
    else if (taka >= 20)
    {
        printf("chips khabo");
    }
    else{
        printf("kichui khabo na...ami gorib\n");
    }

    //! type-3(nested if else)
    if(taka >= 5000){
        printf("cox's bazar jaboo!\n");
        if(taka >= 10000){
            printf("sant martin jaboo\n");
        }
        else{
            printf("cox's a theke jabo\n");
        }
    }
    else{
        printf("cox's jabo na karon ami gorib\n");
    }
    return 0;
}