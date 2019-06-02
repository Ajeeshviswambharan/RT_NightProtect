#define BANKAMOUNT 50000
#define CURRENTYEAR 2019
extern float total_Vages;
extern int da, mon, yr;

typedef struct 
{
	char answer;
    int date;
    int number;
    float amount[10];
	float total;
	long float current_bank_amount;
	float widrow_bank_amount;
	float final_b;

}Intial_Detils;

extern D_Detils(Intial_Detils* Day1);
extern float sum_vages(Intial_Detils* Daytoday);
extern Date_verify(int* date_v);
extern _Bool flag_date, flag_month, flag_year;
extern bank_Details(Intial_Detils* bank);
extern compare_amount(long float* current_bank_amount1);