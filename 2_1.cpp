#include <iostream>

template<typename T>
void f_swap(T *, T*);

int main()
{
    int a_var = 20, b_var = 40;
    std::cout << a_var << "   " << b_var << std::endl;
    f_swap(&a_var, &b_var);
    std::cout << a_var << "   " << b_var << std::endl;
    return 0;
}

template<typename T>
void f_swap(T *t_one, T *t_two){
T temp = *t_one;
*t_one = *t_two;
*t_two = temp;
}
