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

template<unsigned n>
struct Fac
{
    enum
    {
        
        val = n * (Fac<n-1>::val)
    };
};

template<>
struct Fac<0>
{
    enum
    {
        val = 0
    };
};

template<>
struct Fac<1>
{
    enum
    {
        val = 1
    };
};

int main()
{
    printf("%u\n", Fib<28>::val);
    printf("%u\n", Fac<10>::val);
    return 0;
}



