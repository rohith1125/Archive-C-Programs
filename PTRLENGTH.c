#include<stdio.h>
int main()
{
int i;
char str[40],*p;
printf("Enter string:\n");
gets(str);
p=str;
for(i=0;*p!='\0';i++)
    {
    p++;
    }
printf("The length of string is:%d\n",p-str);
}
