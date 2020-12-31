//Programmer: Andy Simphaly

//Librares
#include <iostream>
#include <math.h>

int main(){

    int sum = 0;
    int sum_square = 0;
    int square_sum = 0;
    int counter;

    std::cout<<"Enter amount of natural numbers:"<<std::endl;
    std::cin>>counter;

    for(int i=1; i<=counter; i++) {
        sum += i;
    }

    for(int i=1; i<=counter; i++) {
        int temp = pow(i,2);
        sum_square += temp;
    }

    square_sum = pow(sum, 2);


    std::cout<<square_sum<<" - "<<sum_square;
    std::cout<<" = "<<square_sum - sum_square<<std::endl;

    return 0;
}