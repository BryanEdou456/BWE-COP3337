#include <iostream>

int power(int base, int exp);

int main(void){

    return 0;
}

int power(int base, int exp){
    if (exp == 0) {
        std::cout << "I am power( " << base << ',' << exp << ") \n";
        std::cout << "The answer is " << 1 << std::endl;
        return 1; 
    }

    std::cout << "I am power( " << base << ',' << exp << ")\n";
    std::cout << "I know it's " << base << "*" << "power(" << base "," << exp 
    int help = power(base, exp - 1);
    std::cout << "power(" << base << "," << exp - 1 
}