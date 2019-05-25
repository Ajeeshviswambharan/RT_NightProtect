#include<stdio.h>
#include<math.h>
#include "study.h"
unsigned int xx,yy=10,zz,choice,output;
float qq;
char cc,op;
//int i, j;

//display(struct student stu);

void main()
{
	float(*fpr)(int, float);
	float addfp(int, float), resultfp;
	fpr = addfp;
	a = 5;
	int noa=2, nob=3, sum, diff, prod;
	xx = sumn();
	int qq = 4, *ww;
	void *vp;
	vp = &qq;
	typedef struct student check;
	 check lana = { "LANA",2,30 };
//	struct student vana = { "VANA",3,40 };
#ifndef MAX
//	yy = ++xx;
	printf("Not Defined\n");
//	printf("sum yy=%d\n", yy);
	printf("sum xx=%d\n", xx);
	getch();
#endif
#ifdef MAX
	if (!(xx != 4) || !(xx!=5))
	{
		//	yy = xx++;
		zz=xx > yy ? 9 : 8;
		printf("Defined\n");
		printf("Sum yy=%d\n",sizeof(qq));
		printf("sum xx=%d\n", sizeof(zz));
		printf("Char%d\n", sizeof(cc));
		for (int i = 0;i < 5;i++)
		{
			printf("i=%d\n", i);
			for (int j = 0;j < 5;j++)
				printf("j=%d\t", j);
			printf("\n");
		}
		printf("###########SWITCH##################\n");
		printf("Enter the operation\n");
		printf("Value of qq=%d\n",*(int*)vp);
		scanf_s("%c",&op);
		printf("##########FUCTION POINTER###########\n");
			resultfp = addfp(5, 3.5);
		printf("Normal call=%f\n", resultfp);
		resultfp = (*fpr)(3, 2.2);
		printf("FP call=%f\n", resultfp);
		printf("#######STRUCTURE####################\n");
		display(&lana);
		
		switch(op)
		{
			case 'a':
				func(noa, nob, &sum, &diff, &prod);
				printf("Sum of numbers =%d\n",sum);
				printf("Diff of numbers =%d\n", diff);
				printf("Product of numbers =%d\n",prod);

				break;
			case 'b':
				printf("Two Entered\n");
				break;
			default:
				printf("Wrong Entry");
				break;

		}
		getch();
	}
	else
	{
		printf("unuseful\n");
		getch();
	}
#endif
}
