#define _CRT_SECURE_NO_WARNINGS
#include"main.h"
#include"Rte_Types.h"
#include<math.h>
#include<stdio.h>
int var=2;
static int count;
_Bool flag_date, flag_month, flag_year;
_Bool terminate=0;
FILE *fp;
int da, mon, yr;
extern choice_get;
os_init()
{
//	var = 1;
	printf("OS_Intialization!!!!!\n");
	return EOK;
}
os_shedule()
{
//	var = 1;
	printf("OS_schedule!!!!!\n");
	return EOK;
}
date(Intial_Detils* Day1)
{
	printf("---------Enter the date in DDMMYYYY format----\n");
	again:
	if (count)
	printf("---------Enter the date again in  DDMMYYYY format----\n");
	scanf_s("%d", &Day1->date);
	Date_verify(&Day1->date);
	if (flag_date == 0 && flag_month == 0 && flag_year == 0)
	{
		
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
			terminate=1;
			getch();
		}
		else
			goto again;
	}
}
Date_verify(int* Ddate_v)
	{

		printf("----Date entered=%d\n", *Ddate_v);
		int ab = *Ddate_v;
		da = ab / 1000000;
		mon = ab / 10000;
		mon = mon % 100;
		yr = ab % 10000;
		if (da == 0 || da >= 32)
		{
			printf("*******Entered a Wrong Day******\n");
			flag_date = 1;
		}
		if (mon == 0 || mon >= 13)
		{
			printf("----month =%d\n", mon);
			printf("*******Entered a Wrong Month******\n");
			flag_month = 1;
		}
		if (yr != CURRENTYEAR)
		{
			printf("*******Entered a Wrong Year******\n");
			flag_year = 1;

		}
	}

withdrwal(Intial_Detils* wdrw)
{
		printf("Current Bank Balance=%f\n", (wdrw->current_bank_amount));
		bank_Details(wdrw);
		compare_amount(&wdrw->current_bank_amount);
		printf("Current Bank Balance=%f\n", (wdrw->current_bank_amount));
		
	
	
}
bank_Details(Intial_Detils* bank)
{
	printf("----ENTER THE AMOUNT WITHDROWN----\n");
	scanf_s("%f", &(bank->widrow_bank_amount));

	bank->current_bank_amount = (bank->current_bank_amount) - (bank->widrow_bank_amount);

}
compare_amount(long float* current_bank_amount1)
{
	int condition;
	long float amount1 = *current_bank_amount1;
	condition = (amount1 < BANKAMOUNT) ? 1 : 2;
	switch (condition)
	{
	case 1:
		printf("&&&&&&&&&&&WARNING&&&&&&&&&&&&&&&&&\n");
		printf("____________BALANCE LOW_____________\n");
		printf("&&&&&&&&&&&WARNING&&&&&&&&&&&&&&&&&\n");
		break;
	case 2:
		printf("____________SUFFICIENT BALANCE_____________\n");
		break;

	default:
		break;
	}


}


D_Detils(Intial_Detils* Day1)

{
	printf("---------Enter the number of purchace----\n");
	scanf_s("%d", &Day1->number);
	printf("----Number of Purchase=%d\n", Day1->number);
	return EOK;


}
float sum_vages(Intial_Detils* Daytoday)
{
	
	for (int i = 1;(i <=(Daytoday->number));i++)
	{
	printf("----Enter the %d purchase amount---\n", i);
	scanf_s("%f",&Daytoday->amount[i]);
	Daytoday->total = (Daytoday->total) + (Daytoday->amount[i]);
	}
	Daytoday->widrow_bank_amount = (Daytoday->widrow_bank_amount) - (Daytoday->total);
	printf("----TOTAL EXPENSE FOR THE  %d_%d_%d DATE =%f\n", da, mon, yr, Daytoday->total);
	return Daytoday->total;
}


updated_balance(Intial_Detils* dbase)
{
	printf("\n");
	printf("\n");
	printf("____________________________________________________________________________________________________\n");
	printf("Current Bank Balance=%f\n", (dbase->current_bank_amount));
	printf("Updated Widrow Balance=%f\n", (dbase->widrow_bank_amount));
	printf("____________________________________________________________________________________________________\n");
	printf("\n");
	printf("\n");
	fprintf(fp, "\n%d",(dbase->date));
	fprintf(fp, "%F", (dbase->current_bank_amount));
	fprintf(fp, "%F", (dbase->widrow_bank_amount));
	fclose(fp);

}
