/* C Program For Finding Range of Data type */
#include<stdio.h>
#include<limits.h>
void main()
{
	//Output
	printf("Short: %hd to %hd\n,",SHRT_MIN,SHRT_MAX);
	printf("Unsigned Short: %hu to %hu\n,",0,USHRT_MAX);
	printf("Int : %d to %d\n,",INT_MIN,INT_MAX);//Long and Int are of same range
	printf("Unsigned int : %u to %u\n,",0,UINT_MAX);
	printf("Long Long :%lld to %lld\n,",LONG_LONG_MIN,LONG_LONG_MAX);
	printf("Unsigned Long Long : %llu to %llu,",0,ULONG_LONG_MAX);
}
