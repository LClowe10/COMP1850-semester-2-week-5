/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: Lucas Parbott Clowe
 * ID: 201972343
 */

#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
	long decimal = 0;
	char hex[9];
	char buffer[100];
	int check;

	// Getting the value from the user
	printf("Enter a hexadecimal: ");
	fgets(buffer, 100, stdin);
	check = sscanf(buffer, "%c", hex);
	printf("%s\n", hex);
	// Validation for the amount of arguments passed
	if (check - 1) 
	{
		printf("Invalid Input\n");
		return 1;
	}

	// Finding and validating the length of the input
	int length = (strlen(buffer) - 1);
	if (length > 8 || length < 1)
	{
		printf("Invalid Length\n");
		return 1;
	}

	for (int count = 0; count < length; count++)
	{
		printf("%d\n", hex[0]);
		printf("%ld\n", decimal);
		if ((hex[count] >= 48) && (hex[count] <= 57))
		{
			decimal += (hex[count] - 48) * pow(16, length - (count + 1));
			continue;
		}

		else if ((hex[count] >= 65) && (hex[count] <= 70))
		{
			decimal += (hex[count] - 55) * pow(16, length - (count + 1));
			continue;
		}

		else if ((hex[count] >= 97) && (hex[count] <= 102))
		{
			decimal += (hex[count] - 87) * pow(16, length - (count + 1));
			continue;
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