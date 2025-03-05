#include <iostream>
using namespace std;

extern double array_mean(int array[], int size);

int main() {
    int array[5] = {2,2,2,2,2};
    cout << array_mean(array,5);
    return 0;
}