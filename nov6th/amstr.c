#include <stdio.h>
#include <math.h>

int main() 
{
    int no=0,t=0,sum=0;
    scanf("%d",&no);
    t=no;
    sum+=(t%10)*(t%10)*(t%10);
    t/=10;
    sum+=(t%10)*(t%10)*(t%10);
    t/=10;
    sum+=(t%10)*(t%10)*(t%10);

    if(sum==no)
        printf("%d is an amstrong number\n",no);
    else
        printf("%d is not an amstrong number\n",no);
    return 0;
}
    