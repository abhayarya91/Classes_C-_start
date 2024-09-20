#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num, originalNum, remainder, n = 0;
    double result = 0;
    cout << "Enter an integer: ";
    cin >> num;
    originalNum = num;
    for (; originalNum != 0; originalNum /= 10, ++n);
    originalNum = num;
    for (; originalNum != 0; originalNum /= 10)
	{
        remainder = originalNum % 10;
        result += pow(remainder, n);
    }
    if (static_cast<int>(result) == num)
	{
        cout << "Armstrong number" << endl;
    } 
	else
	{
        cout << "Not an Armstrong number" << endl;
    }return 0;}

