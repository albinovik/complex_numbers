#include <iostream>
#include "complex.hpp"

using namespace std;

int main(){

    complex a(3.0, 4.0);//initialization

    complex c;
    cout << "Enter a complex number (q to quit):" << endl;
      while (cin >> c)
      {
          cout << "c is " << c << endl;
          //cout << "conplex conjugate is " << ~c << endl;
          //cout << "a + c is " << a + c << endl;
          //cout << "a - c is " << a - c << endl;
          //cout << "a * c is " << a * c << endl;
          //cout << "2 * c is " << 2 * c << endl;
          //cout << "Enter a complex number (q to quit):" << endl;
      }
    cout << "Done!" << endl;
    
    return 0;
}