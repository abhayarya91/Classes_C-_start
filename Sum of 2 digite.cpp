#include <iostream>
using namespace std;

int main()
{
    int num, originalNum, sum = 0, remainder;
    cout << "Enter two integer: ";
    cin >> num;
    originalNum = num;
    for (; num != 0; num /= 10) 
	{
        remainder = num % 10;
        sum += remainder;
    }
    cout << "Sum of digits of " << originalNum << " = " << sum << endl;
    return 0;
}

