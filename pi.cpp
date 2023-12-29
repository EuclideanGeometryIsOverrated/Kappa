#include "pi.hpp"
#include <iostream>
#include <iomanip>
#include <cmath>

double fac(const double &_in) {
    double _r = 1.0;
    for (double _i=2.0; _i<_in; _i++)
       _r *= _i;
    return _r;
}

double calcPi(const int &_iterations) {
    double _r = 0;

    for (double _k = 0.0; _k < _iterations; _k++) {
        _r += (pow(-1.0,_k) * fac(6.0 * _k) * (13591409.0 + (545140134.0 * _k))) 
            / (fac(3.0 * _k) * pow(fac(_k), 3.0) * pow(640320.0, 3.0 * _k + 3.0 / 2.0));
    }

    _r *= 12.0;
    _r = 1 / _r;

    return _r;
}