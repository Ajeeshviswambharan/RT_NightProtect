#include"main.h"
#include"Rte_Types.h"
int var;

os_init()
{
	var = 1;
	printf("OS_Intialization!!!!!\n");
	return EOK;
}
os_shedule()
{
	var = 1;
	printf("OS_schedule!!!!!\n");
	return EOK;
}

D_Detils(Intial_Detils* Day1)

{
	printf("!!!!!!Daily Vages!!!!!\n");
	printf("Ent!!!!!\n");
	return EOK;
}