#include <iostream>
#include <vector>
#include <string>
//using namespace std;
template<typename T >
void f_sort(std::vector<T *> &);

int main()
{
    using std::cout;
    using std::cin;
    double a = 50.0144, b = 40.456, c = 30.785, d = 20.56, e = 10.0258;
    std::vector<double *> mass;
    mass.push_back(&a);
    mass.push_back(&b);
    mass.push_back(&c);
    mass.push_back(&d);
    mass.push_back(&e);
    /*for (int i = 0; i < 5; i++){
        cout << *mass.at(i) << ' ';
    }*/
    for(const auto &vv: mass)
        cout << *vv << ' ';

    f_sort(mass);
    cout << std::endl;
    /*for (int i = 0; i < 5; i++){
        cout << *mass.at(i) << ' ';
    }*/
    for(const auto &vv: mass)
        cout << *vv << ' ';

    return 0;
}

template<typename T >
void f_sort(std::vector<T *> &arr){
    for (int i = 0; i < arr.size(); i++){
        for (int j = 0; j < arr.size() - 1; j++){
            if (*arr.at(j) > *arr.at(j+1)){
                T *temp = arr.at(j);
                arr.at(j) = arr.at(j+1);
                arr.at(j+1) = temp;
            }
        }
    }
}
