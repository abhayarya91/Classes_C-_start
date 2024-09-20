/*Write a c++ program to print alphabet triangle.
Output:
		 A
		 ABA
		 ABCBA
		 ABCDCBA
		ABCDEDCBA*/




#include <iostream>

int main() {
    int n;

    std::cout << "Enter the number of rows: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        char currentChar = 'A';

        // Print spaces
        for (int space = 0; space < n - i - 1; ++space) {
            std::cout << " ";
        }

        // Print increasing alphabets
        for (int j = 0; j <= i; ++j) {
            std::cout << currentChar;
            ++currentChar;
        }

        // Print decreasing alphabets
        currentChar -= 2;
        for (int j = 0; j < i; ++j) {
            std::cout << currentChar;
            --currentChar;
        }

        std::cout << "\n";
    }

    return 0;
}

