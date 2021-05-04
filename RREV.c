#include<stdio.h>
int rrev(int x)
{
static int rev=0;
if(x!=0)
    {
        rev=rev*10+(x%10);
        return rrev(x/10);
    }
else
    return rev;
}
int main()
{
int a;
printf("Enter a number:\n");
scanf("%d",&a);
printf("Reversed number:%d\n",rrev(a));
}
