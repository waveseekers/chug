#include <fstream>
#include <iostream>
#include "csv.hpp"

int main() {
    std::cout << "Chugging..." << std::endl;

    // open CSV file
    std::ifstream in("../data.csv");
    if (!in.is_open())
    {
        std::cout << "File not found\n";
        return 1;
    }

    // start timer
    double duration;
    std::clock_t start;
    start = clock();

    // parse rows
    csv::CSVRow row;
    while (in >> row)
    {
        std::cout << row[0] << ", " << row[1] << "\n";
    }

    // end timer
    duration = (clock() - start) / (double) CLOCKS_PER_SEC;

    std::cout << "\n";
    std::cout << "Operation took: " << duration << "s\n";

    return 0;
}