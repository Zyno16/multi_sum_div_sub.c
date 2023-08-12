#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    float x,y,sum,multi,div,sub;
    printf("enter x?:");
    scanf("%f",&x);
    printf("enter y?:");
    scanf("%f",&y);
    sum=x+y;
    multi=x*y;
    div=x/y;
    sub=x-y;
    printf("the sum is  :%0.2f\n",sum);
    printf("the multi is:%.2f\n",multi);
    printf("the div is  :%.2f\n",div);
    printf("the sub is  :%.2f\n",sub);

    return 0;
}
