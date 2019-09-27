#pragma

#include "factorial.hpp"
#include "doctest/doctest.h"

#include <iostream>

TEST_CASE("factorial tests")
{
    static constexpr auto val = factorial<5>::result;
    CHECK(val == 120);
};
