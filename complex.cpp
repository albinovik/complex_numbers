#include <iostream>
#include <string>
#include "complex.hpp"

using namespace std;

complex::complex()
{
    re = im = 0.0;
}

complex::complex(double a, double b)
{
    re = a;
    im = b;
}

istream& operator>>(istream& in, complex& p)
{
    in >> p.re >> p.im;
    return in;
}

ostream& operator << (ostream &os, const complex &p)
{
    os << "(" << p.re << ", " << p.im << "i)";
    return os;
}

complex operator~(complex &p) 
{
    complex tmp;
    tmp.re = p.re;
    tmp.im = -p.im;
    return tmp;
}

complex complex::operator+(const complex &p) const
{
    complex tmp;
    tmp.re = re + p.re;
    tmp.im = im + p.im;
    return tmp;   
}

complex complex::operator-(const complex &p) const
{
    complex tmp;
    tmp.re = re - p.re;
    tmp.im = im - p.im;
    return tmp;   
}

double complex::todouble()
{
    double k = 0.0;
    if (im == 0.0) k = re;
    return k; 
}

complex complex::operator*(const complex &p) const
{
    complex tmp;
    tmp.re = re * p.re - im * p.im;
    tmp.im = im * p.re + re * p.im;
    return tmp;   
}

complex operator*(const int val, const complex &p)
{
    complex tmp;
    tmp.re = val * p.re;
    tmp.im = val * p.im;
    return tmp;   
}