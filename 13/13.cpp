//Andy Simphaly

//Libraries
#include <iostream>
#include <fstream>
#include <string>

int main () {
    std::string line;
    std::ifstream myfile("numbers.txt");
    long long value = 0;
    std::string temp_val = "";

    if (myfile) {
        while (std::getline(myfile, line)) {

            temp_val = "";

            for (int i = 0; i < 11; i++) {
                temp_val += line[i];
            }
            
            value += std::stol(temp_val);
        
        }
        myfile.close();
    }

    value = value / 1000;

    std::cout << value << std:: endl;

    return 0;
}