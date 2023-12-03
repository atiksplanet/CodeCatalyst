//
//  Converter.cpp
//  MAANG
//
//  Created by Atikul Gazi on 5/4/23.
//

//#include <stdio.h>
//#include <cstdio>
//#include <cstdlib>
#include <iostream>

using namespace std;

void singleInt2Char() {
    int i = 7;
    char c = i + '0';
    printf("%d converted to %c\n", i, c); //7 converted to 7
}

void number2CharArray() {
    int i = 1234567890;
    char charArrayBuffer[99];
    int len = sprintf(charArrayBuffer, "%d", i);
    printf("number %d converted to char array [%s] with len %d\n", i, charArrayBuffer, len);
    // number 1234567890 converted to char array [1234567890] with len 10
    
    // Alternate way
    string str = to_string(i);
    auto chars = str.c_str();
    
    printf("number %d converted to char array [%s] with len %d\n", i, chars, str.size());
}

void charArrayToString() {
    char digits[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
    cout << digits << endl;
    printf("[%s]\n", digits); //[0123456789\337o]
    
    string name = "0123456789";
    cout << name << endl;
    printf("[%s]\n", name.c_str()); //[0123456789]
}

int main() {
    number2CharArray();
    return 0;
}
