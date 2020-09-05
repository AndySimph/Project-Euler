//Programmer: Andy Simphaly

//Librares
#include <iostream>
#include <math.h>
using namespace std;

int main(){

  //Variables
  const int x = 3;
  const int y = 5;
  int x_sum = 0;
  int y_sum = 0;

  //For loop to iterate through natural numbers below 1000
  for (int i = 1; i < 1000; i++) {
    //Check if integer is a multiple of 3, not including multiples of 5
    if (i % x == 0 && i % y != 0) {
      x_sum += i;
    }
    //Checks if integer is multiple of 5
    if (i % y == 0) {
      y_sum += i;
    }
  }

  //Output the sum
  cout << x_sum + y_sum << endl;

  return 0;
};
