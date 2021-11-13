//Andy Simphaly

//Libraries
#include <iostream>
#include <string>

//Function to return unique numbers
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

    return "Error";
}

//Main function
int main () {
    //Variable
    int num_char = 0;
    int ctr;

    //Loop through each number
    for (ctr = 0; ctr < 15; ctr++) {
        //Output
        std::cout << unique_num(ctr) << ", ";
        std::cout << unique_num(ctr).length() << std::endl;

        //Count the number of characters and add it
        num_char += unique_num(ctr).length();
        std::cout << num_char << std::endl;
    } 

    std::cout << std::endl;

    //Output
    std::cout << num_char << " " << ctr << std::endl;

    return 0;
}


