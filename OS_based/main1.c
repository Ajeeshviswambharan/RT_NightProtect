#include"main.h"
#include"Rte_Types.h"
#include<math.h>
#include<stdio.h>
int var=2;

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

D_Detils(Intial_Detils* Day1)

{
	printf("!!!!!!Daily Vages!!!!!\n");
	printf("---------Enter the date----\n");
	scanf_s("%d", &Day1->date);
	printf("----Date entered=%d\n",Day1->date);



	return EOK;


}