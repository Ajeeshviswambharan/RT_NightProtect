#define _CRT_SECURE_NO_WARNINGS
#ifndef INTIAL
#define INITAL 0
#endif // !INTIAL
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
database_read(Intial_Detils* dbase)
{
	char line[81], rbbalancea[7], withdrowa[7], read_a[7];
	long rdate=0,rbbalance=0,rwithdrw=0, read_n=0;
	int e_flag=0,i,j=0,k=0,l=0;
//	fp = fopen("D:\\RT_NightProtect\\database.txt", "a+");
	if (fp != NULL)
	{
		while (!feof(fp))
		{
			fgets(line, 81, fp);
			if (INITAL)
			{
				printf("READ1=%s\n", line);

				if (line[0] == NULL)
				{
					printf("INTIAL BEBUGG\n");
					dbase->date = 0;
					dbase->current_bank_amount = 0;
					dbase->widrow_bank_amount = 0;
					fprintf(fp, "\n%d", (dbase->date));
					fprintf(fp, "%c", 'E');
					fprintf(fp, "%li", (dbase->current_bank_amount));
					fprintf(fp, "%c", 'E');
					fprintf(fp, "%li", (dbase->widrow_bank_amount));
					fprintf(fp, "%c", 'E');
					fclose(fp);
				}
			}
		}					
			for (i = 0;line[i] != 'E';i++)
			{
				rdate = atol(line);
				e_flag = 1;
				//printf("Last date=%li\n", rdate);
			}
			i++;

			for (;line[i] != 'E';i++)
			{
				if (e_flag == 1)
				{
					rbbalancea[j] = line[i];
					//printf("Last bank balance char=%s\n", rbbalancea);
					rbbalance = atol(rbbalancea);
					//printf("Last bank balance=%li\n", rbbalance);
					j++;
				}
			}
			i++;
			for (i;line[i] != 'E';i++)
			{

				withdrowa[k] = line[i];
				rwithdrw = atol(withdrowa);
				//printf("Last withdrow balance=%li\n", rwithdrw);
				k++;
			}
			i++;
			for (i;line[i] != 'E';i++)
			{

				read_a[l] = line[i];
				read_n = atol(read_a);
				//printf("Last withdrow balance=%li\n", rwithdrw);
				l++;
			}
			dbase->date = rdate;
			dbase->current_bank_amount = rbbalance;
			dbase->widrow_bank_amount = rwithdrw;
			dbase->total = read_n;
			//printf("LAST UPDATED DATE:")
			printf("CURRENT BANK BALANCE=%li\n", dbase->current_bank_amount);
			printf("LAST WTHDROWAL BALANCE=%li\n", dbase->widrow_bank_amount);
			printf("   _________________________________________________\n");
	
		
	}	
		//(dbase->current_bank_amount) = (double)line;
	
	else
		exit(0);

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

		//printf("----Date entered=%d\n", *Ddate_v);
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
		printf("Current Bank Balance=%li\n", (wdrw->current_bank_amount));
		bank_Details(wdrw);
		compare_amount(&wdrw->current_bank_amount);
		printf("Current Bank Balance=%li\n", (wdrw->current_bank_amount));
		
	
	
}
bank_Details(Intial_Detils* bank)

{
	long withdrow;
	printf("----ENTER THE AMOUNT WITHDROWN----\n");
	scanf_s("%li", &(withdrow));

	bank->current_bank_amount = (bank->current_bank_amount) - withdrow;
	bank->widrow_bank_amount = (bank->widrow_bank_amount) + withdrow;

}
compare_amount(long * current_bank_amount1)
{
	int condition;
	long amount1 = *current_bank_amount1;
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
	Daytoday->total = 0;
	for (int i = 1;(i <=(Daytoday->number));i++)
	{
	printf("----Enter the %d purchase amount---\n", i);
	scanf_s("%li",&Daytoday->amount[i]);
	Daytoday->total = (Daytoday->total) + (Daytoday->amount[i]);
	}
	Daytoday->widrow_bank_amount = (Daytoday->widrow_bank_amount) - (Daytoday->total);
	printf("----TOTAL EXPENSE FOR THE  %d_%d_%d DATE =%li\n", da, mon, yr, Daytoday->total);
	//return Daytoday->total;
}


updated_balance(Intial_Detils* dbase)
{
	printf("\n");
	printf("\n");
	printf("____________________________________________________________________________________________________\n");
	printf("Current Bank Balance=%li\n", (dbase->current_bank_amount));
	printf("Updated Widrow Balance=%li\n", (dbase->widrow_bank_amount));
	printf("____________________________________________________________________________________________________\n");
	printf("\n");
	printf("\n");
	fprintf(fp, "\n%d",(dbase->date));
	fprintf(fp, "%c",'E');
	fprintf(fp, "%li", (dbase->current_bank_amount));
	fprintf(fp, "%c", 'E');
	fprintf(fp, "%li", (dbase->widrow_bank_amount));
	fprintf(fp, "%c", 'E');
	fprintf(fp, "%li", (dbase->total));
	fprintf(fp, "%c", 'E');
	fclose(fp);

}
bank_update(Intial_Detils* babank)

{
	long bbupdate;
	printf("----ENTER THE BANK UPDATED AMOUNT----\n");
	scanf_s("%li", &(bbupdate));

	babank->current_bank_amount = (babank->current_bank_amount) + bbupdate;
	printf("----BANK AMOUNT TILL DATE  %d_%d_%d  IS %li\n", da, mon, yr, babank->current_bank_amount);


}

bank_Dupdate(Intial_Detils* babank)

