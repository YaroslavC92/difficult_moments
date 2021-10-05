#include <iostream>
#include <vector>

void average(std::vector<double> &);

int main()
{
    std::vector<double> mass = {1,2,3,4,5,6,7,8,9,10};
    average(mass);
    for(auto pv = mass.begin(); pv < mass.end(); pv++)
        std::cout << *pv << "  ";

    return 0;
}

void average(std::vector<double> &v){
    double sum = 0;
    for (auto pv = v.begin(); pv < v.end(); pv++)
        sum += *pv;
    v.push_back(sum / v.size());

}
