#include <iostream>
#include <map>
#include <algorithm>
#include <string>
#include <iterator>
using namespace std;

int main()
{
    map<int, string> mybook;
    string temp;
    while (true){
        cout << "to exit q\n";
        cout << "Enter text: ";
        getline(cin, temp);
        if (temp[0] == 'q')
            break;
        mybook.insert({temp.size(), temp});
    }

    for_each(mybook.begin(), mybook.end(),
             [](pair<int, string> item){
        cout << item.second << ". ";
    });
    return 0;
}
