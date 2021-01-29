//Programmer: Andy Simphaly

//Librares
#include <iostream>
#include <string>
#include <sstream>
#include <math.h>

//Function to check if the numbers are a pythagorean triplet
bool ispythtrip(int a, int b, int c) {

    int a_squared = pow(a, 2);
    int b_squared = pow(b, 2);
    int c_squared = pow(c, 2);

    if ((a_squared + b_squared) == c_squared) {
        return true;
    }

    return false;
}


//Main function
int main() {

    int a_result;
    int b_result;
    int c_result;

    for(int i = 1; i < 1000; i++) {
        for(int j = 1; j < 1000; j++) {
            for(int k = 1; k < 1000; k++) {
                if (((i + j + k) == 1000) && (ispythtrip(i, j, k))) {
                    a_result = i;
                    b_result = j;
                    c_result = k;
                }
            }
        }
    }

    std::cout << a_result << " " << b_result << " " << c_result << std::endl;

    return 0;
}

