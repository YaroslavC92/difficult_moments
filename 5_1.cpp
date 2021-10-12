#include <iostream>
#include <vector>
#include <set>
#include <iterator>
#include <string>
using namespace std;
template<typename T>
//void uniWord(vector<int>::iterator _begin, vector<int>::iterator _end);
void uniWord(auto _begin, auto _end);

int main()
{
    vector<int> two = {1,1,2,3,3,3,3,4,44,67,67};
    vector<string> one = {"hello", "world", "world", "mario", "hello"};
    uniWord<string>(one.begin(), one.end());
    cout << endl;
    uniWord<int>(two.begin(), two.end());
    return 0;
}

template<typename T>
void uniWord(auto _begin, auto _end){
    set<T> mySet;
    copy(_begin, _end, inserter(mySet, mySet.end()));
    copy(mySet.begin(), mySet.end(), ostream_iterator<T>(cout, " "));
}
