#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <fstream>
#include <cctype>
#include "Times.h"
using namespace std;

int main()
{
    ifstream inFile;
    inFile.open("war and peace.txt");
    if (!inFile.is_open()){
        cout << "ERROR" << endl;
    }
    vector<char> book;
    //string book;
    //getline(inFile, book, '\0');
    //cout << book.size();
    char sym;
    unsigned int count = 0;
    while (inFile.get(sym))
        book.push_back(sym);
        Timer time("book");
    for (const auto &vv: book){
        if (isalpha(vv))
            switch (vv){
                    case 'A':
                    case 'a':
                    case 'E':
                    case 'e':
                    case 'I':
                    case 'i':
                    case 'O':
                    case 'o':
                    case 'U':
                    case 'u':
                    case 'Y':
                    case 'y':
                        ++count;
                }
    }
    time.print();
    cout << endl << count;

    return 0;
}
