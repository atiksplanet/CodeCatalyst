//
//  MathBasic.cpp
//  MAANG
//
//  Created by Atikul Gazi on 21/2/23.
//

#include <stdio.h>
#include "iostream"
#include <cmath>

using namespace std;

int main() {
    // Int size is usually 4 bytes(4 * 8 bits = 32 bits).
    // Meaning, it can store values from -2147483648 to 2147483647.
    // (-2^31) ~ (2^31 - 1)
    
    // Pow(N)
    int base = 2;
    int power = 16;
    int powerResult = pow(base, power);
    cout << powerResult << endl;
    
    // Log2(N)
    int number2N = pow(2, 16);
    auto log2Result = log2(number2N);
    cout << log2Result << endl;
    
    // Log10(N)
    int number10N = pow(10, 5);
    auto log10Result = log10(number10N);
    cout << log10Result << endl;
}
