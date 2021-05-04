#include<stdio.h>
int rrev(int x)
{
    static int rev=0;
    int z;
    if(x!=0)
    {
        rev=rev*10+(x%10);
        return rrev(x/10);
    }
    else
    {
        z = rev;
        rev = 0;
        return z;
    }

}
int main()
{int i,j,a[10][10],n;
printf("Enter the order:\n");
scanf("%d",&n);
printf("Enter the array:\n");
for(i=0;i<n;i++)
    for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
for(i=0;i<n;i++)
    for(j=0;j<n;j++)
        a[i][j]=rrev(a[i][j]);
for(i=0;i<n;i++,printf("\n"))
    for(j=0;j<n;j++)
        printf("%d\t",a[i][j]);
}
