#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str) {
    int start = 0;
    int end = str.length() - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            return false; 
        }
        start++;
        end--;
    }
    return true; 
}

int main() {
    string input;
    cout << "Enter a word or phrase: ";
    getline(cin, input);
    string processed = "";
    for (char c : input) {
        if (isalnum(c)) {
            processed += tolower(c);
        }
    }

    if (isPalindrome(processed)) {
        cout << "It is a palindrome!" << endl;
    } else {
        cout << "It is not a palindrome." << endl;
    }

    return 0;
}
