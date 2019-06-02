#include"main.h"
#include"Rte_Types.h"
#include<stdio.h>
#include<string.h>

long int bankbalace;

Intial_Detils daily1;
float total_Vages;
static int count;
void main()
{

	os_init();
	os_shedule();

	
	var = 1;
	
		printf("Main Program!!!!!!\n");
		printf("Main Program_Work_started!!!!!!!\n");
		again:
		printf("---------Enter the date in DDMMYYYY format----\n");
		scanf_s("%d", &daily1.date);
		Date_verify(&daily1.date);
		if (flag_date == 0 && flag_month == 0 && flag_year == 0)
		{
			printf("!!!!!!!Did you withdrow the amount from bank!!!!!!!\n");
			scanf_s("%c", &daily1.answer);
			if ((daily1.answer) == 'y')
			{
				D_Detils(&daily1);
				total_Vages = sum_vages(&daily1);
				printf("----TOTAL EXPENSE=%f\n", daily1.total);
			}
		}
		else
		{
			count++;
			if (count > 3)
			{
				
				getch();
			}
			goto again;
		}
		getch();
		
	
}
