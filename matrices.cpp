//*********************************************
// Student Name: Ji Won (Veronica) Kim
// Student Number: 20539908
//
// SYDE 121 Lab: 9 Assignment: 2
//
// Filename: beambend.cpp
// Date submitted: November 20 Wed. 2013
//
// I hereby declare that this code, submitted
// for credit for the course SYDE121, is a product
// of my own efforts. This coded solution has
// not been plagiarized from other sources and
// as not been knowingly plagiarized by others.
//
//*********************************************

#include "matricesmath.h"
#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	
	int matrix1[SIZE][SIZE];
	int matrix2[SIZE][SIZE];
	int product[SIZE][SIZE];
	
	int row1, row2;
	int column1, column2;
	
	char in_file_name[30];
	char out_file_name[30];
	
	ifstream in_stream;
	ofstream out_stream;

	cout << "Enter the input file name. (Maximum 30 characters): ";
	cin >> in_file_name;	
	
	in_stream.open(in_file_name);	
	if (in_stream.fail()){
		cout << "Input file opening failed. \n";
		exit(1);
	}
	
	cout << endl
		 << "Enter the output file name. (Maximum 30 characters): ";
	cin >> out_file_name;
	cout << endl;	
	
	out_stream.open(out_file_name);	
	if (out_stream.fail()){
		cout << "Output file opening failed. \n";
		exit(1);
	}	
	
	get_matrices(in_stream, matrix1,matrix2,row1,row2,column1,column2);
	check_input (row1,row2,column1,column2);
	echo_input (matrix1,matrix2,row1,row2,column1,column2);
	multiply (out_stream, matrix1,matrix2,product,row1,row2,column1,column2);
	output (product,row1,column2);
	
	in_stream.close();
	out_stream.close();

	return 0;
}
