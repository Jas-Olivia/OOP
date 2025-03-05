#include <iostream>

int array_sum(int array[], int size){
    int array_sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (size<1)
        {
            return 0;
        }
        array_sum = array_sum + array[i];
    }
    
    return array_sum;
}