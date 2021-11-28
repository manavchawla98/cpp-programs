//
//  main.cpp
//  file practice 2
//
//  Created by Manav Chawla on 6/26/15.
//  Copyright (c) 2015 Manav Chawla. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main ()
{
    ofstream fout("data.xyz");
    fout<<"The default behaviour of ifstream type stream (upon opening files) allows users to read contents from the file. If the file mode is ios::in only then reading is performed on a text file and if the file mode also includes ios::binary along with ios::in then, reading is performed in binary mode.";
    fout.close();
    char line[75];
    int i=0;
    
    ofstream fo("newfile.txt", ios::app| ios::ate);
    ifstream fin("data.xyz");
    while(fin)
    {
        fin.getline(line,75,'.');
        i++;
        fo << i << ". " << line << endl;
        
    }

    fin.close();
    fo.close();
    

    
    
    
    
    

}