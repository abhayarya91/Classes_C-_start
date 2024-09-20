#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Book {
    string title;
    string author;
    int publicationYear;
};

int partition(vector<Book>& books, int low, int high) {
    string pivot = books[high].title;
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (books[j].title <= pivot) {
            i++;
            swap(books[i], books[j]);
        }
    }
    swap(books[i + 1], books[high]);
    return i + 1;
}

void quickSort(vector<Book>& books, int low, int high) {
    if (low < high) {
        int pi = partition(books, low, high);
        quickSort(books, low, pi - 1);
        quickSort(books, pi + 1, high);
    }
}

int main() {
    int numBooks;
    cout << "Enter the number of books in the library: ";
    cin >> numBooks;

    vector<Book> books(numBooks);

    for (int i = 0; i < numBooks; i++) {
        cout << "Enter title of book " << i + 1 << ": ";
        cin.ignore();
        getline(cin, books[i].title);
        cout << "Enter author of book " << i + 1 << ": ";
        getline(cin, books[i].author);
        cout << "Enter publication year of book " << i + 1 << ": ";
        cin >> books[i].publicationYear;
    }

    quickSort(books, 0, numBooks - 1);

    cout << "\nSorted list of books based on title:\n";
    for (const auto& book : books) {
        cout << book.title << " by " << book.author << " (" << book.publicationYear << ")\n";
    }

    return 0;
}

