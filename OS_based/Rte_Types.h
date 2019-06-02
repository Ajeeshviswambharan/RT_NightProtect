#define BANKAMOUNT 100000
#define CURRENTYEAR 2019
extern float total_Vages;


typedef struct 
{
	char answer;
    int date;
    int number;
    float amount[10];
	float total;

}Intial_Detils;

extern D_Detils(Intial_Detils* Day1);
extern float sum_vages(Intial_Detils* Daytoday);
extern Date_verify(int* date_v);
extern _Bool flag_date, flag_month, flag_year;