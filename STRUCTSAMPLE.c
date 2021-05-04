#include<stdio.h>
struct stud{
int roll;
int marks;
char name[30];
}s1;
int main()
{
printf("Enter roll no, marks ,name:\n");
scanf("%d%d%s",&s1.roll,&s1.marks,&s1.name);
printf("Roll Number:%d\n",s1.roll);
printf("Marks:%d\n",s1.marks);
printf("Name:%s",s1.name);
}
