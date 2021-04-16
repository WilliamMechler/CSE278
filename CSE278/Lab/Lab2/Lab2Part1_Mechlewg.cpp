/* Copyright 2020 William Mechler
 * File:   main.cpp
 * Author: willm
 * Created on June 9, 2020, 4:00 PM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

string triangle(string input);
string circle(string input);
string name(string input);
string account(string input);
string letter(string input);
int main(int argc, char** argv) {
  ifstream inFile;  
  ofstream outFile;
  vector<string> input;


  string temp = "";
  inFile.open("./inData.txt");

  outFile.open("./outData.txt");

  while (getline(inFile, temp)) {
    input.push_back(temp);
  }
  outFile << triangle(input[0]) << "\n";
  outFile << circle(input[1]) << "\n";
  outFile << name(input[2]) << "\n";
  outFile << account(input[3]) << "\n";
  outFile << letter(input[4]) << "\n";
  outFile.close();;
}
string triangle(string input) {
  int sideA = stoi(input.substr(0, 2));
  int sideB = stoi(input.substr(2, 2));
  int sideC = stoi(input.substr(4, 2));
  int per = (sideA + sideB + sideC);
  float s = ((sideA + sideB + sideC) / 2); 
  float area = sqrt(s*(s-sideA)*(s-sideB)*(s-sideC));
  string temp1 ="Side A =" + to_string(sideA) + ", " + "Side B =";
  string temp2 =to_string(sideB) + ", " + "Side C =" + to_string(sideC) + ", ";
  string temp3 ="area =" + to_string(area) +", " + "perimeter =";
  string temp = temp1 + temp2 + temp3 + to_string(per);
  return temp;
}
string circle(string input) {
  float radius = stof(input);
  float pie = 3.14159;
  float area = pie * pow(radius, 2);
  float cir = 2 * (pie * radius);
  string temp1 ="Radius = " + to_string(radius) + ", "  + "area = ";
  string temp2 = to_string(area) + ", " + "circumference = " + to_string(cir);
  string temp = (temp1 + temp2);
  return temp;
}
string name(string input) {
  string fn = input.substr(3, 4);
  string ln = input.substr(14, 6);
  string age = input.substr(25, 5);
  string temp = "Name: " + fn + " " + ln +", age: " + age;
  return temp;
}
string account(string input) {
    float bal = stof(input.substr(0, 5));
    float rate = stof(input.substr(6, 4));
    float newbal = (bal*(1+((rate/100)/12)));
    string temp1 ="Beginning balance =$" + to_string(bal) +", interest rate =";
    string temp2 =to_string(rate) + "\n";
    string temp3 ="Balance at the end of the month = $" + to_string(newbal);
    string temp = (temp1 + temp2 + temp3);
    return temp;
}
string letter(string input) {
    char let = static_cast<char>(input.at(0));
    string str(1, let);
    int val = static_cast<int>(let);
    char nextLet = static_cast<char>(val+1);
    string temp1 = "The character that comes after " + str;
    string temp = " in the ASCII set is " + nextLet;
    string temp2 = temp1 + temp;
    return temp2;
}

