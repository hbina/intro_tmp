#pragma once

#include <cstddef>

// Instead of just a single floating point value to represent reals.
// We can instead represent a smaller set of real number, the rational numbers
// which are represented by 2 integers.

template <
    std::int64_t _P = 0,
    std::int64_t _Q = 1>
struct fraction
{
    static constexpr std::int64_t P = _P;
    static constexpr std::int64_t Q = _Q;
};

template <
    std::int64_t N,
    typename _LEFT>
struct scalar_mult
{
    typedef fraction<_LEFT::P * N, _LEFT::Q * N> result;
};
