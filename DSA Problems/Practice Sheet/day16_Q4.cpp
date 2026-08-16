/* Write a program to convert Octal numbers to decimal numbers.*/

#include <iostream>
using namespace std;

int main()
{
    int octal;
    int decimal = 0;
    int power = 1;
    int digit;

    // Take octal number as input
    cout << "Enter an Octal number: ";
    cin >> octal;

    // Convert octal to decimal
    while (octal != 0)
    {
        // Extract the last digit
        digit = octal % 10;

        // Add digit × corresponding power of 8
        decimal = decimal + (digit * power);

        // Move to the next power of 8
        power = power * 8;

        // Remove the last digit
        octal = octal / 10;
    }

    // Display the decimal number
    cout << "Required Decimal number = " << decimal;

    return 0;
}