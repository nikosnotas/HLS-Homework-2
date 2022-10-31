//github repo: https://github.com/nikosnotas/HLS-Homework-2.git
//High Level Synthesis, Homework 2, Nikolaos Notas 57728, task 2
#include <iostream>
using namespace std;

/* function to calculate the checksum of an unsigned integer */ 
unsigned int checksum (unsigned int a)
{
    unsigned int checksum = 0; //variable to store the result 
    bool second = false; //bool variable to check if the digit is the second
    short int d = 0; //variable to store every digit
     
    while (a) {
        d = a % 10; //store in d the last digit
        
        if (second)
        {
            d *= 2; //if the digit is the second, multiple by 2
        }
        
        checksum += d / 10; //if the result is greater than 9, add the two
        checksum += d % 10; //digits and add the result to checksum
        
        second = !second; //change bool variable for the next iteration
        a = a / 10; //divide by 10 to change the last digit of the given integer
    }
    return (checksum);
}
 

int main()
{   
    cout << "Testing program for function checksum" << endl;   
    unsigned int a = 3561;
    unsigned int p;
    p = checksum(a);
    cout << "The checksum for integer " << a << " is: " << p << endl;
    return 0;
}
 
