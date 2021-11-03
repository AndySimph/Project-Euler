//Andy Simphaly
//Completed

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
    int sum = 0;

    //Temporary assignment
    int temp_var = result;

    //Find length of the number
    while (temp_var != 0) {
        temp_var = temp_var / 10;
        ++length;
    }

    //Re assign the temp var
    temp_var = result;

    //Define the array
    int array [length];

    //Loop through and assign the array
    for (int i = 0; i < length; i++) {

        array[i] = temp_var % 10;
        temp_var = temp_var / 10;

    }

    //Calculate the sum
    for (int i = 0; i < length; i++) {
        sum += array[i];
    }

    //Output
    std::cout << sum << std::endl;

    return 0;
}