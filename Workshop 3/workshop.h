#include <iostream>
using namespace std;
//Part 2 
void changeValue(double * ptr) {
*ptr = 42;

}

//Part 3
void printArray(double* array, int size){
for (int i = 0; i < size; i++)
{
    cout << array[i] << "";
}
cout << endl;

}
// Part 4 
double arrayMax(double *array, int size){
double maxVal = array[0];
for (int i = 1; i < size; i++)
{
    if (array[i] > maxVal)
    {
        maxVal = array[i];
    }
    return maxVal;
    
}

}
// Part 7