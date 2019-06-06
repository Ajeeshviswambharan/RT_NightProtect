#define _CRT_SECURE_NO_WARNINGS 
#include"main.h"
#include"Rte_Types.h"
#include<stdio.h>

#include<string.h>
#include <stdlib.h>

extern _Bool terminate;

long int bankbalace;
int choice_get;

Intial_Detils daily1;

//float total_Vages;

FILE *fp;
void main()
{
	//	os_init();
	//	os_shedule();
	daily1.current_bank_amount = 165000.50;
	var = 1;
	fp = fopen("D:\\RT_NightProtect\\database.txt", "a+");
	printf("_______________________DAILY WAGES_________________\n");
	printf("PLEASE ENTER YOUR CHIICE \n");
	printf("   _________________________________________________\n");
	printf(" PRESS\n");
	printf(" 1-FOR UPDATING BANK WITHDROWAL AND DAILY BILLS\n");
	printf(" 2-FOR UPDATING DAILY BILLS\n");
	printf(" 3-FOR UPDATING BANK AMOUNT \n");
	printf(" 4-FOR UPDATING CREDIT CARD WITHDROWAL\n");
	printf(" 5-FOR BANK BALANCE AND WITHDROW BALANCE\n");
	printf("   _________________________________________________\n");
	scanf("%d", &choice_get);
	switch (choice_get)
	{
	case 1:
		printf(" PLEASE UPDATE WITHDROWAL AMOUNT AND DAILY BILLS\n");
		
		
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
		date(&daily1);
		if (terminate)
			break;
		D_Detils(&daily1);
		sum_vages(&daily1);
		updated_balance(&daily1);

		break;
	case 3:
		printf(" PLEASE UPDATE THE NEW AMOUNT CREDITED \n");
		break;
	case 4:
		printf(" PLEASE UPDATE THE CREDIT CARD WITHDROWAL AMOUNT \n");

		break;
	case 5:
		printf(" BALANCE CHECK ONLY\n");
		break;
	default:
		printf(" INVALID ENTRY\n");
		break;


	}
	last:
	getch();


}
