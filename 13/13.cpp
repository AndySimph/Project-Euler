//Andy Simphaly

//Libraries
#include <iostream>
#include <fstream>
#include <string>

int main () {
    std::string line;
    std::ifstream myfile("numbers.txt");
    long long value;

    if (myfile) {
        while (std::getline(myfile, line)) {

            value = std::stoi(line);

            std::cout << value << std:: endl;
        
        }
        myfile.close();
    }

    return 0;
}