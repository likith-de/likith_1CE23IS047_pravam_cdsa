#include<stdio.h>
#include <string.h>
struct s1
{
    int a;
    double b;
};

int main()
{
    printf("%d",sizeof(struct s1));
    return 0;
}