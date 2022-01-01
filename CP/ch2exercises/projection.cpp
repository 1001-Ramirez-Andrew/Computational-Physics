#include <iostream>
#include <cmath>
#include <complex>
typedef std::complex<double> Complex;

Complex pointCalc(Complex ptA, Complex ptB, Complex ptC);

int main(){
    Complex ptA(3,7), ptB(3,2), ptC(10,2);
    Complex point = pointCalc(ptA, ptB, ptC);
    double distance = abs(ptB - point);
    std::cout << "The point is: " << point << "With distance: " << distance << std::endl;

    Complex trans(4,5);
    ptA += trans;
    ptB += trans;
    ptC += trans;
    std::cout << "After translation: ";
    point = pointCalc(ptA, ptB, ptC);
    distance = abs(ptB - point);
    std::cout << distance << std::endl;

    Complex power(0,-45);
    Complex rot = exp(power);

    ptA *= rot;
    ptB *= rot;
    ptC *= rot;
    point = pointCalc(ptA, ptB, ptC);
    distance = abs(ptB - point);
    std::cout << "After rotation: " << distance << std::endl;

    return 0;
}

Complex pointCalc(Complex ptA, Complex ptB, Complex ptC){
    Complex segmentAC = ptC - ptA;
    Complex segmentAB = ptB - ptA; 
    //The cloeset point of approach can be found using projections

    Complex projection = (real(segmentAC*conj(segmentAB))/norm(segmentAC)) * segmentAC;

    //Return origin from ptA to (0,0)
    return projection + ptA;
}

