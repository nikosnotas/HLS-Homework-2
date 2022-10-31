//github repo: https://github.com/nikosnotas/HLS-Homework-2.git
//High Level Synthesis, Homework 2, Nikolaos Notas 57728, task 4
#include <iostream>
using namespace std;

/* function to implement wave sort algorithm*/
template <int N>
void wave_sort (int a[N])
{
    /* step 1: bubble sort algorithm */
    for(int i = 0; i < N - 1; i++)
        {
            for(int j = 0; j < (N-i-1); j++)
            {
                if(a[j] > a[j + 1])
                {
                    int temp = 0;
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
    /* step 2: swap every 2 elements the two consecutive elements */
    for (int i = 0; i < N - 1; i = i + 2) {
        int temp = 0;
        temp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = temp;    
    }
} 

/* testing main to check the function */
int main()
{ 
  /* testing array */  
  int a[6] = {3, 2, 9, 6, 4, 1};
  
  cout << "The testing array is:" << endl;
  for (int i = 0; i < 6; i++){
    cout << a[i] << "\t";
    }
     
  wave_sort <6> (a);
  
  cout << endl << "Sorted array with the use of wave_sort algorithm:" << endl;
  
  for (int i = 0; i < 6; i++){
    cout << a[i] << "\t";
    }
  
  cout << endl;
    
  return 0;
}
 
