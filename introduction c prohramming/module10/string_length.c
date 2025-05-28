#include<stdio.h>
int main(){
    char s[50];
    scanf("%s",s);

    // int count = 0;
    // for(int i = 0; s[i] != '\0'; i++){
    //     count++;
    // }

    //! shortcut to find length
   int size = strlen(s);
    printf("%d",size);
    return 0;
}