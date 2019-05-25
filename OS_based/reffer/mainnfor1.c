#include "study.h"
#include <stdio.h>
#include <string.h>

//int sum(void);
a = 2;

static int c;
int sumn()
{
	c = a + b;
	return c;
}

int func(int x,int y,int *ps,int *pd,int *pp)
{
	*ps=x+y;
	*pd = x - y;
	*pp = x * y;
}
float addfp(int a, float b)
{
	return (a + b);
}
display(struct student *stu)
{
	printf("NAME:%s\tROLLNO:%d\tMARK:%d\n", stu->name, stu->rollno, stu->mark);
	for (count = 1;count < 3;count++)
	{

		if (count == 1)
		{
		//	strcpy(stu->name,"HARI");
			(stu->mark) = 20;
		}
		if (count == 2)
		{
		//	strcpy(stu->name,"NANA");
			(stu->mark) = 10;
		}
		(stu->rollno)++;

		printf("NAME:%s\tROLLNO:%d\tMARK:%d\n", stu->name, stu->rollno, stu->mark);
	}
}
