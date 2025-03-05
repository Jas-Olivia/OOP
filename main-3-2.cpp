#include <iostream>
using namespace std;

extern int median_array(int array[], int length);

int main() {
    int array[7] = {2,6,5,4,3,7,8};
    cout << median_array(array,7);
    return 0;
}