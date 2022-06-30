#include<stdio.h>
int main()
{
    int n,r,res,sum=0,pro=1;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum += r;
        pro *= r;
        res= pro- sum;
    }
    printf("%d",res);
} 
