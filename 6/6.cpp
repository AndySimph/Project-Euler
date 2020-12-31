//Programmer: Andy Simphaly

//Librares
#include <iostream>
#include <math.h>

int main(){

    //Variables
    int sum = 0;
    int sum_square = 0;
    int square_sum = 0;
    int counter;

    //Take in input of amount of numbers to calculate
    std::cout<<"Enter amount of natural numbers:"<<std::endl;
    std::cin>>counter;

    //Calculate sum of numbers
    for(int i=1; i<=counter; i++) {
        sum += i;
    }

    //Calculate the sum of squares
    for(int i=1; i<=counter; i++) {
        int temp = pow(i,2);
        sum_square += temp;
    }

    //Calculate the squared value of the sum
    square_sum = pow(sum, 2);

    //Calculate the wanted value and output it
    std::cout<<square_sum<<" - "<<sum_square;
    std::cout<<" = "<<square_sum - sum_square<<std::endl;

    return 0;
}