//Andy Simphaly
//File:	    15.cpp
//Purpose:	Driver file

//Libraries
#include <iostream>
#include <vector>
#include "15.h"

int main () {

    long paths = 1;

    for (int i = 0; i < max_size; i ++) {
        paths *= (2 * max_size) - i;
        paths /= i + 1;
    }

    std::cout << paths << std::endl;

    long grid[max_size + 1][max_size + 1];

    for (int i = 0; i < max_size; i++) {
        for (int j = 0; j < max_size; j++) {
            grid[i][j] = 0;
        }
    }

    for (int i = 0; i < max_size; i++) {
        // std::cout << grid[i][max_size];
        grid[i][max_size] = 1;
        grid[max_size][i] = 1;
    }

    for (int i = max_size - 1; i >= 0; i--) {
        for (int j = max_size - 1; j >= 0; j--) {
            grid[i][j] = grid[i+1][j] + grid[i][j+1];
        }
    }

    for (int i = 0; i < max_size; i++) {
        for (int j = 0; j < max_size; j++) {
            std::cout << grid[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
    return 0;
}