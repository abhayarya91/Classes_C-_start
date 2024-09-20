#include <iostream>
using namespace std;

int main() 
{
   int num1,num2,num3;
   cout<<"Enter 1st number"<<endl;
   cin>>num1;
   cout<<"Enter 2nd number"<<endl;
   cin>>num2;
   cout<<"Enter 3rd number"<<endl;
   cin>>num3;

	    // Arithmetic Operators
	    int sum = num1 + num2;
	    int difference = num2 - num1;
	    int product = num1 * num3;
	    float quotient = static_cast<float>(num2) / num3;
	    int remainder = num1 % num3;

    cout << "Arithmetic Results:" << endl;
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder << endl;

	    // Relational Operators
	    bool isEqual = (num1 == num2);
	    bool isNotEqual = (num1 != num3);
	    bool isGreater = (num2 > num1);
	    bool isLess = (num1 < num2);
	    bool isGreaterOrEqual = (num2 >= num3);
	    bool isLessOrEqual = (num1 <= num3);

    cout << "\nRelational Results:" << endl;
    cout << "Equal: " << isEqual << endl;
    cout << "Not Equal: " << isNotEqual << endl;
    cout << "Greater Than: " << isGreater << endl;
    cout << "Less Than: " << isLess << endl;
    cout << "Greater Than or Equal To: " << isGreaterOrEqual << endl;
    cout << "Less Than or Equal To: " << isLessOrEqual << endl;

    // Logical Operators
    bool logicalAnd = (isEqual && isGreater);
    bool logicalOr = (isNotEqual || isLess);
    bool logicalNot = !logicalAnd;

    cout << "\nLogical Results:" << endl;
    cout << "Logical AND: " << logicalAnd << endl;
    cout << "Logical OR: " << logicalOr << endl;
    cout << "Logical NOT: " << logicalNot << endl;

    return 0;
}

