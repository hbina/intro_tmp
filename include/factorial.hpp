#pragma once

#include <cstddef>

template <std::size_t N>
struct factorial
{
    static constexpr std::size_t result = N * factorial<N - 1>::result;
};

template <>
struct factorial<0u>
{
    static constexpr std::size_t result = 1;
};
