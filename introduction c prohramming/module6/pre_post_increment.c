#include<stdio.h>
int main(){
    //! post inc => age code run hobe then inc hobe x=10..y=10...x=11
    int x = 10;
    int y = x++;
    printf("%d %d\n",x,y);

    //! pre inc => age inc hobe then code er kaj hobe c=100...c=101...d=101
    int c = 100;
    int d = ++c;
    printf("%d %d\n",c,d);
    return 0;
}