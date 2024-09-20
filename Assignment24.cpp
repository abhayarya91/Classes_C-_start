#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Employee {
    string name;
    int salary;
};

void selectionSort(vector<Employee>& employees) {
    int n = employees.size();
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (employees[j].salary < employees[minIndex].salary) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(employees[i], employees[minIndex]);
        }
    }
}

int main() {
    int numEmployees;
    cout << "Enter the number of employees: ";
    cin >> numEmployees;

    vector<Employee> employees(numEmployees);

    for (int i = 0; i < numEmployees; i++) {
        cout << "Enter name of employee " << i + 1 << ": ";
        cin >> employees[i].name;
        cout << "Enter salary of employee " << i + 1 << ": $";
        cin >> employees[i].salary;
    }

    selectionSort(employees);

    cout << "\nSorted list of employees based on salary:\n";
    for (const auto& employee : employees) {
        cout << employee.name << " - $" << employee.salary << endl;
    }

    return 0;
}

