#include<stdio.h>
#include<string.h>
int main(){
    //string input
    // char s[10];
    // printf(("Enter a string: "));
    // scanf("%s",&s);
    // printf("%s",s);

    //! string with space
    // char a[50];
    // gets(a);
    // printf("%s",a);

    //! fgets(string_name,size,stdin)
    char a[50];
    fgets(a,20,stdin);
    printf("%s",a);
    return 0;
}