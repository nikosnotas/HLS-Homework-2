//github repo: https://github.com/nikosnotas/HLS-Homework-2.git
//High Level Synthesis, Homework 2, Nikolaos Notas 57728, task 3
#include <iostream>
using namespace std;

/* function to calculate the sum of each row of given array */
template <int N, int M>
void compute_row_sum (short a[N][M], short row_sum[N])
{
      for(int row = 0; row < N; row++) //loop to iterate the rows 
    {
        short sum = 0;
        for(int col = 0; col < M; col++) //loop to iterate the columns
        {
            sum += a[row][col]; //sum variable to calculate the result
        }
        row_sum[row] = sum; //the result is stored in the row_sum array
    }    
} 

/* testing main to check the function */
int main()
{ 
  /* testing array */   
  short a[4][5] = {
  { 10, 4, 7, 9, 5 },
  { 7, 5, 8, 4, 7 },
  { 45, 97, 74, 12, 9 },
  { 23, 27, 65, 11, 8 }
  };
  
  /* printing the array */
  cout << "The sample array is: " << endl; 
  for (int i = 0; i < 4; i++){
    for (int j = 0; j < 5; j++){
        cout << a[i][j] << "\t"; }
        cout << endl; }
            
  short sum[4]; // array to store the sum of each row
  
  compute_row_sum <4, 5> (a, sum); // calling the function
        
  cout << endl;
  
  for (int i = 0; i < 4; i++){
    cout << "The sum of row "<< i+1 << " is: " << sum[i] << endl;
  }
    
  return 0;
}
 
