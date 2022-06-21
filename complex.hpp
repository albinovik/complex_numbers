#ifndef _COMPLEX_HPP_
#define _COMPLEX_HPP_

#include <iostream>

using namespace std;

class complex
{
private:
    double re;//real number
    double im;//imaginary number
    //char *arr;//for string
public:
    complex();
    complex(double a, double b);
    ~complex();
    //void show();
};

complex::complex()
{
    re = im = 0.0;
    arr = nullptr;
}

complex::complex(double a, double b)
{
    re = a;
    im = b;
}

complex::~complex()
{
}

//void show(){

//    char *sh = new char;


//    return nu;
//}



#endif