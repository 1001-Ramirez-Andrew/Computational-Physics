#include <iostream>
#include <cmath>
#include <complex>
typedef std::complex<double> Complex;

double areaCalc(Complex ptA, Complex ptB, Complex ptC);

int main(){
    Complex ptA(3,7), ptB(3,2), ptC(10,2);
    double area = areaCalc(ptA,ptB,ptC);
    std::cout << area << std::endl;
    
    Complex trans(4,5);
    ptA += trans;
    ptB += trans;
    ptC += trans;
    std::cout << "New value for A B C respectivly: " << ptA << ptB << ptC << std::endl;
    area = areaCalc(ptA,ptB,ptC);
    std::cout << area << std::endl;
    
    Complex power(0,-45);
    Complex rot = exp(power);

    ptA *= rot;
    ptB *= rot;
    ptC *= rot;
    std::cout << "New value for A B C respectivly: " << ptA << ptB << ptC << std::endl;
    area = areaCalc(ptA,ptB,ptC);
    std::cout << area << std::endl;

    return 0;
}

double areaCalc(Complex ptA, Complex ptB, Complex ptC){
    Complex vectAB = ptB - ptA;
    Complex vectAC = ptC - ptA;

    //The area of triangle is half of the cross product
    double area = abs(imag(vectAB*conj(vectAC))/2);
    return area;
}
