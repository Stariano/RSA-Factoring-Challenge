#include "factors.h"

/**
 * factoring - This function will take a number and give the final factor
 * @buffer: It's the buffer carried from the file and then will be converted.
 * Return: 0
 */

int factoring(char *buffer)
{
	u_int32_t number;
	u_int32_t itr;

	number = atoi(buffer);

	for (itr = 2; itr < number; itr++)
	{
		if (number % itr == 0)
		{
			printf("%d=%d*%d\n", number, number / itr, itr);
			break;
		}
	}
}
