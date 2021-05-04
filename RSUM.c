#include<stdio.h>
int rsum(int x)
{
static int sum=0,z;
if(x!=0)
    {
    sum+=x%10;
    return rsum(x/10);
    }
else
    {z=sum;
    sum=0;
    return z;}
}
int main()
{
int i,a[10],n;
printf("Enter size of array:\n");
scanf("%d",&n);
printf("Enter array:\n");
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
for(i=0;i<n;i++)
    a[i]=rsum(a[i]);
printf("New array:");
for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}
