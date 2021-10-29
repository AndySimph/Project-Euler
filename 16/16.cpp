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

    std::cout << result << " " << length << std::endl;

    return 0;
}