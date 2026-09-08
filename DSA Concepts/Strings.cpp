#include <iostream>
#include <string>
using namespace std;

int main() {
    // 1. Character array initialization
    char arr[] = {'A', 'p', 'p', 'l', 'e', '\0'};

    cout << "Character array: " << arr << endl;

    // 2. Printing a character array using a loop
    cout << "Character array using loop: ";
    for (int i = 0; arr[i] != '\0'; i++) {
        cout << arr[i];
    }
    cout << endl;

    // 3. Taking a one-word input using cin
    string word;

    cout << "\nEnter one word: ";
    cin >> word;

    cout << "You entered: " << word << endl;

    // Remove the leftover newline before using getline
    cin.ignore();

    // 4. Taking a complete line using getline
    string sentence;

    cout << "\nEnter a complete sentence: ";
    getline(cin, sentence);

    cout << "Your sentence is: " << sentence << endl;

    // 5. Finding the size of a string
    cout << "Sentence size: " << sentence.size() << endl;

    // 6. Concatenating strings using +
    string firstName = "Vaibhav";
    string secondName = "Mohit";

    string combined = firstName + " " + secondName;

    cout << "\nUsing + operator: " << combined << endl;

    // 7. Appending a string using append()
    string appended = firstName;
    appended.append(" Kumar");

    cout << "Using append(): " << appended << endl;

    // 8. Adding a character using push_back()
    string modified = "Vaibhav";
    modified.push_back('!');

    cout << "After push_back(): " << modified << endl;

    // 9. Removing the last character using pop_back()
    modified.pop_back();

    cout << "After pop_back(): " << modified << endl;

    // 10. Escape characters
    string quoteExample = "Vaibhav said \"Hello\"";
    cout << "\nQuotation example: " << quoteExample << endl;

    cout << "Backslash example: C:\\Users\\Vaibhav" << endl;

    // 11. Reverse the input sentence
    string reversed = sentence;

    int start = 0;
    int end = reversed.size() - 1;

    while (start < end) {
        swap(reversed[start], reversed[end]);
        start++;
        end--;
    }

    cout << "\nReversed sentence: " << reversed << endl;

    // 12. Finding string length without size()
    int length = 0;

    while (sentence[length] != '\0') {
        length++;
    }

    cout << "Length without size(): " << length << endl;

    // 13. Checking palindrome
    string palindromeText;

    cout << "\nEnter a word to check palindrome: ";
    cin >> palindromeText;

    int left = 0;
    int right = palindromeText.size() - 1;

    bool isPalindrome = true;

    while (left < right) {
        if (palindromeText[left] != palindromeText[right]) {
            isPalindrome = false;
            break;
        }

        left++;
        right--;
    }

    if (isPalindrome) {
        cout << palindromeText << " is a palindrome." << endl;
    } else {
        cout << palindromeText << " is not a palindrome." << endl;
    }

    return 0;
}