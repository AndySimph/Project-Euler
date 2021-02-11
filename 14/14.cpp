//Andy Simphaly

//Libraries
#include <iostream>

const int LIMIT = 1000000;

int main() {
    //Variables
    int max = 0;
    int maxlen = 1;
    int len;

    //For loop to loop through values before the limit
    for (int i = 2; i < LIMIT; ++i) {
        //Set length
        len = 1;

        //Loop to iterate through the Collatz sequence
        for (long n = i; n > 1; ++len)
            //Ternary to choose which operation to conduct
            n = n % 2 ? n * 3 + 1 : n / 2;

        //Change values if the current length is greater than the current max length
        if (len > maxlen) {
            maxlen = len;
            max = i;
        }
    }

    //Output
    std::cout << "Biggest chain is " << max << ", with a length of " << maxlen << std::endl;

    return 0;
}