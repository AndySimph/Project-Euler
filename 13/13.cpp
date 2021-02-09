//Andy Simphaly

//Libraries
#include <iostream>
#include <fstream>
#include <string>

int main () {
    //Variables
    std::string line;
    std::ifstream myfile("numbers.txt");
    long long value = 0;
    std::string temp_val = "";

    if (myfile) {
        //While loop to get each line
        while (std::getline(myfile, line)) {

            //Reset the temporary value, which is the first 11 digits of each number
            temp_val = "";

            //Concatenate the first 11 digits
            for (int i = 0; i < 11; i++) {
                temp_val += line[i];
            }

            //Add it to value as a long
            value += std::stol(temp_val);
        
        }
        //Close the file
        myfile.close();
    }

    //Divide by 1000 to keep the first 10 digits
    value = value / 1000;

    //Output
    std::cout << value << std:: endl;

    return 0;
}