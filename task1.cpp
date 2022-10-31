//github repo: https://github.com/nikosnotas/HLS-Homework-2.git
//High Level Synthesis, Homework 2, Nikolaos Notas 57728, task 1
#include <iostream>
using namespace std;
 
/* Function to get number of bits set to 1 of a positive integer */
unsigned short count_ones (unsigned int a)
{
    unsigned short count = 0; //create variable to count the bits set to 1
    while (a) {
        count += a & 1; //If LSB is set to 1, then increase the count
        a >>= 1; //Bitwise right shift to change the LSB
    }
    return count;
}
 
/* Testing program to check the function using pseudo random numbers */
int main()
{
    cout << "Testing program for function count_ones" << endl;
    for (int i=0; i<20; i++)
    {	
	    cout << "Number of bits set to 1 in integer " << i << " : "; 
	    cout << count_ones(i) << endl;
    }
    return 0;
}
 
