#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        int num;
        scanf("%d",&num);
        long long int m=1;
        for(int j=1;j<=num;j++)
        {
            m=m*j; 
        }
        printf("%lld\n",m);
    }
    return 0;
}