//Andy Simphaly

//Libraries
#include <iostream>
#include <fstream>
#include <string>

int main () {

    const int SIZE = 20;

    std::string matrix[SIZE][SIZE];

    //Open the file with the given matrix values
    std::ifstream file;
    file.open ("matrix.txt");

    //Variables for the matrix position
    int i = 0;
    int j = 0;

    //String to take in each number
    std::string num;
    while (file >> num)
    {
        //Set each positino accordingly
        matrix[i][j] = num;

        //Increment accordingly
        if (j == SIZE) {
            j = 0;
            i++;
        }   
        j++;
    }

    //For loop to cout matrix to terminal
    for(int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            std::cout << matrix[i][j] << " ";
            
        }
        std::cout << std::endl;
    }

    return 0;
} 