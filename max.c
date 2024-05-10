#include<stdio.h>
int main()
{
    int a=1;
    int b=4;
    int c=3;
    int m=a;
    (m<b)&&(m=b);
    (m<c)&&(m=c);
    printf("maxmimum %d ",m);
    return 0;

}