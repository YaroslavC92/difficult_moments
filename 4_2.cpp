#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <numeric>
using namespace std;

int main()
{
    vector<double> a_signal(100);
    vector<int> d_signal(100);
    generate(a_signal.begin(), a_signal.end(), [](){return (rand()%100) * 1.19;});
    copy(a_signal.begin(), a_signal.end(), d_signal.begin());
    for (const auto &v: a_signal)
        cout << v << "  ";
    cout << "\n\n\n\n\n";
    for (const auto &v: d_signal)
        cout << v << "  ";
    double a_sum = accumulate(a_signal.begin(), a_signal.end(), 0.0);
    int d_sum = accumulate(d_signal.begin(), d_signal.end(), 0);
    //cout << a_sum << "  " << d_sum;
    double rezult = pow(a_sum, 2) - 2.0 * a_sum * d_sum + pow(d_sum, 2);
    cout << endl << rezult;
    return 0;
}
