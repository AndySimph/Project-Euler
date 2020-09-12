//Programmer: Andy Simphaly

//Librares
#include <iostream>
using namespace std;

//Function to check if integer is a palindrome
bool palCheck(int num);

int main(){

  //Variables
  int pal = 0;
  int n1 = 999;
  int n2 = 999;
  int i=0;
  int t;

  //While loop to check through integers
  while (!pal) {
      for(int j=0;j<2;j++) {
          for(int k=0; k<=i; k++) {
              //Go through various numbers
              t=(n1-i-k)*(n2-i+k);
              if(palCheck(t))
                  pal = t;
          }
          ++i;
      }
  }

  //Output
  cout << pal << endl;

  return 0;
};

//palCheck Function
bool palCheck (int num) {
  //Variables
  int rev = 0;
  int val = num;

  //While loop to check through each digit and insert it into reversed var
  while(num > 0) {
    rev = rev * 10 + num % 10;
    num = num / 10;
  }

  //Return true if palindrome
  if (val == rev) {
    return true;
  }
  return false;
}
