#include "numerik.hpp"
#include <cstddef>

double newton(const std::function<double(double)>& fx, const std::function<double(double)>& fderiv, double x0, size_t n) {
    double x = x0;
    for (size_t i = 0; i < n; ++i) {
        x = x - fx(x) / fderiv(x);
    }
    return x;
}