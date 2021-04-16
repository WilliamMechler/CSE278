/*Copyright 2020 William Mechler
 * File:   main.cpp
 * Author: William Mechler
 * 
 * Created on June 3, 2020, 3:59 PM
 */

#include <algorithm> 
#include <iterator>
#include <iostream>
#include <vector>

using namespace std;

int myMax(vector<int>);
double myAvg(vector<int>);
vector<int> myCopy(vector<int>);
void printNumbers(vector<int>);
vector<int> myReverse(vector<int>);
bool isPrime(long);
void printPrimeNumbers(vector<int>);

int main() {
vector<int> numbers = { 10, 5, 15, 12};
int highest;
int lowest;
double avg;
highest = myMax(numbers);
avg = myAvg(numbers);

cout << "The highest number " << highest << "\n";
cout << "The average of the numbers " << avg << "\n";

vector<int> outNumbers = myCopy(numbers);

cout << "The orginal array" << "\n";
printNumbers(outNumbers);

outNumbers = myReverse(outNumbers);

cout << "The reverse array" << "\n";
printNumbers(outNumbers);

cout << "These are the prime numbers in the array" << "\n";
printPrimeNumbers(outNumbers);
}

int myMax(vector<int> a) {
  int max = a[0];
  for (int i = 1; i < a.size(); i++) {
    if (a[i] > max) {
      max = a[i];
    }
  }
  return max;
}
double myAvg(vector<int> a) {
  int n = a.size();
  double sum = 0.0;
  for (int i = 0; i < n; i++) {
    sum = sum + a[i];
  }
  double average = sum /n;
  return average;
}
vector<int> myCopy(vector<int> a) {
  vector<int> b;
  for (int i = 0; i < 4; i++) {
     b.push_back(a[i]);
    }
    return b;
}
void printNumbers(vector<int> a) {
  for (int i = 0; i < a.size(); i++) {
    cout << a[i] << "\n";
  }
}
vector<int> myReverse(vector<int> a) {
  vector<int> b = a; 
  reverse(a.begin(), a.end());
  return b;
}
bool isPrime(long num) {
  if ( num < 2) return false;
  for (long i = 2; i * i <= num; i++) {
    if ( num % i == 0) return false;
  }
  return true;
}
void printPrimeNumbers(vector<int> a) {
  for (int i = 0; i < a.size(); i++) {
    if (isPrime(a[i])) {
      cout << a[i] << "\n";
    }
  }
}