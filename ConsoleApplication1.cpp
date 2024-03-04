#include <iostream>
#include <string>
#include <Windows.h>
#include <algorithm>
#include <random>
using namespace std;

    string reverse(const string& word) {
    string reversedWord = word;
    reverse(reversedWord.begin(), reversedWord.end());
    return reversedWord;
}

    string removeVowels(const string& word) {
    string result = "";
    for (char c : word) {
        if (c != 'а' && c != 'е' && c != 'ё' && c != 'и' && c != 'о' && c != 'у' != 'ы' && c != 'э' && c != 'ю' && c != 'я') {
            result += c;
        }
    }
    return result;
}

    string removeConsonants(const string& word) {
    string result = "";
    for (char c : word) {
        if (c != 'б' && c != 'в' && c != 'г' && c != 'д' && c != 'ж' != 'з' != 'й' && c != 'к' && c != 'л'
            && c != 'м' && c != 'н' && c != 'о' && c != 'п' && c != 'р' && c != 'с' && c != 'т' && c != 'ф'
            && c != 'х' && c != 'ц' != 'ч' != 'щ' && c != 'ш' && c != 'ч' && c != 'ъ' && c != 'ь') {
            result += c;
        }
    }
    return result;
}

    string shuffle(const string& word) {
    string shuffledWord = word;
    random_device rd;
    mt19937 g(rd());
    shuffle(shuffledWord.begin(), shuffledWord.end(), g);
    return shuffledWord;
}
    int main() {
        SetConsoleCP(1251);
        setlocale(LC_ALL, "Russian");
        string inputWord;
        while (true)
        {
            cout << "\nВведите слово: ";
            cin >> inputWord;

            int choice;
        
                cout << "Выберите действие:\n";
                cout << "1. Вывести слово задом наперед.\n";
                cout << "2. Вывести слово без гласных.\n";
                cout << "3. Вывести слово без согласных.\n";
                cout << "4. Рандомно раскидывать буквы заданного слова.\n";

                cin >> choice;

                if (choice == 1)
                {
                    cout << "Результат: " << reverse(inputWord) << endl;
                }
                else if (choice == 2)
                {
                    std::cout << "Результат: " << removeVowels(inputWord) << endl;
                }
                else if (choice == 3)
                {
                    std::cout << "Результат: " << removeConsonants(inputWord) << endl;
                }
                else if (choice == 4)
                {
                    std::cout << "Результат: " << shuffle(inputWord) << "\n" << endl;
                }
                else {
                    break;
                }
        }
}