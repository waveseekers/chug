Chug
====

Chug is simple header-only library for reading CSV files.

#### Usage

Just include `csv.hpp` into your project and place it in the include path. Note that the library needs a standard C++11 
compiler to work.

#### Documentation

The library has a class called `CSVRow` to represent a row in a CSV file. Each row is streamed into this object as a CSV
file is read line by line by the library.

A simple CMake example with a dummy CSV file is included here to demonstrate how to use the library.