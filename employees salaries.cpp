#include <iostream>
#include <string>

using namespace std;

struct Employee
{
    string name;
    double salary;
};
void selectionSort(Employee arr[], int n)
{
    for (int i = 0; i < n - 1; ++i)
	{
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) 
		{
            if (arr[j].salary < arr[minIndex].salary)
			{
                minIndex = j;
            }
        }
        if (minIndex != i)
		{
            swap(arr[i], arr[minIndex]);
        }
    }
}

int main()
{
    int numEmployees;
    cout << "Enter the number of employees: ";
    cin >> numEmployees;

    Employee employees[numEmployees];

    for (int i = 0; i < numEmployees; ++i)
	{
        cin.ignore();
        cout << "Enter name of employee " << i + 1 << ": ";
        getline(cin, employees[i].name);
        cout << "Enter salary of employee " << i + 1 << ": $";
        cin >> employees[i].salary;
    }
    selectionSort(employees, numEmployees);
    cout << "\nSorted list of employees based on salary:\n";
    for (int i = 0; i < numEmployees; ++i)
	{
        cout << employees[i].name << " - $" << employees[i].salary << endl;
    }

    return 0;
}

