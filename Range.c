/* C Program to Show The Range of Data types */
#include<stdio.h>
void main()
{
	//Declaration
    short number1 =-32768 , number2 =32767;
    unsigned short number3 =0 , number4 = 65535;
    int number5 =-2147483648 , number6 = 2147483647;
    unsigned int number7 =0 , number8 = 4294967295;
    long long number9 =-9223372036854775808 , number10 = 9223372036854775807;
    unsigned long long number11 =0 , number12 = 184467440737709551616;
    
    //Output
	printf("Short: %hd to %hd\n",number1,number2);
	printf("Unsigned Short: %u to %u\n",number3,number4);
	printf("Int: %d to  %d\n",number5,number6);
	printf("Int Unsiged: %u to %u\n",number7,number8);
	printf("Long Long: %lld to %lld\n",number9,number10);
	printf("Unsiged Long Long: %llu to %llu\n",number11,number12);
}
