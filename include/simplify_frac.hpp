#pragma once

#include "fraction.hpp"
#include "gcd.hpp"

template <typename F>
struct simpl
{
    static constexpr auto divisor = gcd<F::P, F::Q>::result;
    typedef fraction<F::P / divisor, F::Q / divisor> result;
};