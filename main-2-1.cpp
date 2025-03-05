#include <iostream>
using namespace std;

extern int min_element(int array[], int length);

int main() {
    int array[5] = {-2,2,3,4,5};
    cout << min_element(array,5);
    return 0;
}