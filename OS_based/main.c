#define _CRT_SECURE_NO_WARNINGS 



#include"main.h"
#include"Rte_Types.h"
#include<stdio.h>

#include<string.h>
#include <stdlib.h>

extern _Bool terminate;

long bankbalace;
int choice_get;

Intial_Detils daily1;

//float total_Vages;

FILE *fp;
void main()
{
	//	os_init();
	//	os_shedule();
	//daily1.current_bank_amount = 165000;
	var = 1;
	printf("_______________________DAILY WAGES_________________\n");
	fp = fopen("D:\\RT_NightProtect\\database.txt", "a+");
	database_read(&daily1);
	printf("PLEASE ENTER YOUR CHOICE \n");
	printf("   _________________________________________________\n");
	printf(" PRESS\n");
	printf(" 1-FOR UPDATING BANK WITHDROWAL AND DAILY BILLS\n");
	printf(" 2-FOR UPDATING DAILY BILLS\n");
	printf(" 3-FOR UPDATING BANK AMOUNT AND WIDROW AMOUNT \n");
	printf(" 4-FOR UPDATING CREDIT CARD WITHDROWAL\n");
	printf(" 5-FOR DISPLAY LAST DAY TRANSACTION\n");
	printf(" 6-FOR DISPLAY LAST MONTH TRANSACTION \n");
	printf("   _________________________________________________\n");
	scanf("%d", &choice_get);
	switch (choice_get)
	{
	case 1:
		printf(" PLEASE UPDATE WITHDROWAL AMOUNT AND DAILY BILLS\n");
		
		daily1.bdupdate = 0;
		date(&daily1);
		if (terminate)
			break;
		withdrwal(&daily1);
		D_Detils(&daily1);
		sum_vages(&daily1);
		updated_balance(&daily1);
		break;
	case 2:
		printf(" PLEASE UPDAYE DAILY BILLS\n");
		daily1.bdupdate = 0;
		date(&daily1);
		if (terminate)
			break;
		D_Detils(&daily1);
		sum_vages(&daily1);
		updated_balance(&daily1);
		break;
	case 3:
		printf(" PLEASE UPDATE THE NEW AMOUNT CREDITED AND WIDROW AMOUNT \n");
		daily1.bdupdate = 0;
		daily1.total = 0;
		date(&daily1);
		if (terminate)
			break;
		bank_update(&daily1);
		withdrwal(&daily1);
		updated_balance(&daily1);
		break;
	case 4:
		printf(" PLEASE UPDATE THE CREDIT CARD WITHDROWAL AMOUNT \n");
		daily1.bdupdate = 0;
		daily1.total = 0;
		date(&daily1);
		if (terminate)
			break;
		bank_Dupdate(&daily1);
		updated_balance(&daily1);
		break;
	case 5:
		printf(" LAST DAY DETAILS\n");
		d_details(&daily1);
		break;
	case 6:
		printf(" LAST MONTH TRNSACTION DETAILS\n");
		printf(" PLEAASE ENTER THE MONTH IN MM FORMAT\n");
		database_read_lastmonth(&daily1);
		break;
	default:
		printf(" INVALID ENTRY\n");
		break;


	}
	last:
	getch();


}
