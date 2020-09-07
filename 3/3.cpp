//Programmer: Andy Simphaly

//Librares
#include <iostream>
using namespace std;

int main(){

  //Variables
  long num;
  int i = 2;

  //Get input
  cin >> num;

  //While loop cheking that the input is always above i^2
  while ((i * i) < num) {
    //While loop checking that the input divided by i is left with no remainder
    while ((num % i) == 0) {
      //Divide the input by i
      num = num / i;
    }
    //Increase i by 1
    i = i + 1;
  }

  //Output the sum
  cout << num << endl;

  return 0;
};
