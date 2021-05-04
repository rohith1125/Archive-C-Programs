#include<stdio.h>
int main()
{
int l,i,flag=l;
char str[50];
printf("Enter the string:\n");
gets(str);
for(i=0;str[i]!='\0';i++)
{}
l=i;
for(i=0;i<l/2;i++)
    if(str[i]!=str[l-i-1])
        {flag=0;
        break;}
if(flag)
    printf("palindrome\n");
else
    printf("not a palindrome\n");
}
