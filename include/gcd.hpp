#pragma once

#include "fraction.hpp"

// We can use Euclid's algorithm to determine
// the greatest common divisor of a fraction
template <std::size_t X, std::size_t Y>
struct gcd
{
        static constexpr std::size_t result = gcd<Y, X % Y>::result;
};

template <std::size_t X>
struct gcd<X, 0>
{
        static constexpr std::size_t result = X;
};
