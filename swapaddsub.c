#include<stdio.h>
int main()
{
    int a,b;
    printf("enter number in a:");
    scanf("%d",&a);
    printf("enter number in b:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swppping in a=%d\n",a);
    printf("after swppping in b=%d\n",b);
}