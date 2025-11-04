#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    long long int m;
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&m);

        if(m==0)
        {
            printf("%lld",m);
        }

        while(m!=0)
        {
            int ld=m%10;
            m=m/10;
            printf("%d ",ld);
        }
        printf("\n");
    }
    return 0;
}