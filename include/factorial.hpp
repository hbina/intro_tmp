#pragma once

#include <cstddef>

// This is the base template that will be activated whenever
// the template argument matches the type std;:size_t.
template <std::size_t N>
struct factorial
{
    static constexpr std::size_t result = N * factorial<N - 1>::result;
};

// This is a template specialization that is only
// activated when N == 0.
template <>
struct factorial<0u>
{
    static constexpr std::size_t result = 1;
};
