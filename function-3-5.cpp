#include <iostream>
using namespace std;

double sum_even(double array[], int length)
{
    int sum=0;
    if (length < 1)
    {
        return 0; 
    }

    for (int i = 0; i < length; i+=2)
    {
            sum=sum+array[i];
        
    }
    return sum;
}

