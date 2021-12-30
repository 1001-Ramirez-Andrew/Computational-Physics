#include <complex>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits>

typedef std::complex<double> Complex;
int main(){
    std::cout << std::setprecision(16) << M_PI << std::endl;

    Complex x0 = 1.0;
    Complex x1(1.0/2.0 , sqrt(3.0/4.0));

    //starts an an inscribed hexagon
    unsigned int nsides = 6;
    int numDoub;
    std::cout << "How many times would you like to double the sides? ";
    std::cin >> numDoub;

    for(int i = 0; i < numDoub; i++){
        x1 = (x1 + x0)/abs(x1+x0);
        nsides *= 2;
    }

    double lsides = abs(x1 - x0);
    double approx = nsides * lsides / 2.0;
    std::cout << "Number of Sides: " << nsides << std::endl;
    std::cout << "Value for Pi: " << std::setprecision(16) << approx << std::endl;

    return 0;
}