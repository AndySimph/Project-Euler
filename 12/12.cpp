//Andy Simphaly

//Libraries
#include <iostream>
#include <cmath>

int main() {

    bool quit = false;
    int triangle = 0;

    while (!(quit)) {
        
        long sum = 0;
        for (int i = triangle; i >= 0; i--) {
            sum += i;
        }

        
        triangle++;

        if (triangle == 5) {
            quit = true;
        }

    }

    std::cout << triangle << std::endl;

    return 0;
}