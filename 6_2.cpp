#include <iostream>
#include <thread>
#include <mutex>
//using namespace std;
std::mutex m;
int primeNum(int);

int main()
{
    int t_var;
    std::cout << "Enter to number: ";
    std::cin >> t_var;
    int rezult;
    std::thread p1([&](){rezult = primeNum(t_var);});
    p1.join();
    std::cout << rezult;
    return 0;
}

// Функция использует ресурсоемкий алгоритм
int primeNum(int num){
    int rezult = 2;
    int count = 1;
    int temp = 0;
    while (count <= num){
    for (int i = 2; i <= rezult; i++)
        if (rezult % i == 0)
            temp++;
    if (temp == 1){
        count++;
        rezult++;
    }
    else rezult++;
    temp = 0;
}
    return rezult - 1;
}

