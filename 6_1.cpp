#include <iostream>
#include <thread>
#include <string>
#include <mutex>
//using namespace std;
std::mutex m;
template<typename T>
void pcout(T t){
    m.lock();
    std::cout << t << std::endl;
    m.unlock();
}


int main()
{
    std::thread p1(pcout<std::string>, "HELLO");
    std::thread p2(pcout<double>, 5.67654);
    std::thread p3(pcout<int>, 567654);
    p1.join();
    p2.join();
    p3.join();
    return 0;
}
