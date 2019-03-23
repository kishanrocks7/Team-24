//for implementation perpose we will input the sensor data using random variable
//all print statements are the output to the parent
#include<stdio.h>
#include<stdlib.h>

int main()
{
	// ALREADY KNOWN LEVELS OF STRESS(LEVEL0 IS NATURAL STATE)                                       
	
	int LEVEL0,LEVEL1,LEVEL2,LEVEL3,LEVEL4,LEVEL5,LEVEL6,SENSOR_DATA;        //PREDEFINED STRESS LEVELS
	char stress_relieving_data[9];
	char stress_relieving_data_level1[100];
	char stress_relieving_data_level2[100];
	char stress_relieving_data_level3[100];
	char stress_relieving_data_level4[100];
	char stress_relieving_data_level5[100];
	char stress_relieving_data_level6[100];
	char normal_condition[100];
	char lower_cortisol[100];
	char higher_cortisol[100];
	
	
	
	  int c, sensor_data;     
 
  printf("random number [0,6]\n");
 

  
    SENSOR_DATA = rand() % 6 + 1;
    printf("%d\n", SENSOR_DATA);

  
  stress_relieving_data[normal_condition[100],    stress_relieving_data_level1[100],stress_relieving_data_level2[100]   ,      //database of stress relieving content 
      stress_relieving_data_level3[100],
  stress_relieving_data_level4[100],  stress_relieving_data_level5[100],
    stress_relieving_data_level6[100]  ,
  lower_cortisol[100]   ,higher_cortisol[100]];
 
 
     LEVEL0=0.2;
     LEVEL1=1;
     LEVEL2=2;                                                      //levels are showing max possible value
     LEVEL3=3;
     LEVEL4=4;
     LEVEL5=5;
     LEVEL6=6;
    
    
	
	if(SENSOR_DATA<0.2)
	{
		printf("it can be ADDISON'S' disease or GLAND is malfunctioning");       //meet the doctor
		printf("%s", stress_relieving_data[7]);
	}
	else if(SENSOR_DATA>6)
	{
		printf("reach the cousellor as soon as possible");   
		                                                                                 //details has been forwarded meet the counsellor as soon as possible
		printf("%s",stress_relieving_data[8]);
	}
	else if(5<SENSOR_DATA<6)
	{
		printf("pick up the level6 data from database");
		printf("%s",stress_relieving_data[6]);
	}
	else if(4<SENSOR_DATA<5)
	{
		printf("pick up the level 5 data from the database");
		printf("%s",stress_relieving_data[5]);
}
	else if(3<SENSOR_DATA<4)
	{
		printf("pick up the level 4 data from the database");
		printf("%s",stress_relieving_data[4]);
	}
	else if(2<SENSOR_DATA<3)
	{
		printf("pick up the level 3 data from the database");
		printf("%s",stress_relieving_data[3]);
	}
	else if(1<SENSOR_DATA<2)
	{
		printf("pick up the level 2 data from the database");
		printf("%s",stress_relieving_data[2]);
	}
	else if(0.2<SENSOR_DATA<1)
	{
		printf("pick up the level 1 data from the database");
		printf("%s",stress_relieving_data[1]);
	}
	else if(SENSOR_DATA=0.2)
	{
		printf("condition is normarl no need to worry");
	}
	return 0;
}
