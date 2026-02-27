// Week 5, Session 2

/* Task 2.2
 * Write a C program that continuosly prompts the user to enter
 * a message and then prints it back to them. The loop should terminate
 * if the user types "quit".
 * - use fgets() + newline removal
 * - use strcmp for string comparison
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
	int exit = 0;
	char quit[] = "quit";
	char input[50];

	while (exit == 0)
	{
		printf("Enter a message or type 'quit' to exit: ");
		// Use fgets to read the input
		fgets(input, 50, stdin);
		// Remove the newline character from input
		input[strcspn(input, "\n")] = 0;
		if (strcmp(input, quit))
		{
			printf("%s\n", input);
		}

		else
		{
			exit = 1;
		}
	}

	return 0;
}