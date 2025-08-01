#include <stdio.h>

void convertToCelsius(float temperature, float convertedTemperature)
{
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &temperature);
    convertedTemperature = (temperature - 32.0) * 5.0 / 9.0;
    printf("Temperature in Fahrenheit: %.1f Fahrenheit\n", temperature);
    printf("Temperature in Celsius: %.1f Celsius\n", convertedTemperature);
}
void convertToFahrenheit(float temperature, float convertedTemperature)
{
    printf("Enter temperature in Celsius: ");
    scanf("%f", &temperature);
    convertedTemperature = (temperature * 9.0 / 5.0) + 32.0;
    printf("Temperature in Celsius: %.1f Celsius\n", temperature);
    printf("Temperature in Fahrenheit: %.1f Fahrenheit\n", convertedTemperature);
}

int main()
{
    char unit = 'C';
    float temperature = 0.0f;
    float convertedTemperature = 0.0f;

    printf("Welcome to the Temperature Converter program!\n");
    printf("This program converts temperature between Celsius and Fahrenheit. \n\n");

    printf("Write (C) for Celsius to Fahrenheit or (F) for Fahrenheit to Celsius (F): ");
    scanf(" %c", &unit);
    switch (unit)
    {
    case 'C':
    case 'c':
        convertToFahrenheit(temperature, convertedTemperature);
        break;
    case 'F':
    case 'f':
        convertToCelsius(temperature, convertedTemperature);
        break;
    default:
        printf("Invalid input! Please enter 'C' for Celsius or 'F for Fahrenheit!\n");
        main();
    }

    int choice = 0;
    printf("To exit the program enter (0), and to buy another value enter other number: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 0:
        printf("Thank you for using the Temperature Converter program. Goodbye!\n");
        break;
    default:
        printf("\n\n");
        getchar();
        main();
    }

    return 0;
}