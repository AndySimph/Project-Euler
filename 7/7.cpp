//Programmer: Andy Simphaly

//Librares
#include <iostream>
#include <math.h>

//Function to check if the number is prime
bool checkPrime(int num) {

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
};

int main(){

    //Variables
    int counter = 0;
    int primeCounter = 0;
    int prime;

    //While loop to go through each value
    do {
        //Check if counter is prime and increment number
        //of primes
        if (checkPrime(counter)) {
            primeCounter++;
            prime = counter;
        }

        //Increment counter
        counter++;

    //Loop until the 10001st prime number
    } while (primeCounter != 10001); 

    //Output the answer
    std::cout<<prime<<std::endl;

    return 0;
}
