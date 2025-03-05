#include <iostream>

int num_count(int array[], int size, int number){
   int arraysum=0;
    if (size<1)
    {
        return 0;
    }
    for (int i = 0; i < size; i++)
    {
       if (array[i]==number){
        arraysum++;
       }
        
    }
    return arraysum;
}