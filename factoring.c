#include "factors.h"
#include "inttypes.h"
#define MAX 100

/**
 * factoring - This function will take a number and give the final factor
 * @buffer: It's the buffer carried from the file and then will be converted.
 * Return: 0
 */

int factoring(char *buffer)
{
	long int number;
	long int itr;

	/* kk = 1718944270642558716715;
	kkk = 1718944270642558716715; */
	
	number = atoi(buffer);

	for (itr = 2; itr < number; itr++)
	{
		if (number % itr == 0)
		{
			break;
		};
	}

	printf("%li=%li \n", number , itr);
	return (0);
}
