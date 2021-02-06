//Andy Simphaly

//Libraries
#include <iostream>
#include <math.h>

//Function to get number of divisors
int num_Divisors(int n) {

    //Variables
    int num = 0;
    int square_root = static_cast<int>(sqrt(n));
 
    for(int i = 1; i<= square_root; i++){
        if(n % i == 0){
            num += 2;
        }
    }
    //Correction if the number is a perfect square
    if (square_root * square_root == n) {
        num--;
    }
 
    return num;
}

int main() {

    //Variables
    int number = 0;
    int i = 1;
 
    //Loop while number of divisors is lower than 500
    while (num_Divisors(number) < 500) {
        number += i;
        i++;
    }

    std::cout << number << std::endl;

    return 0;
}
