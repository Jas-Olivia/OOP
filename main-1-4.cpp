#include <iostream>
using namespace std;

extern int sum_two_arrays(int array[], int secondarray[], int n);

int main() {
    int array[5] = {1,2,2,2,2};
    int secondarray[5] = {3,3,3,3,3};
    cout << sum_two_arrays(array,secondarray,5);
    return 0;
}