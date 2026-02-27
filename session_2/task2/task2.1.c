// Week 5, Session 2

/* Task 2.1
 * Temperature conversion with input validation
 * Converts temperatures between Celsius and Fahrenheit with error checking
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>  // For toupper function

int main(void) {
    char input[50];
    float temperature;
    char scale;
    int valid_input = 0;
    float converted_temp;
    
    printf("=== Temperature Converter ===\n");
    
    // TODO: Keep asking until valid input is provided
    // Use an appropriate loop structure

    while (valid_input == 0) 
    {
        printf("Enter temperature with scale (e.g., 23.5C or 75F): ");
        // Use fgets to read the input
        fgets(input, 50, stdin);
        // Remove the newline character from input
        input[strcspn(input, "\n")] = 0;
        // Parse the input to extract temperature and scale
        sscanf(input, "%f%c", &temperature, &scale);
        // Convert scale to uppercase for easier comparison
        scale = toupper(scale);
        // Validate the scale (must be 'C', 'c', 'F', or 'f')
        // If input is valid, set valid_input = 1
        if (scale == 'C' || scale == 'F')
        {
            valid_input = 1;
        }

        // If invalid, print an error message
        else 
        {
            printf("Invalid Input");
            return 1;
        }

        
        // Hint: input[strcspn(input, "\n")] = 0;
        
        // Hint: Use sscanf(input, "%f%c", &temperature, &scale);
        // Advanced: Consider handling input with a degree symbol (°)
        
        // Hint: scale = toupper(scale); // toupper() converts 'c' to 'C', 'f' to 'F'
        // Note: In Python, you'd use string method: scale = scale.upper()
        

    }
    
    if (scale == 'C')
    {
        converted_temp = temperature * (9 / 5) + 32;
    }

    else if (scale == 'F') 
    {
        converted_temp = (temperature - 32) * (5 / 9);
    }

    printf("%.1f°C is equal to %.1f°F\n", temperature, converted_temp);
    // TODO: Perform conversion based on the input scale
    // - If Celsius, convert to Fahrenheit: F = C * 9/5 + 32
    // - If Fahrenheit, convert to Celsius: C = (F - 32) * 5/9
    // - Print the result with appropriate formatting, including the degree symbol (°)
    //   Hint: Use printf("%.1f°C is equal to %.1f°F\n", temperature, converted_temp);
    
    return 0;
}
