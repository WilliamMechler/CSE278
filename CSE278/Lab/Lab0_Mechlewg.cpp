/*Copyright 2020 William Mechler
 * File:   main.cpp
 * Author: William Mechler
 * Created on June 2, 2020, 7:35 PM
 */
#include <iostream>
#include <cstdlib>

void star(int height, char fillingChar);
void bin2dec(int binary);
using namespace std;

int main(int argc, char** argv) {
    star(4, '#');
    bin2dec(1101);
    return 0;
}

void star(int height, char fillingChar) {
    int count = height - 1;
    for (int j = 1; j <= height; j++) {
        for (int i = 1; i <= height - count; i ++) {    
            cout << fillingChar;   
        }
        cout << "\n";
        count = count - 1;
    }    
}

void bin2dec(int binary) {
    int bin = binary;
    int dec = 0;
    int base = 1;
    int temp = bin;
    while (temp) {
        int last = temp % 10;
        temp = temp / 10;
        dec += last * base;
        base = base * 2;
    }
    cout << dec;  
}

