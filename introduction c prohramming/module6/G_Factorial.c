#include<stdio.h>
int main(){
    long long int n;
    scanf("%lld",&n);
    for(int i = 1; i <= n; i++){
        long long int x,mul=1;
        scanf("%lld",&x);
        for(int j = 1; j <= x; j++){
            mul = mul * j;
        }
        printf("%lld\n",mul);
    }
    return 0;
}