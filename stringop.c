#include<stdio.h>
#include<stdlib.h>
char str[50],pat[20],rep[20],ans[50];
int c=0,m=0,i=0,j=0,k,flag=0;
void stringmatch()
{
    while(str[c]!='\0')
    {
        if(str[m]==pat[i])
        {
            i++;
            m++;
            if(pat[i]=='\0')
            {
                flag=1;
                for(k=0;rep[k]!='\0';k++,j++)
                {
                    ans[j]=rep[k];
                }
                i=0;
                c=m;
            }
        }
        else
        {
            ans[j]=str[c];
            j++;
            c++;m=c;
            i=0;
        }
    }
    ans[j]='\0';
    
}
int main()
{
    printf("enter the main string");
    gets(str);
    printf("enter the pat string");
    gets(pat);
    printf("enter the replace string");
    gets(rep);
    stringmatch();
    if(flag==1)
    printf("resultant string is %s",ans);
    else
    printf("pattern string is not found");
}