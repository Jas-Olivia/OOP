#include <iostream>
using namespace std;

extern int max_element(int array[], int length);

int main() {
    int array[5] = {-2,2,3,14,5};
    cout << max_element(array,5);
    return 0;
}