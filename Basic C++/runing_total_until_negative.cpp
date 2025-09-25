#include<iostream>
using namespace std;
int main()
{
    // Initialization
    int n;
    int sum= 0;
    int count = 0;

    do{
        cout << "Enter an Integer: ";
        cin >> n;

        if(n<0)         // neglect -ve numbers
        break;          // -ve number → stop reading

        sum += n;
        count ++;       // count the number by incrementing the count 

        cout << "Running Total = " << sum << endl;

    }while(true);       // if false, end the loop

    // Final Output

    cout << "\nFinal Total = " << sum << endl;
    cout << "Integers Count = " << count << endl;

    return 0;
}