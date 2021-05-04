#include<stdio.h>
struct stud{
int roll;
int marks;
char name[30];
}s[10];
int main()
{
int n,i;
printf("Database for how much students:\n");
scanf("%d",&n);
printf("Enter roll no, marks ,name:\n");
for(i=0;i<n;i++)
    scanf("%d%d%s",&s[i].roll,&s[i].marks,&s[i].name);
for(i=0;i<n;i++)
    {printf("Roll Number:%d\n",s[i].roll);
    printf("Marks:%d\n",s[i].marks);
    printf("Name:%s",s[i].name);
    }
}
