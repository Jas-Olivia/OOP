#include <iostream>

bool is_fanarray(int array[], int length){

    if (length< 1)
    {
        return false;
    }
    int mid = length/2;

    for (int i = 0; i < mid; i++)
    {
      if (array[i] != array[length-i-1]) {
        return false;
      }
      
    }
    for (int i = 1; i <= mid; i++)
    {
        if (array[i] <= array[i-1])
        {
            return false;
        }
        
    }
    
    return true;
}