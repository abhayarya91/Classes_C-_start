#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class WordDefinition
{
private:
    string word;
    string definition;

public:
    WordDefinition(string w, string def) : word(w), definition(def) {}
    string getWord() const
	{
        return word;
    }
    string getDefinition() const
	{
        return definition;
    }
};

class Dictionary
{
private:
    vector<WordDefinition> words;
    static bool compareWords(const WordDefinition& a, const WordDefinition& b)
	{
        return a.getWord() < b.getWord();
    }

public:
    void addWord(const string& word, const string& definition)
	{
        words.push_back(WordDefinition(word, definition));
        sort(words.begin(), words.end(), compareWords);
    }
    string searchWord(const string& word) const
	{
        int low = 0;
        int high = words.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (words[mid].getWord() == word)
			{
                return words[mid].getDefinition();
            } else if (words[mid].getWord() < word)
			{
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return "Word not found in the dictionary.";
    }
};

int main()
{
    Dictionary dict;
    dict.addWord("apple", "A fruit that grows on trees.");
    dict.addWord("banana", "A long curved fruit that grows in clusters.");
    dict.addWord("orange", "A citrus fruit with a tough orange skin and segments inside.");
    dict.addWord("pineapple", "A tropical fruit with a rough, spiky skin and sweet flesh.");

    string word;
    cout << "Enter a word to search for its definition: ";
    cin >> word;
    string definition = dict.searchWord(word);
    cout << "Definition of " << word << ": " << definition << endl;

    return 0;
}

