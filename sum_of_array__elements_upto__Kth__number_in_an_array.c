#include<stdio.h>
int main()
{
    int n,a[100],s[100];
    scanf("%d",&n);
    int i,sum=0,x,b,j=0,min=0;
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("
%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]<=x)
        {
            sum+=a[i];
        }
    }
    printf("%d",sum);
}