#include <iostream>

using namespace std;

int main()
{

    int firstMatrix[3][3], secondMatrix[3][3], resultMatrix[3][3];


    cout << "Enter elements of the first matrix (3x3):\n";
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            cin >> firstMatrix[i][j];

    cout << "Enter elements of the second matrix (3x3):\n";
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            cin >> secondMatrix[i][j];

    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            resultMatrix[i][j] = 0;
            
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            for (int k = 0; k < 3; ++k)
                resultMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];

    cout << "Multiplication of the matrices:\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j)
            cout << resultMatrix[i][j] << " ";
        cout << endl;
    }
    return 0;
}

