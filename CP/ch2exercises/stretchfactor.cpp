#include <iostream>
#include <cmath>
#include <limits>
#include <iomanip>

double betaStretch(double beta);
double epsilonStretch(double epsilon);

int main(){
    std::cout << std::numeric_limits<double>::epsilon() << std::endl;
    double weird = 1.0;
    weird += 3.27047E-14;
    std::cout << std::setprecision(25) << weird << std::endl;
    return 0;
}

double betaStretch(double beta){
    return 1/sqrt(1-beta*beta);
}

double epsilonStretch(double epsilon){
    return 1/sqrt((2-epsilon)*epsilon);
}