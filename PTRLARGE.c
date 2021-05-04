#include<stdio.h>
int main()
{
int n,a[20],i,*p,l=0;
printf("Enter the size of array:\n");\
scanf("%d",&n);
printf("Enter the array:\n");
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
p=a;
for(i=0;i<n;i++)
    {if(*p>l)
        l=*p;
    p++;
    }
printf("The largest number in array is:%d",l);
}
