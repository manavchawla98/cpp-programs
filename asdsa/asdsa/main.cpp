//
//  main.cpp
//  asdsa
//
//  Created by Manav Chawla on 9/27/15.
//  Copyright © 2015 Manav Chawla. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    unsigned short a = 0xFFFF;      // pattern 1111 ...
    unsigned short b = 0xAAAA;      // pattern 1010 ...
    
    cout  << ( a & b ) << endl;   // prints "aaaa", pattern 1010 ...
}