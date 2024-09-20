//PRACTICAL NO. – 1
//Aim:- Create a C++ program to print Fibonacci series without 
//using recursion and using recursion.
//Program:- 
#include<iostream>
using namespace std;
int main()
{
// input = 10
// output = 0 1 1 2 3 5 8 13 21 34
int n1=0,n2=1,n3,i,number;
cout<<"Enter your number of elements:-"<<endl;
cin>>number;
cout<<"Your Fibonacci series is"<<endl;
cout<<n1<<" ";
cout<<n2<<" ";
for(i=2;i<number;++i)
{
n3=n1+n2;
cout<<n3<<" ";
n1=n2;
n2=n3;
}
return 0;
}





//Aim:- Create a C++ program to print fibonacci series using 
//recursion.
//Program:-
#include<iostream>
using namespace std;
int fib(int n)
{
if(n==0 || n==1)
{
return n;
}
else
{
return (fib(n-1)+fib(n-2));
}
}
/*
int main()
{
int n,i;
cout<<"Enter the number of elements:-";
cin>>n;
cout<<"Your fibonacci series is"<<endl;
for(i=0; i<n ; i++)
{
cout<<fib(i)<<" ";
}
return 0;
}*/



//Aim:- Create a C++ program to check palindrome number.
//Program:-
#include <iostream>
using namespace std;
int main()
{
 int num, reversedNum = 0, originalNum, remainder;
 // Input from user
 cout << "Enter an integer: ";
 cin >> num;
 originalNum = num;
 // Reversing the number
 for (; num != 0; num /= 10){
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



//Aim:-Create a C++ program to check Prime number or not.
//Program:-
#include<iostream>
using namespace std;
int main()
{
 int num;
 bool isPrime = true;
 cout << "Enter a number: ";
 cin >> num;
 if (num < 2)
{
 cout << "Not prime number" << endl;
 }
else
{
 for (int i = 2; i <= num / 2; ++i)
{
 if (num % i == 0)
{
 isPrime = false;
 break;
 }
 }
 if (isPrime)
 {
 cout << "Prime number" << endl;
 }
 else
 
P a g e | 8
{
 cout << "Not prime number" << endl;
}
 }
 return 0;
}



//Aim:- Create a C++ program to print factorial of a number.
//Pragram:-
#include <iostream>
using namespace std;
int main()
{
 int num;
 unsigned long long factorial = 1;
 cout << "Enter a positive integer: ";
 cin >> num;
 if (num < 0)
 {
 cout << "Factorial is not defined for negative numbers." << endl;
 return 1; 
 }
 for (int i = 1; i <= num; ++i)
 {
 factorial *= i;
 }
 cout << "Factorial of " << num << " = " << factorial << 
endl;
 return 0;
}



//Aim:-Create a C++ program to check Armstrong number.
//Program:- 
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
 }
 return 0;
}



//Aim:-Create a C++ program to print sum of digits.
//Program:-
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
cout << "Sum of digits of " << originalNum << " = " << 
sum << endl;
 return 0;
 }




//Aim:-Create a C++ program to reverse given number.
//Program:-
#include <iostream>
using namespace std;
int main()
{
 int num, reversedNum = 0, remainder;
 cout << "Enter a number: ";
 cin >> num;
 for (; num != 0; num /= 10)
{
 remainder = num % 10;
 reversedNum = reversedNum * 10 + remainder;
 }
 cout << "Reversed number: " << reversedNum << 
endl;
 return 0;
}



//Aim:-Create a C++ program to print multiplication of 2 matrices.
//Program:-
#include<iostream>
using namespace std;
int main()
{
 int rows1, cols1, rows2, cols2;
 cout << "Enter the number of rows and columns for the first matrix: ";
 cin >> rows1 >> cols1;
 int matrix1[rows1][cols1];
 cout << "Enter the elements of the first matrix:" << endl;
 for (int i = 0; i < rows1; ++i)
{
 for (int j = 0; j < cols1; ++j)
{
 cin >> matrix1[i][j];
 }
 }
 cout << "Enter the number of rows and columns for the second matrix: ";
 cin >> rows2 >> cols2;
 if (cols1 != rows2)
{
 cout << "Matrix multiplication not possible." << endl;
 return 1;
 }
 int matrix2[rows2][cols2];
 cout << "Enter the elements of the second matrix:" << endl;
 for (int i = 0; i < rows2; ++i)
P a g e | 14
{
 for (int j = 0; j < cols2; ++j)
{
 cin >> matrix2[i][j];
 }
 }
 int result[rows1][cols2];
 for (int i = 0; i < rows1; ++i)
{
 for (int j = 0; j < cols2; ++j)
{
 result[i][j] = 0;
 for (int k = 0; k < cols1; ++k)
{
 result[i][j] += matrix1[i][k] * matrix2[k][j];
 }
 }
 }
 cout << "Multiplication of the matrices:" << endl;
 for (int i = 0; i < rows1; ++i) {
 for (int j = 0; j < cols2; ++j) {
 cout << result[i][j] << " ";
 }
 cout << endl;
 }
 return 0;
}




