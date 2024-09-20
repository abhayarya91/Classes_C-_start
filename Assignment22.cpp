#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class WordDefinition {
private:
    string word;
    string definition;

public:
    WordDefinition(string w, string d) : word(w), definition(d) {}

    string getWord() const {
        return word;
    }

    string getDefinition() const {
        return definition;
    }
};

string searchDefinition(const vector<WordDefinition>& dictionary, const string& target) {
    int left = 0;
    int right = dictionary.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (dictionary[mid].getWord() == target) {
            return dictionary[mid].getDefinition();
        } else if (dictionary[mid].getWord() < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return "Word not found";
}

int main() {
    vector<WordDefinition> dictionary = {
        WordDefinition("apple", "A fruit that grows on trees."),
        WordDefinition("banana", "A long curved fruit that grows in clusters."),
        WordDefinition("orange", "A citrus fruit with a tough orange skin and segments inside."),
        WordDefinition("pineapple", "A tropical fruit with a rough, spiky skin and sweet flesh.")
    };

    sort(dictionary.begin(), dictionary.end(), [](const WordDefinition& a, const WordDefinition& b) {
        return a.getWord() < b.getWord();
    });

    string word;
    cout << "Enter a word to search for its definition: ";
    cin >> word;

    string definition = searchDefinition(dictionary, word);
    cout << "Definition: " << definition << endl;

    return 0;
}

