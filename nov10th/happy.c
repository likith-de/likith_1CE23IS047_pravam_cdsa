#include <stdio.h>
#include<stdlib.h>

int main() 
{
    char **s=NULL;
    int n=0;
    scanf("%d",&n);

    s=(char **)malloc(n*sizeof(char*));
    for (int i=0;i<n;i++)
    {
        s[i]=(char*) calloc(1000,sizeof(char*));
        scanf("%s",&s[i]);
    }
    for (int i=0;i<n;i++)
    {
        int flag=0;
        for (int j=0;s[i][j]!='\0';j++)
        {
            if(s[i][j]=='A'||s[i][j]=='E'||s[i][j]=='I'||s[i][j]=='o'||s[i][j]=='U');
            else {
                printf("\nsad");
                flag=1;
                break;
            }

        }
         if(!flag)printf("\nHappy");
    }
    
    return 0;

}