//Aim:-Create a C++ program to convert decimal number to binary.
//Program:-
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



//Aim:- Create a C++ program to print alphabet triangle.
//Program:-
#include<iostream>
using namespace std;
int main()
{
 int n;
 cout << "Enter the number of rows for the alphabet triangle: ";
 cin >> n;
 for (int i = 0; i < n; ++i)
{
 char ch = 'A';
 for (int j = 0; j <= i; ++j)
{
 cout << ch;
 ch++;
 }
 ch--;
 for (int j = 0; j < i; ++j)
 {
 ch--;
 cout << ch;
 }
 cout << endl;
 }
 return 0;
}




//Aim:- Implement of Different operators in C++.
//Program:-
#include <iostream>
using namespace std;
int main() 
{
 int a = 10, b = 5;
 int sum = a + b;
 int difference = a - b;
 int product = a * b;
 int quotient = a / b;
 int remainder = a % b;
 cout << "Arithmetic Operators:" << std::endl;
 cout << "Sum: " << sum << std::endl;
 cout << "Difference: " << difference << std::endl;
 cout << "Product: " << product << std::endl;
 cout << "Quotient: " << quotient << std::endl;
 cout << "Remainder: " << remainder << std::endl;
 
 bool isEqual = (a == b);
 bool isNotEqual = (a != b);
 bool isGreater = (a > b);
 bool isLess = (a < b);
 bool isGreaterOrEqual = (a >= b);
 bool isLessOrEqual = (a <= b);
 cout << "\nRelational Operators:" << std::endl;
 cout << "Equal: " << isEqual << std::endl;
P a g e | 20
 cout << "Not Equal: " << isNotEqual << std::endl;
 cout << "Greater: " << isGreater << std::endl;
 cout << "Less: " << isLess << std::endl;
 cout << "Greater or Equal: " << isGreaterOrEqual << 
std::endl;
 cout << "Less or Equal: " << isLessOrEqual << std::endl;
 bool logicalAnd = (a > 0 && b > 0);
 bool logicalOr = (a > 0 || b > 0);
 bool logicalNot = !(a > 0);
 cout << "\nLogical Operators:" << std::endl;
 cout << "Logical AND: " << logicalAnd << std::endl;
 cout << "Logical OR: " << logicalOr << std::endl;
 std::cout << "Logical NOT: " << logicalNot << std::endl;
 
int x = 5;
 x++; 
 int y = 10;
 y--;
 cout << "\nIncrement and Decrement Operators:" << 
std::endl;
 cout << "Increment: " << x << std::endl;
 cout << "Decrement: " << y << std::endl;
 int c = 7;
 c += 3;
 cout << "\nAssignment Operators:" << std::endl;
P a g e | 21
 cout << "Assignment: " << c << std::endl;
 return 0;
}



//Aim:- Implement of Array in C++.
//Program:-
#include <iostream>
using namespace std;
int main()
{
 int numbers[5]; 
 for (int i = 0; i < 5; ++i)
 {
 numbers[i] = i * 2;
 }
 cout << "Array Elements:" <<endl;
 for (int i = 0; i < 5; ++i)
 {
 cout << "Element " << i << ": " << numbers[i] 
<<endl;
 }
 int anotherArray[] = {1, 3, 5, 7, 9};
 cout << "\nAnother Array Elements:" <<endl;
 for (int i = 0; i < sizeof(anotherArray) / 
sizeof(anotherArray[0]); ++i)
 {
 cout << "Element " << i << ": " << 
anotherArray[i] <<endl;
 }
 return 0;
}



//Aim:- Create a program to storage classes in C++.
//Program:-
#include <iostream>
using namespace std;
int externVar = 0;
void demonstrateStorageClasses(int n)
{
 for (int i = 0; i < n; ++i)
{
 
 int autoVar = i * 2;
 cout << "Auto variable: " << autoVar << endl;
 register int registerVar = i * 3;
 cout << "Register variable: " << registerVar << endl;
 
 static int staticVar = 10;
 staticVar += i;
 
cout << "Static variable: " << staticVar << endl;
 externVar = i * 5;
 cout << "Extern variable: " << externVar << endl;
 cout << "-----------------" << endl;
 }
}
int main()
{ 
 int loopCount = 3;
 demonstrateStorageClasses(loopCount);
P a g e | 25
 return 0;
 }



//Aim:- Create a program that use a Class where members Function 
//are define in side a class.
//Program:-
#include <iostream>
using namespace std;
class MyClass
{
public:
 void setValue(int val)
{
 data = val;
 }
 void displayValue()
{
 cout << "Value: " << data << endl;
 }
private:
 int data;
};
int main()
{
 MyClass myObject;
 myObject.setValue(42);
 myObject.displayValue();
 return 0;
}



