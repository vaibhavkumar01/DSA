/* Write a program to convert decimal numbers to Octal numbers. */

#include <iostream>
using namespace std;

int main()
{
    int decimal;
    int originalDecimal;
    int remainder[100];
    int index = 0;

    // Take decimal number as input
    cout << "Enter the Decimal number: ";
    cin >> decimal;

    // Store the original number because decimal will be modified
    originalDecimal = decimal;

    // Convert decimal to octal
    while (decimal != 0)
    {
        // Store the remainder of division by 8
        remainder[index] = decimal % 8;

        // Move to the next array position
        index++;

        // Divide the decimal number by 8
        decimal = decimal / 8;
    }

    cout << "Required Octal number is: ";

    // Special case: decimal number is 0
    if (originalDecimal == 0)
    {
        cout << 0;
    }
    else
    {
        // Print the remainders in reverse order
        for (int i = index - 1; i >= 0; i--)
        {
            cout << remainder[i];
        }
    }

    return 0;
}