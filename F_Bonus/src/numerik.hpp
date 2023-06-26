#pragma once
#include <cstddef>
#include <functional>
#include <cmath>

double newton(const std::function<double(double)>& fx, const std::function<double(double)>& fderiv, double x0, size_t n);

template <typename T>
T newtonTemp(const std::function<T(T)>& fx, const std::function<T(T)>& fderiv, T x0, size_t n) {
    T x = x0;
    for (size_t i = 0; i < n; ++i) {
        x = x - fx(x) / fderiv(x);
    }
    return x;
}

template <typename T>
T fxTemp(T x) {
    return x * x * x + 4 * x * x - 7 * x + 12;
}

template <typename T>
T fderivTemp(T x) {
    return 3 * x * x + 8 * x - 7;
}
