#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Student {
    string name;
    int age;
};

void bubbleSort(vector<Student>& students) {
    int n = students.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (students[j].age > students[j + 1].age) {
                swap(students[j], students[j + 1]);
            }
        }
    }
}

int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    vector<Student> students(numStudents);
    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> students[i].name;
        cout << "Enter age of student " << i + 1 << ": ";
        cin >> students[i].age;
    }

    bubbleSort(students);

    cout << "\nSorted list of students based on age:" << endl;
    for (int i = 0; i < numStudents; ++i) {
        cout << students[i].name << " - " << students[i].age << endl;
    }

    return 0;
}

