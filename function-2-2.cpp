#include <iostream>
using namespace std;

int binary_to_int(int binary_digits[], int size){
    int integer = 0;

    for (int i = 0; i < size; i++)
    {
        integer = integer * 2 + binary_digits[i];

    }
    
    return integer;
    
}
