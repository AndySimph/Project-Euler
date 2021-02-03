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

    //Variable for the product and variable for a temporary value
    int product = 0;
    int temp_val = 0;

    //For loop to check each set of four
    for(int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            //Checks if it is able to go diagonally down and right, get the product and check it with the current product
            if ((j > 4) && (i < 17)) {
                temp_val = std::stoi(matrix[i][j]) * std::stoi(matrix[i+1][j-1]) * std::stoi(matrix[i+2][j-2]) * std::stoi(matrix[i+3][j-3]);
                if (temp_val >= product) {
                    product = temp_val;
                }
            }
            //Checks if it can go down 3, get the product and check it with the current product
            if (i < 17) {
                temp_val = std::stoi(matrix[i][j]) * std::stoi(matrix[i+1][j]) * std::stoi(matrix[i+2][j]) * std::stoi(matrix[i+3][j]);
                if (temp_val >= product) {
                    product = temp_val;
                }
            }
            //Checks if it can go to the right 3, get the product and check it with the current product
            if (j < 17) {
                temp_val = std::stoi(matrix[i][j]) * std::stoi(matrix[i][j+1]) * std::stoi(matrix[i][j+2]) * std::stoi(matrix[i][j+3]);
                if (temp_val >= product) {
                    product = temp_val;
                }
            }
            //Checks if it can go diagonally right, get the product and check it with the current product
            if ((j < 17) && (i < 17)) {
                temp_val = std::stoi(matrix[i][j]) * std::stoi(matrix[i+1][j+1]) * std::stoi(matrix[i+2][j+2]) * std::stoi(matrix[i+3][j+3]);
                if (temp_val >= product) {
                    product = temp_val;
                }
            }
            
        }
    }

    //Output the product
    std::cout << product << std::endl;

    return 0;
} 