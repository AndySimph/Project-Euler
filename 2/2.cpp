//Programmer: Andy Simphaly

//Libraries
#include <iostream>
#include <math.h>
using namespace std;

//Global Variable for Binet's Formula
const float SQRT_FIVE = pow(5, .5);
const float PHI = (1 + SQRT_FIVE) / 2;
const int LIMIT = 4000000;

//Description:
//Precondition:
//Postcondition:
int evenfib(int n);


int main(){

  //Variables
  int sum = 0;
  int i = 2;

  //Function call
  // do {
  //   cout << sum << endl;
  //   sum += evenfib(i);
  //   i++;
  // } while (evenfib(i-1) <= LIMIT);

  //Output the sum
  int temp = floor(log(LIMIT * SQRT_FIVE) / log(PHI));
  int n = floor(temp / 3);
  int ans = ((pow(PHI, (3 * n + 3)) - 1) / (pow(PHI , 3) - 1)
    - (pow((1 - PHI), (3 * n + 3)) - 1) / (pow((1 - PHI) , 3) - 1)) / SQRT_FIVE;
  cout << temp << " " << n << " " << ans << endl;
  cout << sum << endl;

  return 0;
};

//Function for finding even fibonacci values
int evenfib(int n) {
  int num = (1/SQRT_FIVE) * (pow(PHI, n) - pow( - pow(PHI, -1), n));
  if (num % 2 == 0) {
    return num;
  }
  return 0;
}
