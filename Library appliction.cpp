#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Book {
    string title;
    string author;
    int publicationYear;
};
int partition(vector<Book>& arr, int low, int high) {
    string pivot = arr[high].title;
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j].title <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}
void quickSort(vector<Book>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int numBooks;
    cout << "Enter the number of books in the library: ";
    cin >> numBooks;
    cin.ignore();

    vector<Book> library(numBooks);

    for (int i = 0; i < numBooks; ++i) {
        cout << "Enter title of book " << i + 1 << ": ";
        getline(cin, library[i].title);

        cout << "Enter author of book " << i + 1 << ": ";
        getline(cin, library[i].author);

        cout << "Enter publication year of book " << i + 1 << ": ";
        cin >> library[i].publicationYear;
        cin.ignore();
    }

    quickSort(library, 0, numBooks - 1);

    cout << "\nSorted list of books based on title:\n";
    for (int i = 0; i < numBooks; ++i) {
        cout << library[i].title << " by " << library[i].author << " (" << library[i].publicationYear << ")\n";
    }

    return 0;
}

