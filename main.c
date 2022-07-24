#include <stdio.h>
#include <math.h>
int main()
{
    int n,dig=0,sum=0,cpy1,cpy2;
    printf("Please enter the value of n: ");
    scanf("%d",&n);
    for(int i=100;i<=n;i++)
    {
        cpy1=i;
        while(cpy1!=0)
        {
            cpy1=cpy1/10;
            ++dig;
        }
        cpy2=i;
        while(cpy2!=0)
        {
            sum+=pow((cpy2%10),dig);
            cpy2=cpy2/10;
        }
        if(sum==i)
        {
            printf("%d ",i);
        }
        sum=0;
        dig=0;
    }
}