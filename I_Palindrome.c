#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    char str[1000];
    scanf("%s",str);
    
    int n=strlen(str);
    bool flag= true;
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        if(str[i]!=str[j])
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