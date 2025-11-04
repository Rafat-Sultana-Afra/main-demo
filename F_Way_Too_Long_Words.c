#include<stdio.h>
#include<stdbool.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        char str[100];
        scanf("%s",str);

        int size=strlen(str);
        if(size<=10)
        {
              printf("%s\n",str);
        }
        else
        {
            printf("%c%d%c\n",str[0],size-2,str[size-1]);
        }
    }
    return 0;
}