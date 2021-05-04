#include<stdio.h>
int main()
{
int x=456,sum=0,rem;
while(x!=0)
    {rem=x%10;
     sum=sum+rem;
     x=x/10;
    if(x==0 && sum>9)
        {x=sum;
        sum=0;
        }
    }
printf("%d",sum);
}

