//*********************************************
// Student Name: Ji Won (Veronica) Kim
// Student Number: 20539908
//
// SYDE 121 Lab: 9 Assignment: 2
//
// Filename: matricesmath.h
// Date submitted: November 20 Wed. 2013
//
// I hereby declare that this code, submitted
// for credit for the course SYDE121, is a product
// of my own efforts. This coded solution has
// not been plagiarized from other sources and
// as not been knowingly plagiarized by others.
//
//*********************************************

#ifndef MATRICESMATH_H
#define MATRICESMATH_H
#include <iostream>
#include <fstream>

using namespace std;

const int SIZE = 100;

void get_matrices(ifstream& in_stream, int matrix1[][SIZE], int matrix2[][SIZE], int& row1, int& row2, int& column1, int& column2);
// obtains the matrices from the input file. 
// it is expected that the number of rows and columns of the matrices are included in the input file.
void check_input (int row1, int row2, int column1, int column2);
// this function checks that the appropriate sized matrices are being inputted. 
// if the number of the column the first matrix does not match the number of the row of the second matrix,
// it will not compute the calculation.
void echo_input (int matrix1[][SIZE], int matrix2[][SIZE], int row1, int row2, int column1, int column2);
// this function echo the matrices
void multiply (ofstream& out_stream, int matrix1[][SIZE], int matrix2[][SIZE], int product[][SIZE], int row1, int column1, int row2, int column2);
// this function multiplies the two matrices
void output (int product[][SIZE], int row1, int column2);
// this function outputs the product of two matrices

#endif
