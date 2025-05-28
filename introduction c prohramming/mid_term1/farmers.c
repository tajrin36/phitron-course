#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        int total_work = a * c;
        int total_workers = a + b;
        int total_days = total_work / total_workers;
        int result = c - total_days; 

        printf("%d\n",result);
    }
    return 0;
}