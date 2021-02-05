//Andy Simphaly

//Libraries
#include <iostream>
#include <cmath>

int main() {

    //Variables
    bool quit = false;
    int triangle = 0;
    long sum;
    int num_factors;

    //Loop to continue until told to stop
    while (!(quit)) {
        
        //Variables that need to be reset for every triangle
        sum = 0;
        num_factors = 0;

        //Add every natural number of the triangle
        for (int i = triangle; i >= 0; i--) {
            sum += i;
        }

        //Increment the triangle
        triangle++;

        //If statement to quit the loop
        if (triangle == 5) {
            quit = true;
        }
    }

    //Output
    std::cout << triangle << std::endl;

    return 0;
}