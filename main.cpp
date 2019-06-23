#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>
using namespace std;
/*
Assignment 1
Emily Zastenchik

SDM
Problem: Create a function that sorts an array of 10 integers and returns the sorted values as a vector
(selectionsort)

Analysis:
INPUT - 
int length	- length of array and vector (10)

OUTPUT - 
Unsorted array of integers
Sorted array of integers
Sorted vector

FUNCTIONS -
iterator "it"
int rand(void);		//generates random numbers
double pow(double base, double exponent);
void mult(int[], int);		//multiplies random numbers using the power function x^2 + 1
void sortConvert(int[], int, vector<int>&);		//sorts integers from least to greatest and converts ints from array to vector
	int temp - placeholder for int
	uses two for loops to compare adjacent int values
	

Design:
Declare int length (of array)
Declare an array of ints, vector of ints, and iterator "it"
Fill the array of integers with the random numbers from 1 to 99 using the rand() function
Pass the array and the length to the mult function which includes the power function 
Display the array of integers after the mult function
Pass the array, length, and vector (as reference parameter) to the sortConvert function
	while(x[0] > x[a])	-compares all array elements to first int
		if any integer x[a] in array is greater than first element x[0], 
		switch positions so that x[0] is the lowest int in array
	while(x[a] > x[b])	-compares adjacent ints in array
	After array is sorted, assign the int elements to the vector
Display the sorted vector by dereferencing iterator

 */
void mult(int[], int);
void sortConvert(int[], int, vector<int>&);	//prototypes

int main() 
{
	int length = 10;
	int num[length];
	
	vector<int> NUM(length);
	vector<int> :: iterator it;
	
	for(int i = 0; i < length; i++)
	num[i] = rand() % 100;
	
	mult(num,length);
	cout << "Array of integers" << endl;
	for(int i = 0; i < length; i++)
	cout << num[i] << '\t';
	cout << endl;
	
	sortConvert(num, length, NUM);

	//cout << "Sorted array " << endl;
	//for(int i = 0; i < length; i++)
	//cout << num[i] << '\t';	
	//cout << endl;
	
	cout << "Sorted vector " << endl;
	for(it = NUM.begin(); it != NUM.end(); ++it)
	cout << *it << '\t';	//dereference iterator

	
	return 0;
}
void mult(int a[], int length)
{
	for(int i = 0; i < length; i++)
	a[i] = (pow(a[i], 2)) + 1;
}
void sortConvert(int x[], int length, vector<int>& NUM) //defintion
{
	int temp;
	
	for(int a = 1; a < length; a++)
		for(int b = a + 1; b < length; b++)
	{	
		while(x[0] > x[a])
		{
		temp = x[0];
		x[0] = x[a];
		x[a] = temp;
		}
		while(x[a] > x[b])
		{
		temp = x[a];
		x[a] = x[b];
		x[b] = temp;	
		}
	}
	for(int i = 0; i < length; i++)
	NUM[i] = x[i];		
}



