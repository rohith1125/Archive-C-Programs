#include<stdio.h>
int main()
{
char a[100],x[20];
int i,n,s,e,j,c,isfound=1;
printf("Enter the sentence:\n");
gets(a);
printf("Enter the word to be deleted:\n");
gets(x);
for(i=0;a[i]!='\0';i++)
{}
n=i;
for(i=0;x[i]!='\0';i++)
{}
c=i;
for(i=0;i<n;i++)
    if(a[i]==x[0])
        {
        for(j=0;x[j]!='\0';j++)
            {
            if(a[i+j]!=x[j])
                {isfound=0;
                break;
                }
        if(isfound)
            s=i;
            }
        }
e=s+c-1;
for(i=0;i<n;i++)
{
    if(i<s||i>e)
        printf("%c",a[i]);
}
}


