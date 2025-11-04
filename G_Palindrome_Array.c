#include<stdio.h>
#include<stdbool.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    bool flag= true;
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        if(arr[i]!=arr[j])
        {
            flag=false;
        }
    }

    if(flag==true)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}