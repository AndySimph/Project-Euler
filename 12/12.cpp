//Andy Simphaly

//Libraries
#include <iostream>
#include <cmath>
#include <vector>

int main() {

    //Variables
    bool quit = false;
    int triangle = 1;
    long sum;
    int num_factors;
    std::vector<int> factors;

    //Loop to continue until told to stop
    while (!(quit)) {
        
        //Variables that need to be reset for every triangle
        sum = 0;
        num_factors = 0;

        //Add every natural number of the triangle
        for (int i = triangle; i >= 0; i--) {
            sum += i;
        }

        //Get the factors of the sum and push it into the factors vector
        for (int i = 1; i <= sum; i++) {
            if (sum % i == 0) {
                factors.push_back(i);
            }
        }


        std::cout << triangle << std::endl;

        //Output the triangle and factors
        if (factors.size() == 500) {
            std::cout << triangle << std::endl;
            std::cout << sum << std::endl;
            for (int i = 0; i < factors.size(); i++) {
                std::cout << factors[i] << " ";
            }
            std::cout << std::endl << std::endl;

            //End the loop if the factor size is 500
            quit = true;
        }

        //Clear elements of the vector
        factors.clear();

        //Increment the triangle
        triangle++;
    }

    return 0;
}