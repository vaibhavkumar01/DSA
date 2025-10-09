#include<iostream>
using namespace std;
char Convert(char letter)
{
    char ans = letter - 'a' + 'A';
    return ans;
}
int main(){
    char letter;
    cout << "Enter a LowerCase letter: ";
    cin >> letter;
    cout << "UpperCase of "<< letter << " is: " << Convert(letter);
}