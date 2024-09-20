#include <iostream>
#include <string>

using namespace std;

struct Student
{
    string name;
    int age;
};
void bubbleSort(Student arr[], int n)
{
    for (int i = 0; i < n - 1; ++i)
	{
        for (int j = 0; j < n - i - 1; ++j)
		{
            if (arr[j].age > arr[j + 1].age)
			{
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    Student students[numStudents];

    for (int i = 0; i < numStudents; ++i)
	{
        cin.ignore(); // Clear input buffer
        cout << "Enter name of student " << i + 1 << ": ";
        getline(cin, students[i].name);
        cout << "Enter age of student " << i + 1 << ": ";
        cin >> students[i].age;
    }
    bubbleSort(students, numStudents);

    cout << "\nSorted list of students based on age:\n";
    for (int i = 0; i < numStudents; ++i)
	{
        cout << students[i].name << " - " << students[i].age << endl;
    }

    return 0;
}

