#include<stdio.h>
#include<math.h>
int main()
{
    float i,n;
    printf("enter a number");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
       printf("\n%f",pow(i,3));
    }
    printf("\n");
    return 0;
}