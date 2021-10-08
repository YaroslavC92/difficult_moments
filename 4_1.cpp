#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
void insert_sorted(std::vector<T> &, T);



int main()
{
    std::cout << "Hello world!" << std::endl;
    std::vector<double>mass = {1,2,3,8,9,5,7,6};
    insert_sorted(mass, 5.0);
    for (const auto &v: mass)
        std:: cout << v << "  ";
    return 0;
}

template <typename T>
void insert_sorted(std::vector<T> &arr, T num){
    arr.push_back(num);
    sort(arr.begin(), arr.end());
}


