#include <iostream>
#include <cmath>
#include <limits>
#include <iomanip>
#include <sstream>
#include <string>

long double betaStretch(double beta);
long double epsilonStretch(double epsilon);

int main(){
    //keep in mind the machine numbers have an error associated with them on top of the error from the operation, for this purpose we assume that the machine represestations are exact.
    
    long double e = .1;
    long double b = .9;
    long double beta = 0;
    long double epsilon = 0;

    std::string bString = "0.9";

    do{
        beta = betaStretch(b);
        epsilon = epsilonStretch(e);

        bString += "9";
        std::istringstream bStream(bString);
        bStream >> b;
        std::cout << std::setprecision(23) << b << std::endl;
        
        e *= .1;
    }
    while(abs(beta - epsilon)/epsilon < .001);
    std::cout <<  "Maxiumum beta is: " << std::setprecision(23) << b << std::endl;

    return 0;
}

long double betaStretch(double beta){
    return 1/sqrt(1-beta*beta);
}

long double epsilonStretch(double epsilon){
    return 1/sqrt((2-epsilon)*epsilon);
}