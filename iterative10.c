#include<stdio.h>
int main()
{
    int n,i;
    printf("enter a number");
    scanf("%d",&n);
    for(i=n;i<=n*10;i+=n)
    {
        printf("\n%d",i);
    }
    printf("\n");
    return 0;
}