#include<stdio.h>
void main()
{
	int m,h,rm,rh,s;
	scanf("%d",&s);
	h=s/3600,rh=s%3600,m=rh/60,rm=rh%60;
	printf("Hours = %d \nMinutes = %d \nSeconds = %d",h,m,rm);
}
