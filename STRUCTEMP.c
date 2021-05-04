#include<stdio.h>
struct emp{
int tag;
int sal;
int bon;
int ts;
}e;
int main()
{
printf("Enter tag and salary of employee:\n");
scanf("%d%d",&e.tag,&e.sal);
e.bon=e.sal/10;
e.ts=e.bon+e.sal;
printf("Tag:%d\n",e.tag);
printf("Salary:%d\n",e.sal);
printf("Bonus:%d\n",e.bon);
printf("Total salary:%d\n",e.ts);
}
