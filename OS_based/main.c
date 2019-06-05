#define _CRT_SECURE_NO_WARNINGS 
#include"main.h"
#include"Rte_Types.h"
#include<stdio.h>

#include<string.h>
#include <stdlib.h>

int da, mon, yr;
long int bankbalace;

Intial_Detils daily1;

//float total_Vages;
static int count;
FILE *fp;
void main()
{

	os_init();
	os_shedule();
	daily1.current_bank_amount = 165000.50;
	var = 1;
	    fp = fopen("D:\\RT_NightProtect\\database.txt", "a+");
		printf("Main Program!!!!!!\n");
		printf("Main Program_Work_started!!!!!!!\n");
		printf("---------Enter the date in DDMMYYYY format----\n");
	    again:
		if (count)
		
		printf("---------Enter the date again in  DDMMYYYY format----\n");
		scanf_s("%d", &daily1.date);
		Date_verify(&daily1.date);
		if (flag_date == 0 && flag_month == 0 && flag_year == 0)
		{
			fprintf(fp, "\n%d", daily1.date);
			
			label2:
			printf("!!!!!!!Did you withdrow the amount from bank!!!!!!!\n");
			scanf_s(" %c", &daily1.answer);
			if ((daily1.answer) == 'y')
			{				
				bank_Details(&daily1);
				compare_amount(&daily1.current_bank_amount);
				printf("Current Bank Balance=%f\n", (daily1.current_bank_amount));
				fprintf(fp, "%d", (daily1.current_bank_amount));
				fclose(fp);
			}
			else if ((daily1.answer) == 'n')
			{
				compare_amount(&daily1.current_bank_amount);
				printf("Current Bank Balance=%f\n",(daily1.current_bank_amount));
			}
			else
			{
				printf("XXXXXX INVALID ENTRY PLEASE ENTER y OR n XXXXXX\n");
				goto label2;
			}
			 D_Detils(&daily1);
			(daily1.total) = sum_vages(&daily1);
			printf("----TOTAL EXPENSE FOR THE  %d_%d_%d DATE =%f\n",da,mon,yr,(daily1.total));
			//B_current(&daily1.total,&daily1.widrow_bank_amount);
			printf("\n");
			printf("\n");
			printf("____________________________________________________________________________________________________\n");
			printf("Current Bank Balance=%f\n", (daily1.current_bank_amount));
			printf("Updated Widrow Balance=%f\n", (daily1.current_bank_amount));
			printf("____________________________________________________________________________________________________\n");
			printf("\n");
			printf("\n");

			
		}
		else
		{
			flag_date = 0;
			flag_month = 0;
			flag_year = 0;
			count++;
			if (count > 1)
			{
				printf("@@@@@@@@@@ WRONG DATE ENTERED 2 TIMES...PLEASE HIT ENTER TO TERMINATE @@@@@@@@\n");
				getch();
			}
			else
			goto again;
		}
		getch();
		
	
}
