#include"main.h"
#include"Rte_Types.h"
#include<stdio.h>

long int bankbalace;
#define BANKAMOUNT 100000
Intial_Detils daily1;

void main()
{

	os_init();
	os_shedule();

	
	var = 1;
	
		printf("Main Program!!!!!!\n");
		printf("Main Program_Work_started!!!!!!!\n");
		printf("!!!!!!!Did you withdrow the amount from bank!!!!!!!\n");
		scanf_s("%c", &daily1.answer);
		if ((daily1.answer) == 'y')
		{
			D_Detils(&daily1);
		}
//		else
		{ }
		

		getch();
	
}
