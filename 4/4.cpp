//Programmer: Andy Simphaly

//Librares
#include <iostream>
using namespace std;

int main(){

  //Variables
  bool isPal = false;

  int num = 9009;
  int rev = 0;
  int val = num;

   while(num > 0) {
      rev = rev * 10 + num % 10;
      num = num / 10;
   }
   if (val == rev) {
      isPal = true;
   }

  //Output the sum
  if (isPal) {
    cout << num << endl;
  } else {
    cout << "Nop" <<endl;
  }


  return 0;
};
