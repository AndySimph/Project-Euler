//Andy Simphaly

//Libraries
#include <iostream>
#include <vector>
#include <tgmath.h>

int main () {
    //Variables
    int base = 2;
    int power = 1000;
    int result = pow(base, power);

    int length = 0;
    int temp_var = result;

    while (temp_var != 0)
    {
        temp_var = temp_var / 10;
        ++length;
    }

    temp_var = result;

    int array [length];

    for (int i = 0; i < length; i++) {

        array[i] = temp_var % 10;
        temp_var = temp_var / 10;

    }

    int sum = 0;

    for (int i = 0; i < length; i++) {
        sum += array[i];
    }

    std::cout << sum << std::endl;

    
    return 0;
}