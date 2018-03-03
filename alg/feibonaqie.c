#include<iostream>
#include<stdio.h>

template<unsigned n>
struct Fib
{
    enum
    {
        val = Fib<n-1>::val + Fib<n-2>::val
    };
};

template<>
struct Fib<0>
{
    enum
    {
        val = 0
    };
};


template<>
struct Fib<1>
{
    enum
    {
        val = 1
    };
};

int main()
{
    printf("%u", Fib<28>::val);
    return 0;
}



