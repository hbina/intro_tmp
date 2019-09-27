#pragma once

#include "gcd.hpp"
#include "doctest/doctest.h"

#include <iostream>

TEST_CASE("most common denominator tests")
{
    constexpr auto v1 = gcd<10u, 5u>::result;
    CHECK(v1 == 5u);
    constexpr auto v2 = gcd<3u, 2u>::result;
    CHECK(v2 == 1u);
};