//Aim:- Create a program that use a Class where members Function 
//are define out side a class on C++.
//Program:-
#include <iostream>
using namespace std;
class Calculator
{
public:
 int add(int a, int b);
 int subtract(int a, int b);
 int multiply(int a, int b);
 double divide(double a, double b);
};
int Calculator::add(int a, int b)
{
 return a + b;
}
int Calculator::subtract(int a, int b)
{
 return a - b;
}
int Calculator::multiply(int a, int b)
{
 return a * b;
}
double Calculator::divide(double a, double b)
{
 if (b != 0)
P a g e | 29
{
 return a / b;
 }
else
{
 cout << "Error: Division by zero!" << endl;
 return 0.0;
 }
}
int main()
{
 Calculator myCalculator; 
 int sum = myCalculator.add(5, 3);
 cout << "Sum: " << sum << endl;
 int difference = myCalculator.subtract(8, 3);
 cout << "Difference: " << difference << endl;
 int product = myCalculator.multiply(4, 6);
 cout << "Product: " << product << endl;
 double quotient = myCalculator.divide(10.0, 2.0);
 cout << "Quotient: " << quotient << endl;
 return 0;
}



//Aim:- Create a program to demonstrate the use of constructers
//usnig C++.
//Program:-
#include <iostream>
using namespace std;
class MyClass {
public:
 MyClass(int initialValue) {
 data = initialValue;
 cout << "Constructor called with value: " << 
initialValue << endl;
 
} 
 void displayValue()
{
 cout << "Value: " << data << endl;
 }
private:
 int data;
};
int main()
{
 MyClass obj1(10);
 obj1.displayValue();
 MyClass obj2(20);
 obj2.displayValue();
 return 0;
}




//Aim:-Create a program to demonstrate over loading of increment 
//and decrement operators using C++.
//Program:-
#include <iostream>
using namespace std;
class Counter
{
private:
 int count;
public:
 Counter() : count(0) {}
 Counter operator++()
{
 Counter temp;
 temp.count = ++count;
 return temp;
 }
 Counter operator--() {
 Counter temp;
 temp.count = --count;
 return temp;
 }
 void displayCount()
{
 cout << "Count: " << count << endl;
 }
};
int main()
{
 Counter myCounter;
P a g e | 33
 cout << "Initial Count: ";
 myCounter.displayCount();
 ++myCounter;
 cout << "After Increment: ";
 myCounter.displayCount();
 --myCounter;
 cout << "After Decrement: ";
 myCounter.displayCount();
 return 0;
}



//Aim:-Create a program to demonstrate to Type casting in C++.
//Program:-
#include <iostream>
using namespace std;
int main()
{
 int intValue = 42;
 double doubleValue = intValue; 
 cout << "Implicit Type Casting:" << endl;
 cout << "Integer value: " << intValue << endl;
 cout << "Double value (implicitly cast): " << doubleValue << endl;
 double anotherDoubleValue = 3.14;
 int truncatedValue = static_cast<int>(anotherDoubleValue);
 cout << "\nExplicit Type Casting:" << endl;
 cout << "Double value: " << anotherDoubleValue << endl;
 cout << "Truncated value (explicitly cast): " << truncatedValue << 
endl;
 return 0;
}

//Aim:- Create a program to demonstrate inheritance using C++.
//Program:-
#include <iostream>
using namespace std;
class Animal {
public:
 void eat()
{
 cout << "Animal is eating." << endl;
 }
 void sleep()
{
 cout << "Animal is sleeping." << endl;
 }
};
class Dog : public Animal {
public:
 void bark()
{
 cout << "Dog is barking." << endl;
 }
};
int main()
{
 Dog myDog;
 myDog.eat();
 myDog.sleep(); 
P a g e | 36
 myDog.bark();
 return 0;
}



//Aim:-Create a program to demonstrate polymorphism using C++.
//Program:-
#include <iostream>
using namespace std;
class Shape {
public:
 virtual void draw() {
 cout << "Drawing a shape." << endl;
 }
};
class Circle : public Shape
{
public:
 void draw() override
{
 cout << "Drawing a circle." << endl;
 }
};
class Square : public Shape
{
public:
 void draw() override
{
 
cout << "Drawing a square." << endl;
 }
};
int main()
{
 Shape* shapes[3];
P a g e | 38
 Circle circle;
 Square square;
 shapes[0] = &circle;
 shapes[1] = &square;
 shapes[2] = new Shape();
 for (int i = 0; i < 3; ++i)
{
 shapes[i]->draw();
 }
 delete shapes[2];
 return 0;
}



//Aim:-Swap two numbers without using third variable.
//Program:-
#include <iostream>
using namespace std;
int main()
{
int n1,n2;
 cout<<"Enter first number a:-"<<endl;
 cin>> n1;
 cout<<"Enter second number b:-"<<endl;
 cin>> n2;
 n1 = n1 + n2;
 n2 = n1 - n2;
 n1 = n1 - n2;
 cout <<"After Swapping:-"<<endl;
cout<<"Number a= " << n1 << endl<<"Number b= " << n2;
 return 0;
}


//Aim:- Create a program to implement in line arguments in C++.
//Program:-
#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
 cout << "Total number of arguments: " << argc <<endl;
 cout << "Arguments:" << endl;
 for (int i = 0; i < argc; ++i)
{
 cout << "Argument " << i << ": " << argv[i] <<endl;
 }
 return 0;

