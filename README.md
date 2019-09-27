# Introduction to C++ template metaprogramming (TMP)

Some of the code as I try to learn template metaprogramming in C++.
I will try to make each folder incrementally more complex so anyone else can follow as well.

## Factorial

Perhaps the simplest one to implement is the factorial function.
We can leverage the fact that templates can be parsed recursively and if one fail, the compiler will try to find another!

Refer to [factorial.hpp](include/factorial.hpp)

## Fraction

Unfortunately, C++ template programming does not allow floating points as a template type argument.
The reason is that floating points are not necessarily deterministic.
For instance, algebraic operations on floating points are not commutative i.e. X * Y != Y * X most of the time

But, there is a way, of course.

Refer to [fraction.hpp](include/fraction.hpp)

## Greatest Common Divisor (GCD)

You can also use TMP to find the GCD given 2 values.
If you want, you can specialize it to accept a `fraction`.
The algorithm used is the Euclid's algorithm.
This reminds me a lot of Prolog!

Refer to [gcd.hpp](include/gcd.hpp)
