#include<stdio.h>
int main()
{
	int science; 
	int math;
	int english;
	
	int total;
	float per;

	science = 50;
	math = 90;
	english = 40;
    total= science + math + english;
	
	per= (float) total*100/300;

	printf("Total Marks: %d\n",total);
	printf("Percentage is: %.2f\n",per);

	if(per>=60)
	{
		printf("First division\n");
	}
	else if(per>=50)
	{
		printf("Second division");
	}
	else if(per>=40)
	{
		printf("Third division");
	}
	else
	{
		printf("Fail\n");
	}
	
	return 0;
}
