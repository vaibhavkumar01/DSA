#include<iostream>
using namespace std;
int main()
{
    int num,rev_num,digit;
    cout << "Enter a Number: ";
    cin >> num;
    int a = num;
    rev_num = 0;
    while(num > 0)
    {
        digit = num % 10;
        rev_num = rev_num*10 + digit;
        num = num / 10;
    }
    cout <<"Reverse of Number "<< a <<" = " << rev_num;
    return 0;
}