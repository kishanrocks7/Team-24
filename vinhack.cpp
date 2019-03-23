//for implementation perpose we will input the sensor data using random variable
//all print statements are the output to the parent
#include<stdio.h>

int main()
{
	// ALREADY KNOWN LEVELS OF STRESS(LEVEL0 IS NATURAL STATE)                                       
	
	int LEVEL0,LEVEL1,LEVEL2,LEVEL3,LEVEL4,LEVEL5,LEVEL6,SENSOR_DATA;        //PREDEFINED STRESS LEVELS
	
	SENSOR_DATA=(rand()%(1-0+1))+0;                                   //CONTENT OF CORTISOL IN SWEAT
	printf(%d,SENSOR_DATA);
	
	
	
	if(SENSOR_DATA<LEVEL0)
	{
		printf("it can be ADDISON'S' disease or GLAND is malfunctioning");       //meet the doctor
		printf("details of doctor");
	}
	else if(SENSOR_DATA>=LEVEL6)
	{
		printf("reach the cousellor as soon as possible");                       //meet counsellor
		printf("details of counsellor");
	}
	else if(SENSOR_DATA==LEVEL5)
	{
		printf("pick up the level 5 data from the database");
	}
	else if(SENSOR_DATA==LEVEL4)
	{
		printf("pick up the level 4 data from the database");
	}
	else if(SENSOR_DATA==LEVEL3)
	{
		printf("pick up the level 3 data from the database");
	}
	else if(SENSOR_DATA==LEVEL2)
	{
		printf("pick up the level 2 data from the database");
	}
	else if(SENSOR_DATA==LEVEL1)
	{
		printf("pick up the level 1 data from the database");
	}
	return 0;
}
