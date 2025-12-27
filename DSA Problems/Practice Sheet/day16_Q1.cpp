/*Write a program to convert binary numbers to decimal numbers using a for loop.*/

#include<iostream>
using namespace std;
int main()
{
    int binary_num, digit;
    cout << "Enter a binary number: ";
    cin >> binary_num;

    int decimal_result = 0;
    int place_value = 1;

    for(;binary_num > 0; binary_num /= 10){
        digit = binary_num % 10;

        // validate binary digit
        if(digit != 0 && digit != 1){
            cout << "Invalid input! Not a binary number.\n";
            return 0;
        }

        if(digit == 1){
            decimal_result += place_value;
        }

        place_value *= 2;
    }

    cout << "Decimal value: " << decimal_result << endl;

    return 0;
}