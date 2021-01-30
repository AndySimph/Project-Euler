//Andy Simphaly

//Libraries
#include <iostream>

//Function to determine if a number is prime
bool is_prime(int num) {

    //Variable to check if the number is prime
    bool isPrime = true;

    //Check if the num is equal to 0 or 1
    if (num == 0 || num == 1) {
        isPrime = false;
    } else {

        //For loop to check if the num is prime
        //by using the numbers inbetween 2 and the number
        for (int i = 2; i <= num/2; ++i) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    return isPrime;
}


int main () {

    //Variable
    int sum = 0;

    //Loop to iterate through all numbers up to 2 million
    for (int i = 2; i < 2000000; i++) {

        //Check if the number is a prime and if it is then add it to the sum
        if (is_prime(i)) {
            sum += i;
        }
    }

    //Output
    std::cout << sum << std::endl;

    return 0;
}