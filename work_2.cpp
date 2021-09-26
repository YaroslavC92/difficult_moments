#include <iostream>
#include <vector>
#include <tuple>
#include <string>

struct NumPhone{
    private:
        int code_country;
        int code_sity;
        std::string number;
        int addnum;
    public:
        NumPhone(): code_country(0), code_sity(0), number(""), addnum(0){}
        void set_NumPhone(){
            char temp;
            std::cout << "Enter code country: ";
            std::cin >> code_country;
            std::cout << "Enter code sity: ";
            std::cin >> code_sity;
            std::cout << "Enter number: ";
            std::cin >> number;
            std::cout << "add number ?(n or y): ";
            std::cin >> temp;
            if (temp == 'y'){
                std::cout << "Enter add number: ";
                std::cin >> addnum;
            }
            else addnum = 0;

        }
        friend std::ostream& operator<< (std::ostream &, const NumPhone &);
};
    std::ostream & operator<< (std::ostream &os, const NumPhone &temp){
        if (temp.addnum){
            os << '+' << temp.code_country << '(' << temp.code_sity << ')'
           << temp.number << ' ' << temp.addnum << std::endl;
        }
        else {
        os << '+' << temp.code_country << '(' << temp.code_sity << ')'
           << temp.number << ' ' << std::endl;
        }
        return os;
    }

int main()
{
    NumPhone user_1;
    user_1.set_NumPhone();
    std::cout << user_1;

    return 0;
}
