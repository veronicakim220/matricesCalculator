//*********************************************
// Student Name: Ji Won (Veronica) Kim
// Student Number: 20539908
//
// SYDE 121 Lab: 9 Assignment: 2
//
// Filename: matricesmath.cpp
// Date submitted: November 20 Wed. 2013
//
// I hereby declare that this code, submitted
// for credit for the course SYDE121, is a product
// of my own efforts. This coded solution has
// not been plagiarized from other sources and
// as not been knowingly plagiarized by others.
//
//*********************************************

#include <iostream>
#include <fstream>
#include <cstdlib>
#include "matricesmath.h"

using namespace std;


void get_matrices (ifstream& in_stream, int matrix1[][SIZE], int matrix2[][SIZE], int& row1, int& row2, int& column1, int& column2){
	
	in_stream >> row1
			  >> column1;
	
	for(int i = 0; i < row1; i++){
		
		for(int j = 0; j < column1; j++){
			in_stream >> matrix1[i][j];
		}
	}
	
	in_stream >> row2
			  >> column2;
		
	for(int i = 0; i < row2; i++){
		
		for(int j = 0; j < column2; j++){
			in_stream >> matrix2[i][j];
		}
	}
}


void check_input (int row1, int row2, int column1, int column2){
	
	if ((column1 != row2)||(row1 > SIZE)||(column2 > SIZE)){
		cout << "Invalid matrices entered. \n";
		exit(1);
	}	
}

void echo_input (int matrix1[][SIZE], int matrix2[][SIZE], int row1, int row2, int column1, int column2){
	
	cout << "The first matrix is \n";
	
	for(int i = 0; i < row1; i++){
		for(int j = 0; j < column1; j++){
			cout << matrix1[i][j]
				 << " ";
		}
		cout << "\n";
	}
	
	cout << endl
		 << "The second matrix is \n";
		 
	for(int i = 0; i < row2; i++){
		for(int j = 0; j < column2; j++){
			cout << matrix2[i][j]
				 << " ";
		}
		cout << "\n";
	}
	
	cout << endl;
	
}

void multiply (ofstream& out_stream, int matrix1[][SIZE], int matrix2[][SIZE], int product[][SIZE], int row1, int column1, int row2, int column2){
	
	int sum = 0;
	
	for (int i = 0; i < row1; i++){
	
		for (int k = 0; k < column2; k++){
			
			sum = 0;
			
			for(int j = 0; j < column1; j++){
			sum = sum + matrix1[i][j]*matrix2[j][k];
		
			}	
			
			product[i][k] = sum;
			out_stream << product[i][k] << " ";
		}
		
		out_stream << "\n";

	}
	
}

void output (int product[][SIZE], int row1, int column2){
	
	cout << "The product of two matrices is : \n";
	for (int i = 0; i < row1; i++){
		for (int j = 0; j < column2; j++){
			cout << product[i][j]
				 << " ";
		}
		cout << "\n";
	}
}
