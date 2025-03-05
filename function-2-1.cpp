#include <iostream>

int min_element(int array[], int length){

    int min = array[0];
    if (length<1)
    {
        return 0;
    }

    for (int i = 1; i < length; i++)
    {
      if (min > array[i])
      {
        min=array[i];
      }
      
       
    }
    return min;
}