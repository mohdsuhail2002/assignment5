#include<stdio.h>
int main()
{
    int i,n;
    printf("enter a number");
    scanf("%d",&n);
    for(i=n*2;i>0;i-=2)
    {
        if(i%2==0)
        {
            i=i-1;
        }
        printf("\n%d",i);
    }
    printf("\n");
}