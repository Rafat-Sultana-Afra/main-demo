#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        
        int s = 0;

        if(x>y)
        {
            int temp=x;
            x=y;
            y=temp;
        }

        for (int j = x + 1; j < y; j++)
        {
            if (j % 2 != 0)
            {
                s = s + j;
            }
        }
        printf("%d\n",s);
    }
    return 0;
}