#include <iostream>

#include "e.cpp"
#include "phi.cpp"
#include "pi.cpp"

int main(int argc, char *argv[]){

    char toCalculate;
    int prec;

    std::cout << "\nWhat do you want to calculate? Pi, phi, or E?\nType A for pi, B for phi or C for E: ";
    std::cin >> toCalculate;

    std::cout << "How many iterations do you want: ";
    std::cin >> prec;

    switch(toCalculate){
        case 'A':
            std::cout << "Pi with " << prec << " precision: " << calcPi(prec);
            break;

        case 'B':
            std::cout << "Phi with " << prec << " precision: " << calcPhi(prec);
            break;

        case 'C':
            std::cout << "E with " << prec << " precision: " << calcE(prec);
            break;

        default:
            std::cout << "Invalid input.";
    }
    return 0;
}