#include <iostream>
using namespace std;

int main() {
    int num, reversedNum = 0, originalNum, remainder;

    // Input from user
    cout << "Enter an integer: ";
    cin >> num;

    originalNum = num;

    // Reversing the number
    for (; num != 0; num /= 10)
	{
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
    }

    // Checking if the number is a palindrome
    if (originalNum == reversedNum) {
        cout << "Palindrome number" << endl;
    } else {
        cout << "Not a palindrome number" << endl;
    }

    return 0;
}

