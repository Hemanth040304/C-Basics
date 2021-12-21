#include<stdio.h>
void main()
{
	int min,hou,t;
	printf("Enter time in Minutes.\n");
	scanf("%d",&t);
	hou=t/60,min=t%60;
	printf("Hours = %d\nMinutes = %d",hou,min);
}
