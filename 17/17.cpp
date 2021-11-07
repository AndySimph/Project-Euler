//Andy Simphaly

//Libraries
#include <iostream>
#include <vector>
#include <tgmath.h>
#include <string>

std::string unique_num(int num) {

    switch(num) {
        case  0: return "Zero";
        case  1: return "One";
        case  2: return "Two";
        case  3: return "Three";
        case  4: return "Four";
        case  5: return "Five";
        case  6: return "Six";
        case  7: return "Seven";
        case  8: return "Eight";
        case  9: return "Nine";
        case 10: return "Ten";
        case 11: return "Eleven";
        case 12: return "Twelve";
        case 13: return "Thirteen";
        case 14: return "Fourteen";
        case 15: return "Fifteen";
        case 16: return "Sixteen";
        case 17: return "Seventeen";
        case 18: return "Eighteen";
        case 19: return "Nineteen";
        default: break;
    }

};

int main () {

    int num_char;

    for (int i = 0; i < 15; i++) {
        std::cout << unique_num(i) << ", ";
        for(int j = 0; j < unique_num(i).length(); j++) {
            num_char += 1;
        }
    } 
    std::cout << std::endl;

    return 0;
};


