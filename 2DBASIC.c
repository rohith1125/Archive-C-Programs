#include<stdio.h>
int main()
{
int i,j,x[10][10],n;
printf("Enter the order:\n");
scanf("%d",&n);
printf("Enter the array:\n");
for(i=0;i<n;i++)
    for(j=0;j<n;j++)
        scanf("%d",&x[i][j]);
for(i=0;i<n;i++,printf("\n"))
    for(j=0;j<n;j++)
        printf("%d\t ",x[i][j]);
}
