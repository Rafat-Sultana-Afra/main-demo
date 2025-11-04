#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10], str2[10];
    scanf("%s",str1);
    scanf("%s",str2);

    int s1=strlen(str1);
    int s2=strlen(str2);

    char con_str[s1+s2];
    for(int i=0;str1[i];i++)
    {
        con_str[i]=str1[i];
    }
    for(int i=0;str2[i];i++)
    {
        con_str[i+s1]=str2[i];
    }
    con_str[s1+s2]='\0';
    
    int new_len=s1+s2-2;
    char con_nstr[new_len];
    for(int i=1;i<=new_len;i++)
    {
       con_nstr[i-1]=con_str[i];
    }
    con_nstr[new_len]='\0';
    // for(int i=1,j=new_len-2;i<j;i++,j--)
    // {
    //     char temp=con_nstr[i];
    //     con_nstr[i]=con_nstr[j];
    //     con_nstr[j]=temp;
    // }

    char string2[3]={str1[0],str2[s2-1],'\0'};

    printf("%d %d\n",s1,s2);
    printf("%s\n",con_str);
    printf("%s %s",con_nstr, string2);

    return 0;
}