/* C Program to Find Simple Intrest */
#include<stdio.h>
void main()
{
	//Declaration
	int Principal,Time,RateofInterest;
	
	//Taking input
	printf("Principal:\n");
	scanf("%d",&Principal);
	printf("Time:\n");
	scanf("%f",&Time);
	printf("Rate of Interest:\n");
	scanf("%d",&RateofInterest);
	
	//Caluculation
	  int SimpleInterest= Principal*Time*RateofInterest/100;
	
	//Output
	printf("Simple Interest=%f",SimpleInterest);
}
