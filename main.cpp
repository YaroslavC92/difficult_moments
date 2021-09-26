#include <iostream>
#include <string>
#include <tuple>
const int SIZE = 5;
struct Person{
private:
    //char surname[20];
    //char name[20];
    std::tuple<std::string, std::string, std::string> dataname;
    bool middle_flag;
    //char middlename[20] = "No middle name";
public:
    void setPerson(){
        std::cout << "Enter surname: ";
        std::cin >> std::get<0>(dataname);
        std::cout << "Enter name: ";
        std::cin >> std::get<1>(dataname);
        std::cout << "The presence of a middle name enter 1 otherwise 0: ";
        std::cin >> middle_flag;
        if (middle_flag){
            std::cout << "Enter middlename: ";
            std::cin >> std::get<2>(dataname);
        }

    }
    friend std::ostream& operator<< (std::ostream &out, const Person &people);
    friend const Person * operator== (const Person *, const std::string &);

};
std::ostream& operator<< (std::ostream &out, const Person &people){
        out << std::get<0>(people.dataname) << "   " << std::get<1>(people.dataname) << "   " << std::get<2>(people.dataname) << std::endl; ;
        return out;
    }
    const Person * operator== (const Person *people, const std::string &find_dataname){
        for (int i = 0; i < SIZE; i++ ){
            std::string s1, s2, s3;
            std::tie(s1, s2, s3) = people[i].dataname;
            if (s1 == find_dataname)
                return &people[i];
            if (s2 == find_dataname)
                return &people[i];
            if (s3 == find_dataname)
                return &people[i];
        }
        std::cout << "NO MATCH" << std::endl;
        return NULL;
    }


int main()
{
    Person one[SIZE];
    one[0].setPerson();
    const Person *temp;
    std::string find = "Noviko";
    temp = one == find;
    std::cout << temp;
    return 0;
}
