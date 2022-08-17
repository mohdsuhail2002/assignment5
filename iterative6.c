#include<stdio.h>
int main()
{
    int i,n;
    printf("enter a number");
    scanf("%d",&n);
    for(i=2;i<=n*2;i+=2)
    {
        printf("\n%d",i);
    }
    printf("\n");
    return 0;
}