#include <iostream>
#include <vector>
#include <algorithm>
#include <thread>
#include <mutex>
#include <chrono>
std::mutex m;
void master(std::vector<int> &);
void vor(std::vector<int> &);
int main()
{
    std::vector<int> mass = {3,6,3,6,9,3,7,5,3,5,78,1};
    while (true){
    std::thread th1(master, std::ref(mass));
    th1.join();
    std::thread th2(vor, std::ref(mass));
    //th1.join();
    th2.join();
    }

    return 0;
}

void master(std::vector<int> &v){
    m.lock();
    v.push_back((rand() % 10000));
    std::sort(v.begin(), v.end());
    m.unlock();
}

void vor(std::vector<int> &v){
    m.lock();
    const auto pv = v.end() - 1;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << *pv;
    v.pop_back();
    m.unlock();

}
