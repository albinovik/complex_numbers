#ifndef _COMPLEX_HPP_
#define _COMPLEX_HPP_

#include <string>
//#include <bits/stdc++.h>

using namespace std;

class complex
{
private:
    //double re;//real number
    //double im;//imaginary number
    //char *arr;//for string
public:
    double re;//real number
    double im;//imaginary number
    complex();
    complex(double a, double b);
    //~complex();
    //void show();
    friend complex operator~(complex &p);
    //complex operator~(complex &p);
    complex operator+(const complex &t) const;
    complex operator-(const complex &t) const;
};

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
    //complex open;
    //string line;
    //string T;
    //getline(cin, S);
    //stringstream X(ios_base);



   // int k = 0;
   // while (getline(cin, T, ',')) {
   //     if (k == 0)
   //     {
   //         p.re = stod(T);
   //         k++;
   //     } 
    //    if (k == 1) 
    //    {
    //        p.im = stod(T);
    //        k++;
    //    }
   //     if (k > 1) break;
   // }

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

#endif