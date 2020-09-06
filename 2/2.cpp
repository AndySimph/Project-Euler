//Programmer: Andy Simphaly

//Libraries
#include <iostream>
#include <math.h>
using namespace std;

//Global Variables for Binet's Formula
const float SQRT_FIVE = pow(5, .5);
const float PHI = (1 + SQRT_FIVE) / 2;
const int LIMIT = 4000000;

//Function for calculating the sum of even fibonacci numbers up to the lim.
int evenfibsum(int lim);

int main(){

  //Variables
  int sum = 0;

  //Function call
  sum = evenfibsum(LIMIT);

  //Output the sum
  cout << sum << endl;

  return 0;
};

//Function for finding even fibonacci values
int evenfibsum(int lim) {
  //Fibonacci numbers are only even at every third interval
  int temp = floor(log(lim * SQRT_FIVE) / log(PHI));
  int n = floor(temp / 3);

  //Using sumnation to solve
  int ans = ((pow(PHI, (3 * n + 3)) - 1) / (pow(PHI , 3) - 1)
    - (pow((-1 / PHI), (3 * n + 3)) - 1) / (pow((-1 / PHI) , 3) - 1)) / SQRT_FIVE;

  return ans;
}
