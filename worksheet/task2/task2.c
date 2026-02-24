/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name:
 * ID:
 */

#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
	long decimal = 0;
	char hex[9];

	printf("Enter a hexadecimal: ");
	fgets(hex, 9, stdin);

	int length = strlen(hex);
	if (length > 9 || length < 0)
	{
		printf("Invalid Length\n");
		return 1;
	}

	for (int count = 0; count < length; count++)
	{
		if ((hex[count] >= 48) && (hex[count] <= 57))
		{
			decimal += (hex[count] - 48) * pow(16, length - (count + 1));
		}

		else if ((hex[count] >= 65) && (hex[count] <= 70))
		{
			decimal += (hex[count] - 55) * pow(16, length - (count + 1));
		}

		else if ((hex[count] >= 97) && (hex[count] <= 102))
		{
			decimal += (hex[count] - 87) * pow(16, length - (count + 1));
		}

		else
		{
			printf("Error: Invalid Hexadecimal\n");
			return 1;
		}
	}

	// if input contains invalid hex digit
	// printf("Error: Invalid Hexadecimal\n");

	// print the decimal result
	printf("decimal:%ld\n", decimal);

	return 0;
}