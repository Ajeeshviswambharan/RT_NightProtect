#include <stdio.h>
#include <stdlib.h>
#define BANKAMOUNT 50000
#define CURRENTYEAR 2019

extern float total_Vages;
extern int da, mon, yr;
//extern FILE *fp;

typedef enum
{
	JANUARY = 1,
	FEBRUARY = 2,
	MARCH = 3,
	APRIL = 4,
	MAY = 5,
	JUNE = 6,
	JULY = 7,
	AUGUEST = 8,
	SEPTEMPER = 9,
	OCTOBER = 10,
	NOVEMBER = 11,
	DECEMBER = 12

}month_details;


typedef struct 
{
	char answer;
    int date;
    int number;
    long amount[10];
	long total;
	long  current_bank_amount;
	long widrow_bank_amount;
	long final_b;
	int month;
	long bdupdate;
	month_details month_entered;

}Intial_Detils;
extern database_read(Intial_Detils* dbase);
extern date(Intial_Detils* Day1);
extern withdrwal(Intial_Detils* wdrw);
extern updated_balance(Intial_Detils* dbase);
extern D_Detils(Intial_Detils* Day1);
extern float sum_vages(Intial_Detils* Daytoday);
extern Date_verify(int* date_v);
extern _Bool flag_date, flag_month, flag_year;
extern bank_Details(Intial_Detils* bank);
extern compare_amount(long float* current_bank_amount1);
bank_update(Intial_Detils* babank);
bank_Dupdate(Intial_Detils* bdabank);
extern d_details(Intial_Detils* dd_details);
extern database_read_lastmonth(Intial_Detils* last_month);
extern char* monthname(month_details mm);