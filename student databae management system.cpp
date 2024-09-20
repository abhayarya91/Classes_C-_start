#include <iostream>
#include <string>

using namespace std;

const int MAX_STUDENTS = 100;

struct Student {
    int id;
    string name;
    int age;
    char grade;
};

Student students[MAX_STUDENTS];
int studentCount = 0;

void insertStudent() {
    if (studentCount < MAX_STUDENTS) {
        cout << "Enter Student ID: ";
        cin >> students[studentCount].id;
        cout << "Enter Student Name: ";
        cin >> students[studentCount].name;
        cout << "Enter Age: ";
        cin >> students[studentCount].age;
        cout << "Enter Grade: ";
        cin >> students[studentCount].grade;
        studentCount++;
        cout << "Student inserted successfully!" << endl;
    } else {
        cout << "Database full. Cannot insert more students." << endl;
    }
}

void deleteStudent() {
    int idToDelete;
    cout << "Enter Student ID to delete: ";
    cin >> idToDelete;
    for (int i = 0; i < studentCount; i++) {
        if (students[i].id == idToDelete) {
            for (int j = i; j < studentCount - 1; j++) {
                students[j] = students[j + 1];
            }
            studentCount--;
            cout << "Student deleted successfully." << endl;
            return;
        }
    }
    cout << "Student not found." << endl;
}

void displayStudents() {
    cout << "Student Database:" << endl;
    cout << "Student ID | Name | Age | Grade" << endl;
    for (int i = 0; i < studentCount; i++) {
        cout << students[i].id << " | " << students[i].name << " | " <<
            students[i].age << " | " << students[i].grade << endl;
    }
}

void searchStudent() {
    int idToSearch;
    cout << "Enter Student ID to search: ";
    cin >> idToSearch;
    for (int i = 0; i < studentCount; i++) {
        if (students[i].id == idToSearch) {
            cout << "Student Found:" << endl;
            cout << "Student ID | Name | Age | Grade" << endl;
            cout << students[i].id << " | " << students[i].name << " | " <<
                students[i].age << " | " << students[i].grade << endl;
            return;
        }
    }
    cout << "Student not found." << endl;
}

int main() {
    int choice;
    int continueOption;
    do {
        cout << "Student Database Management System" << endl;
        cout << "1. Insert a Student" << endl;
        cout << "2. Delete a Student" << endl;
        cout << "3. Display All Students" << endl;
        cout << "4. Search for a Student" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice) {
            case 1:
                insertStudent();
                break;
            case 2:
                deleteStudent();
                break;
            case 3:
                displayStudents();
                break;
            case 4:
                searchStudent();
                break;
            case 5:
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
        cout << "Enter 1 to continue else 0: ";
        cin >> continueOption;
    } while(continueOption == 1);
    return 0;
}

