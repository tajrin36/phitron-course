#include <stdio.h>
#include <string.h>
 
int main() {
    char s[1000],t[1000];
    scanf("%s",s);
    scanf("%s",t);
    int len_s = strlen(s);
    int len_t = strlen(t);
    printf("%d %d\n",len_s,len_t);
    printf("%s %s",s,t);
 
    return 0;
}