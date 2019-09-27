# Introduction to C++ template metaprogramming (TMP)

Some of the code as I try to learn template metaprogramming in C++.
I will try to make each folder incrementally more complex so anyone else can follow as well.

## Factorial

Perhaps the simplest one to implement is the factorial function.
We can leverage the fact that templates can be parsed recursively and if one fail, the compiler will try to find another!

Refer to [factorial.hpp](include/factorial.hpp)
