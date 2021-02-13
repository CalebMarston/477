#include <stdio.h>
#include <limits.h>

int main()
{
	//This prints the size of all the data types
	printf("The size of integers is %d\n", sizeof(int));
	printf("The size of short ints is %d\n", sizeof(short));
	printf("The size of char is %d\n", sizeof(char));
	printf("The size of long is %d\n", sizeof(long));
	printf("The size of double is %d\n", sizeof(double));
	printf("The size of float is %d\n", sizeof(float ));

	//The prints the largest value of each part of the limits
	printf("THe largest int in dec is %d\n", INT_MAX);
	printf("The largest int in hex is %x\n", INT_MAX);
	printf("The largest unsigned int in dec is %u\n",UINT_MAX );
	printf("The largest unsigned int in hex is %u\n", UINT_MAX);
	printf("The largest long int in dec is %ld\n", LONG_MAX);
	printf("The largest long int in hex is %lx\n", LONG_MAX);
	printf("The largest unsigned long int in dec is %u\n", ULONG_MAX);
	printf("The largest unsigned long int to hex is %u\n", ULONG_MAX);
	

	//something cool, determines if the int is the same size
	//as the short or long
	if(sizeof(short) < sizeof(int)){
		printf("The short is shorter than the int\n");
	} else {
		printf("The short is the same size as the int\n");
	}
	if(sizeof(long) > sizeof(int)){
		printf("The long is longer than the int \n");
	} else {
		printf("The long is the same size as the int \n");
	}
}


