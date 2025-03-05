#include <iostream>
using namespace std;

double sum_even(double array[], int length);

int main() {
    double array[6] = {1,3,5,7,9,11};
    cout << sum_even(array,6);
    return 0;
}