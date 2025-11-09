/* #include<iostream>
using namespace std;
int main()
{
    int arr[6];
    int X, N;

    cout << "Enter an Array: ";
    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }
    cout << "Element to search: ";
    cin >> X;

    for(int i=0;i<=5;i++)
    {
        if(arr[i] == X)
        {
            cout << "Index of required element = " << i;
        }
    }
    cout << "Not present";

    return 0;
} */
/*NOTE:- Even if the element is found, after printing the index, your code will still execute
cout << "Not present";
— because it’s outside the for loop and not conditional.*/

#include <iostream>
using namespace std;

int main() {
    int arr[6];
    int X;
    bool found = false; // flag variable

    cout << "Enter an Array: ";
    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }

    cout << "Element to search: ";
    cin >> X;

    for (int i = 0; i < 6; i++) {
        if (arr[i] == X) {
            cout << "Index of required element = " << i;
            found = true;
            break; // stop searching once found
        }
    }

    if (!found) {
        cout << "Not present";
    }

    return 0;
}
