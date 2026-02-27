//Week 5, Session 2

# include <stdio.h>

int main(void)
{
/* Task 1.2b
 * Convert the following Python while loop to (1) while loop (2) do...while loop in C.
 * 
 * Python code:
 * while True:
 *     choice = input("Enter 'q' to quit: ")
 *     if choice == 'q':
 *         break
 */
	char choice;
	char buffer[100];
	// complete the rest of the code here
	while (choice != 'q')
	{
		printf("Enter 'q' to quit: ");
		fgets(buffer, 100, stdin);
		sscanf(buffer, "%c", &choice);

	} 

	do
	{
		printf("Enter 'q' to quit: ");
		fgets(buffer, 100, stdin);
		sscanf(buffer, "%c", &choice);

	} while (choice != 'q');
	
	
    return 0;
}