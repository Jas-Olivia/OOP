#include <iostream>

int sum_two_arrays(int array[], int secondarray[], int size){
   int arraysum=0;
    if (size<1)
    {
        return 0;
    }
    for (int i = 0; i < size; i++)
    {
       arraysum=arraysum + array[i] + secondarray[i];
    }
    return arraysum;
}