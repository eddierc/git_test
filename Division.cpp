#include<stdexcept>
#include<iostream>

int divide(int num, int den) {
    if(den == 0){
        throw std::invalid_argument( "received negative value" );
    }

    if(den == 1){
        return num;
    }

    if(num == 0){
        return 0;
    }

    if(num-den >= den){
        return divide(num - den, den) + 1;
    }
    return 1;
}

int modulo(int num, int den) {
    int result_div = divide(num, den);
    return num - (result_div * den);
}

int main() {
    std::cout << "The division result is " << divide(15,3) << std::endl;
    std::cout << "The modulo for the division is " << modulo(15,3) << std::endl;
    return 0;
}