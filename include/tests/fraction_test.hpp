#pragma once

#include "fraction.hpp"
#include "doctest/doctest.h"

#include <iostream>

TEST_CASE("fraction tests")
{
    typedef fraction<5, 2> f5o2;
    constexpr auto v1 = f5o2::P;
    constexpr auto v2 = f5o2::Q;
    CHECK(v1 == 5);
    CHECK(v2 == 2);

    typedef fraction<-5, -2> f5o3;
    constexpr auto v3 = f5o3::P;
    constexpr auto v4 = f5o3::Q;
    CHECK(v3 == -5);
    CHECK(v4 == -2);
};

TEST_CASE("fraction tests --- scalar multiplication")
{
    typedef fraction<5u, 2u> f5o2;
    typedef scalar_mult<2u, f5o2>::result f10o4;
    constexpr auto v1 = f10o4::P;
    constexpr auto v2 = f10o4::Q;
    CHECK(v1 == 10u);
    CHECK(v2 == 4u);
};
