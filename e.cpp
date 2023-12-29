#include "e.hpp"

double factorial(const int &_in) { return(_in == 1 || _in == 0 ? 1 : factorial(_in - 1) * _in); }

double calcE(const int &_iterations){
    double _r = 1;

    for(int _i = 1; _i <= _iterations; _i++){
        _r += (1 / factorial(_i));
    }

    return _r;
}