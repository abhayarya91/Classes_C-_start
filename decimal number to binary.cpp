/*Write a c++ program to convert decimal number to binary.
Input: 9
Output: 1001
Input: 20
Output: 10100*/


#include <iostream>

using namespace std;

int main()
{
    int decimalNumber;
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;
    int binary[32];
    int index = 0;
    for (; decimalNumber > 0; decimalNumber /= 2)
	{
        binary[index] = decimalNumber % 2;
        index++;
    }
    cout << "Binary representation: ";
    for (int i = index - 1; i >= 0; i--)
	{
        cout << binary[i];
    }
    return 0;
}

