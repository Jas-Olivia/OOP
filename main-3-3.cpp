#include <iostream>
using namespace std;

extern double weighted_average(int array[], int length);

int main() {
    int array[6] = {1,2,1,4,1,3};
    cout << weighted_average(array,6);
    return 0;
}