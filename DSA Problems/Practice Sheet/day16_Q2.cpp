/*Write a program to convert decimal numbers to binary numbers using a for loop.*/

#include<iostream>
using namespace std;
int main()
{
    int decimal;
    int binary[32];   // to store binary digits
    int i = 0;

    cout << "Enter a decimal number: ";
    cin >> decimal;

    // Convert decimal to binary
    for (; decimal > 0; i++) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
    }

    cout << "Binary number: ";

    // Print binary in reverse order
    for (int j = i - 1; j >= 0; j--) {
        cout << binary[j];
    }

    return 0;
}