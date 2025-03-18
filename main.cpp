#include "workshop.h"

//Part 2
int main() {
    double number = 10.5;
    changeValue(&number);
    cout << number << endl;

    return 0;
//Part 3
    double array[5] = {1.1,2.2,3.3,4.4,5.5};
    int size = 5;
    printArray(array, size);
    return 0;
// Part 4
    double array[5] = {1.1,2.2,3.3,4.4,5.5};
    int size = 5;
    double maxVal= arrayMax(array, size);
    cout << maxVal << endl;
    return 0;
}
