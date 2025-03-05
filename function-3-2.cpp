#include <iostream>
#include <cmath>
#include <algorithm>

// tricky questions
using namespace std;

int median_array(int array[], int length){
    
    if (length < 1 || length %2==0)
    {
        return 0;
    }

    sort(array, array+length);
    for (int i = 0; i < length; i++){
        //cout << array[i] << "";
    }
    
    
    int mid = length/2;
    int median = 0;

    median = array[mid];
    
    return median;
}