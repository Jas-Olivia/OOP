#include <iostream>
#include <climits>
using namespace std;

int array_min(int integers[], int length){
    if (length <= 0)
    {
        return -1;
    }
int min_value = INT_MAX;

    for (int i = 0; i < length; i++)
    {
        if (integers[i] < min_value)
        {
            min_value = integers[i];
        }
        
    }

    return min_value;
}

int array_max(int integers[], int length){
    if (length <= 0)
    {
        return -1;
    }
int max_value = INT_MIN;

for (int i = 0; i < length; i++)
{
    if (integers[i] > max_value)
    {
        max_value = integers[i];
    }
    
}

return max_value;    
}

//main funciton
int sum_min_max(int integers[], int length){
    if (length <= 0)
    {
        return -1;
    }
    
    int min_value = array_min(integers, length);
    int max_value = array_max(integers, length);

    if (min_value == -1 || max_value == -1)
    {
        return -1;
    }

    return min_value + max_value;
    
}



 







