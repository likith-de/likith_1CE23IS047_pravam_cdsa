#include<stdio.h>

void myfrank();
int main()
{
    printf("Hello  World");
    myfrank();
    printf("Hello World 2\n");
    myfrank();
    printf("Hello World 3\n");
    return 0;
}
void myfrank()
{
    int x=5;
    printf("%d\n",x);
    x++;
}