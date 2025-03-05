#include <iostream>

bool is_ascending(int array[], int length){

    if (length<= 0)
    {
        return false;
    }

    for (int i = 1; i < length; i++)
    {
      if (array[i]< array[i-1])
        return false;
      
    }
    return true;
}