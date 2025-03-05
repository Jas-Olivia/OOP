#include <iostream>

double array_mean(int array[], int size){
    if (size<1)
    {
        return 0.0;
    }
    double array_mean = 0;
    for (int i = 0; i < size; i++)
    {
       
        array_mean = array_mean + array[i];
        
    }
    array_mean = array_mean / size;
    return array_mean;
}