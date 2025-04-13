#include<stdio.h>
int main(){
    char ch;
    int digit;
    scanf("%c",&ch);
    digit = (int)ch;

    if(digit >= 65 && digit <= 90){
        digit = digit + 32;
        printf("%c",(char)digit);
    }
    else if (digit >= 97 && digit <= 122){
        digit = digit - 32;
        printf("%c",(char)digit);
    }

    //! another way to solve this problem
    if(ch >= 'a' && ch <= 'z'){
        ch = ch - 32;
        printf("%c",ch);
    }else{
        ch = ch + 32;
        printf("%c",ch);
    }
    return 0;
}