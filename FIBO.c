#include<stdio.h>
int main()
{
int a=0,b=1,c,i,n;
printf("Enter till which fibo:\n");
scanf("%d",&n);
printf("0\t");
for(i=1;i<n;i++)
    {
    printf("%d\t",b);
    c=a+b;
    a=b;
    b=c;
    }
}
