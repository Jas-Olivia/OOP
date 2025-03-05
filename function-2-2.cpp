#include <iostream>

int max_element(int array[], int length){

    int max = array[0];
    if (length<1)
    {
        return 0;
    }

    for (int i = 1; i < length; i++)
    {
      if (max < array[i])
      {
        max=array[i];
      }
      
       
    }
    return max;
}