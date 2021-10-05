#include <iostream>
#include <vector>

class Matrix{
    private:
        std::vector<std::vector<double>> matr;
        double detrm;
    public:
        void setMatr();
        void showMatr();
        void detMat();
        double getDet(){
            return detrm;
        }
};



int main()
{
    Matrix one;
    one.setMatr();
    one.showMatr();
    std::cout << std::endl << one.getDet();
    return 0;
}

void Matrix::setMatr(){
    int sizeMatr;
    std::cout << "Enter the number of lines: ";
    std::cin >> sizeMatr;
    //std::cout << "Enter the number of columns: ";
    //std::cin >> s_y;
    matr.resize(sizeMatr);
    double temp;
    std::cout << "Fill in the matrix" << std::endl;
    for (int i = 0; i < sizeMatr; i++){
        for (int j = 0; j < sizeMatr; j++){
            std::cout << "position [" << i << "][" << j << "]: ";
            std::cin >> temp;
            matr[i].push_back(temp);
        }
    }
}

void Matrix::showMatr(){
    for (int i = 0; i < matr.size(); i++){
        for (int j = 0; j < matr.size(); j++)
            std::cout << matr[i][j] << "  ";
        std::cout << std::endl;
    }
}
// Для матрицы 3х3
void Matrix::detMat(){
    detrm = matr[0][0] * matr[1][1] * matr[2][2] - matr[0][0] * matr[1][2] * matr[2][1] - matr[0][1] * matr[1][0] * matr[2][2]
            - matr[0][1] * matr[1][2] * matr[2][0] - matr[0][2] * matr[1][0] * matr[2][1] - matr[0][2] * matr[1][1] * matr[2][0];
}
