
#pragma once

#include "simplify_frac.hpp"
#include "doctest/doctest.h"

#include <iostream>

TEST_CASE("most common denominator tests")
{
    typedef fraction<10u, 5u> v1;
    typedef simpl<v1>::result v2;
    constexpr auto p = v2::P;
    constexpr auto q = v2::Q;
    CHECK(p == 2);
    CHECK(q == 1);
};
