# selection_sort
Assignment 1 Intro programming 2

Assignment 1
Emily Zastenchik

SDM

Problem: 

Create a function that sorts an array of 10 integers and returns the sorted values as a vector
(selectionsort)

Analysis:

    INPUT 

    int length	- length of array and vector (10)

    OUTPUT 
    
    Unsorted array of integers
    Sorted array of integers
    Sorted vector

    FUNCTIONS 
    
    iterator "it"
    
    int rand(void);		generates random numbers
    
    double pow(double base, double exponent)
    
    void mult(int[], int);		
    multiplies random numbers using the power function x^2 + 1
    
    void sortConvert(int[], int, vector<int>&);		
      sorts integers from least to greatest and converts ints from array to vector
      
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
