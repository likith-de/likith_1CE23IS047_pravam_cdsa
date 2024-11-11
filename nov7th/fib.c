#include<stdio.h>

int main()
{
    int n;
    long fibbo=n;
    scanf("%d",&n);
    for(int i=2;i<=n;fibbo+=i++);

    printf("%ld\n",fibbo);
    return 0;
}