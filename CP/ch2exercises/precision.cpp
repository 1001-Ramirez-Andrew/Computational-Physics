#include <limits>
#include <iostream>

int main(){
    std::cout << "Float: " << std::endl;
    std::cout << std::numeric_limits<float>::min() << std::endl;
    std::cout << std::numeric_limits<float>::max() << std::endl;
    
    std::cout << "Double: " << std::endl;
    std::cout << std::numeric_limits<double>::min() << std::endl;
    std::cout << std::numeric_limits<double>::max() << std::endl;

    float maxFloat = 3.40282E38;
    maxFloat += .01E38;
    std::cout << maxFloat << std::endl;
    
    //This doesnt underflow because of Subnormal Numbers
    float minFloat = 1.17549E-38;
    minFloat -= 1.174E-38;
    std::cout << minFloat << std::endl;

    return 0;
}