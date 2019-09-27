#pragma once

#include <cstddef>

template <
    std::size_t _P = 1u,
    std::size_t _Q = 1u>
struct fraction
{
    static constexpr std::size_t P = _P;
    static constexpr std::size_t Q = _Q;
};

template <
    std::size_t N,
    typename _LEFT>
struct scalar_mult
{
    typedef fraction<_LEFT::P * N, _LEFT::Q * N> result;
};