{
	long bdupdate;
	printf("----ENTER THE DEBIT AMOUNT----\n");
	scanf_s("%li", &(bdupdate));

	babank->current_bank_amount = (babank->current_bank_amount) - bdupdate;
//	printf("----BANK AMOUNT TILL DATE  %d_%d_%d  IS %li\n", da, mon, yr, babank->current_bank_amount);


}
d_details(Intial_Detils* dd_details)
{
	Date_verify(&dd_details->date);
	printf("   _________________________________________________\n");
	printf("LAST UPDATED DATE:%d_%d_%d\n", da, mon, yr);
	printf("CURRENT BANK BALANCE=%li\n", dd_details->current_bank_amount);
	printf("LAST WTHDROWAL BALANCE=%li\n", dd_details->widrow_bank_amount);
	printf("TOTAL PURCHACE AMOUNT=%li\n", dd_details->total);
	printf("   _________________________________________________\n");
}

database_read_lastmonth(Intial_Detils* last_month)
{
char line[81], rbbalancea[81], withdrowa[81], read_a[81];
long rdate = 0, rbbalance = 0, rwithdrw = 0, read_n = 0;
int e_flag = 0, i = 0, j = 0, k = 0, l = 0, n = 0, temp = 0, e_flag_1 = 0, flg_first = 0, flg_last = 0, temp11 = 0, tempd = 0;
char *month_name;
scanf("%d", &last_month->month);
last_month->month_entered = (month_details)(last_month->month);

month_name = monthname(last_month->month_entered);
printf("------%s DETAILS-------\n", month_name);
printf("________________________________________\n");
fp = fopen("D:\\RT_NightProtect\\database.txt", "r");
if (fp != NULL)
{
	while (!feof(fp))
	{
		fgets(line, 81, fp);
		//printf("Last date=%s", line);

		do {
			i++;
			if (line[i] == 'E')
			{
				rdate = atol(line);
				e_flag = i;
				//printf("linefvalue=%s\n", line);
				//printf("Last date=%li\n", rdate);

			}
		} while (line[i] != 'E');
//		tempd = rdate / 1000000;
		temp = rdate % 1000000;
		temp11 = temp / 10000;
		//printf("MONTH ENTERED=%d\n", last_month->month);
		//printf("MONTH FROM DATABASE=%d\n", temp);
		if (temp11 == last_month->month)
		{
			tempd = rdate / 1000000;
			flg_first++;
			flg_last = 1;
			do {
				i++;
				if (line[i] == 'E')
				{
					e_flag++;
					for (int m = 0;m != i;m++)
					{
						rbbalancea[m] = line[e_flag + m];
					}
					rbbalance = atol(rbbalancea);
					//printf("Last bank balance=%li\n", rbbalance);
					e_flag_1 = i;
				}
			} while (line[i] != 'E');

			do {
				i++;
				if (line[i] == 'E')
				{
					e_flag_1++;
					for (int s = 0;s != i;s++)
					{
						withdrowa[s] = line[e_flag_1 + s];
					}
					rwithdrw = atol(withdrowa);
					//printf("Last WITHDROW AMOUNT=%li\n", rwithdrw);
					e_flag_1 = i;
				}
			} while (line[i] != 'E');

			do {
				i++;
				if (line[i] == 'E')
				{
					e_flag_1++;
					for (int s = 0;s != i;s++)
					{
						read_a[s] = line[e_flag_1 + s];
					}
					read_n = atol(read_a);
					//printf("Last purchase amount=%li\n", read_n);
				}
			} while (line[i] != 'E');
			if (flg_first == 1)
			{
				printf("FIRST DATE OF PURCHACE -%d_%s_2019\n", tempd, month_name);
				printf("BANK BALANCE		 -%li\n", rbbalance);
				printf("WITHDROW AMOUNT		 -%li\n", rwithdrw);
				printf("PURCHASE AMOUNT		 -%li\n", read_n);
				printf("________________________________________\n");
			}
			e_flag = 0;
			e_flag_1 = 0;
		}
		else
			printf("NO RECORD IN THIS MONTH\n");

		i = 0;
	}
	if (flg_last == 1)
	{
		printf("LAST DATE OF PURCHACE -%d_%s_2019\n", tempd, month_name);
		printf("LAST DAY BANK BALANCE		 -%li\n", rbbalance);
		printf("LAST DAY WITHDROW AMOUNT		 -%li\n", rwithdrw);
		printf("LAST DAY PURCHASE AMOUNT		 -%li\n", read_n);
		printf("________________________________________\n");
	}
	else
	{

	}


}
else
//(dbase->current_bank_amount) = (double)line;
exit(0);
fclose(fp);
}


char* monthname(month_details mm)


{
	//int month_mm;
	//month_mm = *mm;
	switch (mm)
	{
	case JANUARY:
		return "JANUARY";
		break;
	case FEBRUARY:
		return "FEBRUARY";
		break;
	case MARCH:
		return "MARCH";
		break;
	case APRIL:
		return "APRIL";
		break;
	case MAY:
		return "MAY";
		break;
	case JUNE:
		return "JUNE";
		break;
	case JULY:
		return "JULY";
		break;
	case AUGUEST:
		return "AUGUEST";
		break;
	case SEPTEMPER:
		return "SEPTEMPER";
		break;
	case OCTOBER:
		return "OCTOBER";
		break;
	case NOVEMBER:
		return "NOVEMBER";
		break;
	case DECEMBER:
		return "DECEMBER";
		break;
	default:
		return "INVALID MONTH";
		break;

	}


}
