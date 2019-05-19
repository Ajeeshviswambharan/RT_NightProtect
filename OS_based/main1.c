#include"main.h"
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