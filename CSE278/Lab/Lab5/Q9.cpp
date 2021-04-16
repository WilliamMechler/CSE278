/* Copyright 2020 William Mechler
 * File:   main.cpp
 * Author: willm
 * Created on June 9, 2020, 4:00 PM
 */

#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;

/*
 * 
 */

int hex2dec(char* hex);
int main(int argc, char** argv) {    
   cout << hex2dec(argv[1]) << endl;
}

int hex2dec(char* hex) {
    int Startbase = 1; 
    int newDec = 0; 
    int length = strlen(hex);
      
    for (int i = length-1; i >= 0; i--) {     
        if (hex[i] >= '0' && hex[i] <= '9') { 
            newDec += (hex[i] - 48)*Startbase; 
                  
       
            Startbase = Startbase * 16; 
        } else if (hex[i] >= 'A' && hex[i] <= 'F') { 
            newDec += (hex[i] - 55)*Startbase; 
            Startbase = Startbase*16; 
        } 
    } 
    return newDec; 
}
