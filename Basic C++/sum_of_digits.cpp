#include<iostream>
using namespace std;
int main()
{
    int n,digit,sum;
    cout<<"Enter a digit: ";
    cin >> n;
    if(n<0){
        n=n*-1;
    }
    sum=0;
    while (n>0)
    {
        digit=n%10;
        sum = sum + digit;
        n = n/10;
    }
    cout<< "Sum of digits is: "<< sum;
    
    return 0;
}