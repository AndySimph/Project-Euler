//Andy Simphaly

//Libraries
#include <iostream>
#include <vector>
#include <tgmath.h>

int main () {
    //Variables
    int base = 2;
    int power = 15;
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

    std::cout << result << " " << length << std::endl;

    for (int i = 0; i < length; i++) {
        std::cout << array[i] << std::endl;
    }

    return 0;
}