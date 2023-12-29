#include "phi.hpp"

double calcPhi(const int &_iterations){
    double _r = 1;

    for(int _i = 0; _i <= _iterations; _i++){
        _r = 1 / _r;
        _r++;
    }

    return _r;
}