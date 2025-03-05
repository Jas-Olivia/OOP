#include <iostream>
using namespace std;

double sum_even(double array[], int length);

int main() {
    double array[6] = {2,2,1,4,1,3};
    cout << sum_even(array,6);
    return 0;
}